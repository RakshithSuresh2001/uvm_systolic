`timescale 1ns/1ps
`include "sa_transaction.sv"
`include "sa_scoreboard.sv"
`include "sa_coverage.sv"
`include "sa_sequences.sv"

sa_mbx_t g_drv_mbx;
sa_mbx_t g_mon_mbx;
bit [31:0] g_psum[8];
mailbox #(bit[255:0]) g_psum_mbx;

module sa_tb;
    logic clk, rst_n;
    logic                weight_load;
    logic [2:0]          weight_row;
    logic [7:0][7:0]     weight_data;
    logic [7:0][7:0]     act_in;
    logic [7:0][31:0]    psum_out;
    // Scalar aliases — workaround for Verilator packed array read bug
    wire [31:0] po0, po1, po2, po3, po4, po5, po6, po7;
    assign po0=psum_out[0]; assign po1=psum_out[1];
    assign po2=psum_out[2]; assign po3=psum_out[3];
    assign po4=psum_out[4]; assign po5=psum_out[5];
    assign po6=psum_out[6]; assign po7=psum_out[7];
    bit   [31:0]         g_psum_snap[8]; // global snapshot for scoreboard
    bit   [31:0]         g_po[8];         // live psum snapshot

    initial clk = 0;
    always #5 clk = ~clk;

    systolic_array #(.ROWS(8),.COLS(8),.DATA_W(8),.ACC_W(32)) dut (
        .clk(clk), .rst_n(rst_n),
        .weight_load(weight_load), .weight_row(weight_row),
        .weight_data(weight_data), .act_in(act_in), .psum_out(psum_out)
    );

    sa_scoreboard sb;
    sa_coverage   cov;
    string        test_name;

    task driver_run();
        sa_transaction txn;
        weight_load = 0; weight_row = 0;
        weight_data = '0; act_in = '0;
        @(posedge clk);
        wait(rst_n === 1'b1);
        @(posedge clk);
        forever begin
            g_drv_mbx.get(txn);
            @(posedge clk);
            weight_load = txn.weight_load;
            weight_row  = txn.weight_row;
            weight_data = txn.weight_data;
            act_in      = txn.act_in;
        end
    endtask

    // Sample psum into plain regs every cycle — always block has live wire access
    logic [31:0] psum_reg[8];
    always @(posedge clk) begin
        #1;
        psum_reg[0] = psum_out[0]; psum_reg[1] = psum_out[1];
        psum_reg[2] = psum_out[2]; psum_reg[3] = psum_out[3];
        psum_reg[4] = psum_out[4]; psum_reg[5] = psum_out[5];
        psum_reg[6] = psum_out[6]; psum_reg[7] = psum_out[7];
    end
    // Push live psum into mailbox from always block
    always @(posedge clk) begin
        if (rst_n && g_psum_mbx != null) begin
            bit [255:0] pv;
            pv[31:0]    = psum_out[0]; pv[63:32]   = psum_out[1];
            pv[95:64]   = psum_out[2]; pv[127:96]  = psum_out[3];
            pv[159:128] = psum_out[4]; pv[191:160] = psum_out[5];
            pv[223:192] = psum_out[6]; pv[255:224] = psum_out[7];
            g_psum_mbx.put(pv);
        end
    end

    task monitor_run();
        sa_transaction txn;
        @(posedge clk);
        wait(rst_n === 1'b1);
        forever begin
            @(posedge clk);
            #1; // sample after NBA updates settle
            txn = new();
            txn.weight_load = weight_load;
            txn.weight_row  = weight_row;
            txn.weight_data = weight_data;
            txn.act_in      = act_in;
            txn.psum_out    = psum_out;
            g_mon_mbx.put(txn);
        end
    endtask

    task run_test(string name);
        case (name)
            "directed": begin sa_directed_seq s = new(); s.run(); end
            "allones":  begin sa_allones_seq  s = new(); s.run(); end
            "random":   begin sa_random_seq   s = new(5); s.run(); end
            "full": begin
                sa_directed_seq ds = new();
                sa_allones_seq  as = new();
                sa_random_seq   rs = new(20);
                sa_corner_seq   cs = new();
                $display("[TB] Full regression");
                ds.run();
                begin sa_base_seq idle = new(); idle.send_idle(40); end
                as.run();
                begin sa_base_seq idle = new(); idle.send_idle(40); end
                rs.run();
                begin sa_base_seq idle = new(); idle.send_idle(40); end
                cs.run();
            end
            default: begin sa_directed_seq s = new(); s.run(); end
        endcase
    endtask

    initial begin
        g_drv_mbx = new();
        g_mon_mbx = new();
        g_psum_mbx = new();
        sb  = new();
        cov = new();

        rst_n = 0;
        repeat(5) @(posedge clk);
        rst_n = 1;
        repeat(3) @(posedge clk);

        if (!$value$plusargs("TEST=%s", test_name))
            test_name = "directed";

        $display("\n=== Systolic Array TB ===");
        $display("Running test: %s\n", test_name);

        fork
            driver_run();
            monitor_run();
            // sb.run() disabled — scoreboard called directly from monitor
        join_none

        repeat(3) @(posedge clk);
        run_test(test_name);
        repeat(4000) @(posedge clk);

        sb.report();
        cov.report();
        $finish;
    end

    always @(posedge clk) begin
        #1; // settle NBA before sampling for coverage
        if (rst_n && cov != null)
            cov.sample_scalar(weight_load, weight_row,
                weight_data[0],weight_data[1],weight_data[2],weight_data[3],
                weight_data[4],weight_data[5],weight_data[6],weight_data[7],
                act_in[0],act_in[1],act_in[2],act_in[3],
                act_in[4],act_in[5],act_in[6],act_in[7]);
    end

    // Unified scoreboard: schedule + check in one always block, aligned timeline
    int _cyc;
    always @(posedge clk) begin
        #1; // settle NBA so psum_out reads post-edge value
        if (rst_n) begin
            _cyc = _cyc + 1;
            // Schedule checks based on current cycle inputs
            sb.schedule(_cyc, weight_load, weight_row, weight_data,
                act_in[0],act_in[1],act_in[2],act_in[3],
                act_in[4],act_in[5],act_in[6],act_in[7]);
            // Fire pending checks against current psum_out
            for (int _i = 0; _i < int'(sb.cq.size()); _i++) begin
                if (sb.cq[_i].arrival == _cyc && sb.cq[_i].exp !== 0) begin
                    sb.checks_done++;
                    case (sb.cq[_i].col)
                      0: if (psum_out[0]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col0 got=%08x exp=%08x",_cyc,psum_out[0],sb.cq[_i].exp); end
                      1: if (psum_out[1]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col1 got=%08x exp=%08x",_cyc,psum_out[1],sb.cq[_i].exp); end
                      2: if (psum_out[2]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col2 got=%08x exp=%08x",_cyc,psum_out[2],sb.cq[_i].exp); end
                      3: if (psum_out[3]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col3 got=%08x exp=%08x",_cyc,psum_out[3],sb.cq[_i].exp); end
                      4: if (psum_out[4]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col4 got=%08x exp=%08x",_cyc,psum_out[4],sb.cq[_i].exp); end
                      5: if (psum_out[5]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col5 got=%08x exp=%08x",_cyc,psum_out[5],sb.cq[_i].exp); end
                      6: if (psum_out[6]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col6 got=%08x exp=%08x",_cyc,psum_out[6],sb.cq[_i].exp); end
                      7: if (psum_out[7]===sb.cq[_i].exp) sb.pass_count++; else begin sb.fail_count++; $display("[SBF] cyc=%0d col7 got=%08x exp=%08x",_cyc,psum_out[7],sb.cq[_i].exp); end
                    endcase
                end
            end
            while (sb.cq.size() > 0 && sb.cq[0].arrival <= _cyc) sb.cq.delete(0);
        end
    end
    // =====================================================================
    // SVA Assertions — structural protocol checks
    // =====================================================================

    // 1. psum_out never X or Z after reset
    property p_psum_no_x;
        @(posedge clk) disable iff (!rst_n)
        !$isunknown(psum_out);
    endproperty
    a_psum_no_x: assert property (p_psum_no_x)
        else $error("[SVA FAIL] psum_out contains X/Z at time %0t", $time);

    // 2. act_in must be zero during weight_load
    property p_act_zero_during_wload;
        @(posedge clk) disable iff (!rst_n)
        weight_load |-> (act_in == '0);
    endproperty
    a_act_zero_during_wload: assert property (p_act_zero_during_wload)
        else $error("[SVA FAIL] act_in nonzero during weight_load at time %0t", $time);

    // 3. weight_row increments by 1 on each consecutive weight_load cycle
    property p_wrow_increments;
        @(posedge clk) disable iff (!rst_n)
        (weight_load && $past(weight_load)) |->
            (weight_row == $past(weight_row) + 1'b1);
    endproperty
    a_wrow_increments: assert property (p_wrow_increments)
        else $error("[SVA FAIL] weight_row did not increment during weight_load at time %0t", $time);

    // 4. weight_load should not stay high more than 8 consecutive cycles
    //    (implemented as immediate assertion with counter — ##[M:N] unsupported in Verilator)
    int unsigned wload_streak;
    always @(posedge clk) begin
        if (!rst_n) wload_streak <= 0;
        else if (weight_load) begin
            wload_streak <= wload_streak + 1;
            assert (wload_streak < 8)
                else $error("[SVA FAIL] weight_load high for >8 cycles at time %0t", $time);
        end else
            wload_streak <= 0;
    end

    // 5. psum_out stable for at least 1 cycle after reset deasserts
    property p_psum_stable_after_reset;
        @(posedge clk)
        $rose(rst_n) |=> $stable(psum_out);
    endproperty
    a_psum_stable_after_reset: assert property (p_psum_stable_after_reset)
        else $error("[SVA FAIL] psum_out unstable right after reset at time %0t", $time);

    // =====================================================================
    always @(posedge clk)
        if (rst_n && (|psum_out))
            $display("[PSUM] cycle=%0d p0=%08x p1=%08x p2=%08x p3=%08x p4=%08x p5=%08x p6=%08x p7=%08x",
                $time/10, psum_out[0], psum_out[1], psum_out[2], psum_out[3],
                psum_out[4], psum_out[5], psum_out[6], psum_out[7]);
        
            
                

    initial begin #4000000; $display("[TB] TIMEOUT"); $finish; end
endmodule
