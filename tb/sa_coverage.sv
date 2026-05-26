// =============================================================================
// sa_coverage.sv — Functional Coverage for Systolic Array TB
// =============================================================================
`ifndef SA_COVERAGE_SV
`define SA_COVERAGE_SV

class sa_coverage;

    parameter ROWS   = 8;
    parameter COLS   = 8;
    parameter DATA_W = 8;

    // Coverage bins — tracked manually since no UVM/covergroup
    int unsigned rows_loaded        [8];   // which rows got weight loads
    int unsigned act_zero_count;           // cycles with all-zero activations
    int unsigned act_max_count;            // cycles with all-max activations
    int unsigned act_mixed_count;          // cycles with mixed activations
    int unsigned weight_load_count;        // total weight load cycles
    int unsigned total_cycles;

    function new();
        foreach (rows_loaded[r]) rows_loaded[r] = 0;
        act_zero_count   = 0;
        act_max_count    = 0;
        act_mixed_count  = 0;
        weight_load_count= 0;
        total_cycles     = 0;
    endfunction

    function void sample(sa_transaction txn);
        bit all_zero, all_max;
        total_cycles++;

        // Weight row coverage
        if (txn.weight_load)  begin
            rows_loaded[txn.weight_row]++;
            weight_load_count++;
        end

        // Activation range coverage
        all_zero = 1;
        all_max  = 1;
        foreach (txn.act_in[r]) begin
            if (txn.act_in[r] != 0)   all_zero = 0;
            if (txn.act_in[r] != 8'hFF) all_max = 0;
        end

        if (all_zero)       act_zero_count++;
        else if (all_max)   act_max_count++;
        else                act_mixed_count++;
    endfunction

    function void report();
        int rows_hit;
        real row_cov, act_cov;
        rows_hit = 0;

        $display("\n=== Coverage Report ===");

        // Weight row coverage
        $display("  Weight Row Coverage:");
        foreach (rows_loaded[r]) begin
            $display("    row[%0d]: %0d loads %s",
                r, rows_loaded[r], rows_loaded[r] > 0 ? "HIT" : "MISS");
            if (rows_loaded[r] > 0) rows_hit++;
        end
        row_cov = (real'(rows_hit) / real'(ROWS)) * 100.0;
        $display("  Row coverage: %0d/8 (%.1f%%)", rows_hit, row_cov);

        // Activation coverage
        $display("  Activation Patterns:");
        $display("    All-zero  : %0d cycles", act_zero_count);
        $display("    All-max   : %0d cycles", act_max_count);
        $display("    Mixed     : %0d cycles", act_mixed_count);

        // Overall
        $display("  Total cycles    : %0d", total_cycles);
        $display("  Weight loads    : %0d", weight_load_count);
        $display("=======================\n");
    endfunction

endclass

`endif
