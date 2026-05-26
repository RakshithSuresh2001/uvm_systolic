`timescale 1ns/1ps
`include "sa_transaction.sv"
`include "sa_scoreboard.sv"
`include "sa_coverage.sv"
`include "sa_sequences.sv"

sa_mbx_t g_drv_mbx;
sa_mbx_t g_mon_mbx;

module sa_tb;
    logic clk, rst_n;
    logic                weight_load;
    logic [2:0]          weight_row;
    logic [7:0][7:0]     weight_data;
    logic [7:0][7:0]     act_in;
    logic [7:0][31:0]    psum_out;

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
            @(posedge clk); #2;
            weight_load = txn.weight_load;
            weight_row  = txn.weight_row;
            weight_data = txn.weight_data;
            act_in      = txn.act_in;
        end
    endtask

    task monitor_run();
        sa_transaction txn;
        logic [7:0][31:0] psum_prev;
        psum_prev = '0;
        @(posedge clk);
        wait(rst_n === 1'b1);
        forever begin
            @(posedge clk); #1;
            txn = new();
            txn.weight_load = weight_load;
            txn.weight_row  = weight_row;
            txn.weight_data = weight_data;
            txn.act_in      = act_in;
            txn.psum_out    = psum_out;
            psum_prev       = psum_out;
            g_mon_mbx.put(txn);
            sb.check_direct(txn, psum_out);
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
                sa_random_seq   rs = new(5);
                $display("[TB] Full regression");
                ds.run(); as.run(); rs.run();
            end
            default: begin sa_directed_seq s = new(); s.run(); end
        endcase
    endtask

    initial begin
        g_drv_mbx = new();
        g_mon_mbx = new();
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
        repeat(600) @(posedge clk);

        sb.report();
        cov.report();
        $finish;
    end

    always @(posedge clk)
        if (rst_n && cov != null) begin
            sa_transaction t = new();
            t.weight_load = weight_load; t.weight_row = weight_row;
            t.weight_data = weight_data; t.act_in = act_in;
            t.psum_out = psum_out;
            cov.sample(t);
        end

    // Detailed psum monitor all cols
    always @(posedge clk)
        if (rst_n && (|psum_out) != 0)
            $display("[PSUM] cycle=%0d p0=%08x p1=%08x p2=%08x p3=%08x p4=%08x p5=%08x p6=%08x p7=%08x",
                $time/10, psum_out[0], psum_out[1], psum_out[2], psum_out[3],
                psum_out[4], psum_out[5], psum_out[6], psum_out[7]);
        
            
                

    initial begin #2000000; $display("[TB] TIMEOUT"); $finish; end
endmodule
