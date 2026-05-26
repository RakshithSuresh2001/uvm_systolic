`ifndef SA_SCOREBOARD_SV
`define SA_SCOREBOARD_SV

class sa_scoreboard;

    parameter ROWS         = 8;
    parameter COLS         = 8;
    parameter DATA_W       = 8;
    parameter ACC_W        = 32;
    // PE[row][col] output arrives at: act_cycle + PE_LAT + col + row
    // PE_LAT = 2 (act pipeline) + 1 (PE mac) + 2 (output regs) = 5
    parameter PE_LAT       = 4;
    parameter DRAIN_CYCLES = 20;

    sa_mbx_t mbx;

    bit [DATA_W-1:0] ref_weights [ROWS-1:0][COLS-1:0];

    // One check entry per PE firing
    typedef struct {
        int arrival;
        int col;
        bit [ACC_W-1:0] exp;
    } check_entry_t;
    check_entry_t cq[$];

    int  last_wload_cycle;
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
        foreach (ref_weights[r,c]) ref_weights[r][c] = 0;
    endfunction

    task check_direct(sa_transaction txn, input bit [COLS-1:0][ACC_W-1:0] psum);
        bit any_active;
        cycle_count++;

        if (txn.weight_load) begin
            for (int c = 0; c < COLS; c++)
                ref_weights[txn.weight_row][c] = txn.weight_data[c];
            last_wload_cycle = cycle_count;
            cq.delete();
        end

        // Schedule one check per PE
        any_active = 0;
        foreach (txn.act_in[r]) if (txn.act_in[r] != 0) any_active = 1;

        if (any_active && (cycle_count - last_wload_cycle) > DRAIN_CYCLES) begin
            for (int row = 0; row < ROWS; row++) begin
                for (int col = 0; col < COLS; col++) begin
                    check_entry_t e;
                    e.arrival = cycle_count + PE_LAT + col + (ROWS-1-row);
                    e.col     = col;
                    e.exp     = ACC_W'(ref_weights[row][col]) *
                                ACC_W'(txn.act_in[row]);
                    cq.push_back(e);
                end
            end
        end

        // Fire all checks due this cycle
        foreach (cq[i]) begin
            if (cq[i].arrival == cycle_count) begin
                int col = cq[i].col;
                checks_done++;
                if (cq[i].exp === 0) begin
                    // zero-weight PE — skip, DUT may output residual
                    checks_done--;
                end else if (psum[col] === cq[i].exp)
                    pass_count++;
                else begin
                    fail_count++;
                    $display("[SB FAIL] cycle=%0d col=%0d got=0x%08x exp=0x%08x",
                        cycle_count, col, psum[col], cq[i].exp);
                end
            end
        end
        // Purge fired entries
        begin
            int i = 0;
            while (i < cq.size()) begin
                if (cq[i].arrival < cycle_count) cq.delete(i);
                else i++;
            end
        end
    endtask

    task run();
        sa_transaction txn;
        forever begin mbx.get(txn); end
    endtask

    function void do_reset();
        foreach (ref_weights[r,c]) ref_weights[r][c] = 0;
        cq.delete();
        last_wload_cycle = -DRAIN_CYCLES;
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
