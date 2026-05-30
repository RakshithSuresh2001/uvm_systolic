`ifndef SA_SCOREBOARD_SV
`define SA_SCOREBOARD_SV

class sa_scoreboard;

    parameter ROWS         = 8;
    parameter COLS         = 8;
    parameter DATA_W       = 8;
    parameter ACC_W        = 32;
    parameter PE_LAT       = 4;
    parameter DRAIN_CYCLES = 50;
    parameter ACT_SPACING  = 50;

    sa_mbx_t mbx;

    bit [DATA_W-1:0] ref_weights [ROWS-1:0][COLS-1:0];

    typedef struct { int arrival; int col; int row; bit [ACC_W-1:0] exp; } check_entry_t;
    check_entry_t cq[$];

    int  last_wload_cycle;
    int  last_act_cycle;
    int  unsigned pass_count;
    int  unsigned fail_count;
    int  unsigned cycle_count;
    int  unsigned checks_done;

    function new();
        mbx              = g_mon_mbx;
        pass_count       = 0;
        fail_count       = 0;
        cycle_count      = 0;
        checks_done      = 0;
        last_wload_cycle = -DRAIN_CYCLES;
        last_act_cycle   = -ACT_SPACING;
        foreach (ref_weights[r,c]) ref_weights[r][c] = 0;
    endfunction

    task check_direct(sa_transaction txn);
        bit any_active;
        cycle_count++;

        if (txn.weight_load) begin
            for (int c = 0; c < COLS; c++)
                ref_weights[txn.weight_row][c] = txn.weight_data[c];
            last_wload_cycle = cycle_count;
            cq.delete();
        end

        any_active = 0;
        foreach (txn.act_in[r]) if (txn.act_in[r] != 0) any_active = 1;

        if (any_active
            && (cycle_count - last_wload_cycle) > DRAIN_CYCLES
            && (cycle_count - last_act_cycle)   > ACT_SPACING) begin
            last_act_cycle = cycle_count;
            for (int row = 0; row < ROWS; row++) begin
                for (int col = 0; col < COLS; col++) begin
                    check_entry_t e;
                    e.arrival = cycle_count + PE_LAT + col + (ROWS-1-row);
                    e.col     = col;
                    e.row     = row;
                    e.exp     = ACC_W'(ref_weights[row][col]) *
                                ACC_W'(txn.act_in[row]);
                    cq.push_back(e);
                end
            end
        end

        // psum check done externally in tb via check_psum_entry()
    endtask

    // Called from tb always block with direct wire access per column
    function void fire_checks(int cyc,
        input bit [31:0] p0,p1,p2,p3,p4,p5,p6,p7);
        foreach (cq[i]) begin
            if (cq[i].arrival == cyc) begin
                int col = cq[i].col;
                bit [31:0] got;
                case (col)
                    0: got=p0; 1: got=p1; 2: got=p2; 3: got=p3;
                    4: got=p4; 5: got=p5; 6: got=p6; 7: got=p7;
                    default: got=0;
                endcase
                checks_done++;
                if (cq[i].exp === 0) checks_done--;
                else if (got === cq[i].exp) pass_count++;
                else begin
                    fail_count++;
                    $display("[SB FAIL] cycle=%0d col=%0d got=0x%08x exp=0x%08x",
                        cyc, col, got, cq[i].exp);
                end
            end
        end
        begin
            int i = 0;
            while (i < int'(cq.size())) begin
                if (cq[i].arrival <= cyc) cq.delete(i);
                else i++;
            end
        end
    endfunction


    // Schedule checks — called from tb always block with scalar args, uses tb cycle counter
    function void schedule(int cyc, bit wload, bit [2:0] wrow,
        bit [COLS-1:0][DATA_W-1:0] wdata,
        bit [7:0] a0,a1,a2,a3,a4,a5,a6,a7);
        bit [7:0] acts[8];
        bit any_active;
        acts[0]=a0; acts[1]=a1; acts[2]=a2; acts[3]=a3;
        acts[4]=a4; acts[5]=a5; acts[6]=a6; acts[7]=a7;

        if (wload) begin
            for (int c = 0; c < COLS; c++)
                ref_weights[wrow][c] = wdata[c];
            last_wload_cycle = cyc;
            cq.delete();
        end

        any_active = 0;
        foreach (acts[r]) if (acts[r] != 0) any_active = 1;

        if (any_active
            && (cyc - last_wload_cycle) > DRAIN_CYCLES
            && (cyc - last_act_cycle)   > ACT_SPACING) begin
            last_act_cycle = cyc;
            for (int row = 0; row < ROWS; row++) begin
                for (int col = 0; col < COLS; col++) begin
                    check_entry_t e;
                    e.arrival = cyc + PE_LAT + col + (ROWS-1-row);
                    e.col     = col;
                    e.row     = row;
                    e.exp     = ACC_W'(ref_weights[row][col]) * ACC_W'(acts[row]);
                    cq.push_back(e);
                end
            end
        end
    endfunction

    task run();
        sa_transaction txn;
        forever begin mbx.get(txn); end
    endtask

    function void do_reset();
        foreach (ref_weights[r,c]) ref_weights[r][c] = 0;
        cq.delete();
        last_wload_cycle = -DRAIN_CYCLES;
        last_act_cycle   = -ACT_SPACING;
    endfunction

    function void report();
        $display("\n=== Scoreboard Report ===");
        $display("  Cycles  : %0d", cycle_count);
        $display("  Checks  : %0d", checks_done);
        $display("  PASS    : %0d", pass_count);
        $display("  FAIL    : %0d", fail_count);
        if (fail_count == 0)
            $display("  RESULT  : TEST PASSED");
        else
            $display("  RESULT  : TEST FAILED");
        $display("=========================\n");
    endfunction

endclass

`endif
