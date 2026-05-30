`ifndef SA_COVERAGE_SV
`define SA_COVERAGE_SV

class sa_coverage;
    parameter ROWS   = 8;
    parameter COLS   = 8;
    parameter DATA_W = 8;

    // Weight row hit tracking
    int unsigned rows_loaded [8];

    // Activation pattern counts
    int unsigned act_zero_count;
    int unsigned act_max_count;
    int unsigned act_mixed_count;
    int unsigned act_bb_count;       // back-to-back nonzero activations

    // Weight value bin counts (across all rows/cols)
    int unsigned wbin_zero;          // weight == 0
    int unsigned wbin_low;           // 1-63
    int unsigned wbin_mid;           // 64-191
    int unsigned wbin_high;          // 192-254
    int unsigned wbin_max;           // 255

    // Activation value bin counts (across all rows)
    int unsigned abin_zero;
    int unsigned abin_low;
    int unsigned abin_mid;
    int unsigned abin_high;
    int unsigned abin_max;

    // Overflow-prone: weight=255 and act=255 in same cycle
    int unsigned overflow_prone_count;

    // Zero weight row exercised
    int unsigned zero_weight_row_count;

    int unsigned weight_load_count;
    int unsigned total_cycles;

    // Track previous activation for back-to-back detection
    bit prev_act_nonzero;
    // Track if any loaded weight was max (for overflow-prone cross-coverage)
    bit any_max_weight_loaded;

    function new();
        foreach (rows_loaded[r]) rows_loaded[r] = 0;
        act_zero_count      = 0;
        act_max_count       = 0;
        act_mixed_count     = 0;
        act_bb_count        = 0;
        wbin_zero           = 0;
        wbin_low            = 0;
        wbin_mid            = 0;
        wbin_high           = 0;
        wbin_max            = 0;
        abin_zero           = 0;
        abin_low            = 0;
        abin_mid            = 0;
        abin_high           = 0;
        abin_max            = 0;
        overflow_prone_count= 0;
        zero_weight_row_count = 0;
        weight_load_count   = 0;
        total_cycles        = 0;
        prev_act_nonzero      = 0;
        any_max_weight_loaded = 0;
    endfunction

    function void sample(sa_transaction txn);
        bit all_zero_act, all_max_act, any_nonzero_act;
        bit has_max_weight, has_max_act;
        bit all_zero_wrow;
        total_cycles++;

        // Weight load coverage
        if (txn.weight_load) begin
            rows_loaded[txn.weight_row]++;
            weight_load_count++;

            // Weight value bins
            all_zero_wrow = 1;
            has_max_weight = 0;
            for (int c = 0; c < COLS; c++) begin
                bit [7:0] w = txn.weight_data[c];
                if (w == 0)                    wbin_zero++;
                else if (w <= 63)              wbin_low++;
                else if (w <= 191)             wbin_mid++;
                else if (w <= 254)             wbin_high++;
                else                           wbin_max++;
                if (w != 0) all_zero_wrow = 0;
                if (w == 8'hFF) has_max_weight = 1;
            end
            if (all_zero_wrow) zero_weight_row_count++;
        end

        // Activation coverage
        all_zero_act   = 1;
        all_max_act    = 1;
        any_nonzero_act= 0;
        has_max_act    = 0;
        foreach (txn.act_in[r]) begin
            bit [7:0] a = txn.act_in[r];
            if (a != 0)      all_zero_act = 0;
            if (a != 8'hFF)  all_max_act  = 0;
            if (a != 0)      any_nonzero_act = 1;
            if (a == 8'hFF)  has_max_act = 1;

            // Activation value bins
            if (a == 0)           abin_zero++;
            else if (a <= 63)     abin_low++;
            else if (a <= 191)    abin_mid++;
            else if (a <= 254)    abin_high++;
            else                  abin_max++;
        end

        if (all_zero_act)       act_zero_count++;
        else if (all_max_act)   act_max_count++;
        else                    act_mixed_count++;

        // Back-to-back: two activations within 25 cycles of each other
        if (any_nonzero_act) begin
            if (prev_act_nonzero)
                act_bb_count++;
            prev_act_nonzero = 1;
        end else begin
            prev_act_nonzero = 0;
        end

        // Track max weight across all loads
        if (txn.weight_load && has_max_weight)
            any_max_weight_loaded = 1;
        // Reset on new weight load sequence start (weight_row==0)
        if (txn.weight_load && txn.weight_row == 0)
            any_max_weight_loaded = has_max_weight;

        // Overflow-prone: any max weight in current weight set AND max act fired
        if (!txn.weight_load && any_nonzero_act && has_max_act && any_max_weight_loaded)
            overflow_prone_count++;
    endfunction


    // Scalar-arg sampling to avoid Verilator packed-array-in-class corruption
    function void sample_scalar(bit wload, bit [2:0] wrow,
        bit [7:0] w0,w1,w2,w3,w4,w5,w6,w7,
        bit [7:0] a0,a1,a2,a3,a4,a5,a6,a7);
        bit [7:0] w[8];
        bit [7:0] a[8];
        bit all_zero_act, all_max_act, any_nonzero_act;
        bit has_max_weight, has_max_act, all_zero_wrow;
        w[0]=w0;w[1]=w1;w[2]=w2;w[3]=w3;w[4]=w4;w[5]=w5;w[6]=w6;w[7]=w7;
        a[0]=a0;a[1]=a1;a[2]=a2;a[3]=a3;a[4]=a4;a[5]=a5;a[6]=a6;a[7]=a7;
        total_cycles++;

        if (wload) begin
            rows_loaded[wrow]++;
            weight_load_count++;
            all_zero_wrow = 1;
            has_max_weight = 0;
            foreach (w[c]) begin
                if (w[c]==0) wbin_zero++;
                else if (w[c]<=63) wbin_low++;
                else if (w[c]<=191) wbin_mid++;
                else if (w[c]<=254) wbin_high++;
                else wbin_max++;
                if (w[c]!=0) all_zero_wrow = 0;
                if (w[c]==8'hFF) has_max_weight = 1;
            end
            if (all_zero_wrow) zero_weight_row_count++;
            if (has_max_weight) any_max_weight_loaded = 1;
            if (wrow == 0) any_max_weight_loaded = has_max_weight;
        end

        all_zero_act=1; all_max_act=1; any_nonzero_act=0; has_max_act=0;
        foreach (a[r]) begin
            if (a[r]!=0) all_zero_act=0;
            if (a[r]!=8'hFF) all_max_act=0;
            if (a[r]!=0) any_nonzero_act=1;
            if (a[r]==8'hFF) has_max_act=1;
            if (a[r]==0) abin_zero++;
            else if (a[r]<=63) abin_low++;
            else if (a[r]<=191) abin_mid++;
            else if (a[r]<=254) abin_high++;
            else abin_max++;
        end
        if (all_zero_act) act_zero_count++;
        else if (all_max_act) act_max_count++;
        else act_mixed_count++;

        if (any_nonzero_act && prev_act_nonzero) act_bb_count++;
        prev_act_nonzero = any_nonzero_act;

        if (!wload && any_nonzero_act && has_max_act && any_max_weight_loaded)
            overflow_prone_count++;
    endfunction

    function void report();
        int rows_hit;
        real row_pct;
        int total_wbins, total_abins;
        rows_hit = 0;

        $display("\n=== Coverage Report ===");

        // Weight row coverage
        $display("  Weight Row Coverage:");
        foreach (rows_loaded[r]) begin
            $display("    row[%0d]: %0d loads  %s",
                r, rows_loaded[r], rows_loaded[r] > 0 ? "HIT" : "MISS");
            if (rows_loaded[r] > 0) rows_hit++;
        end
        row_pct = (real'(rows_hit) / real'(ROWS)) * 100.0;
        $display("  Row coverage: %0d/8 (%.1f%%)", rows_hit, row_pct);

        // Weight value bins
        total_wbins = wbin_zero + wbin_low + wbin_mid + wbin_high + wbin_max;
        $display("  Weight Value Bins (total=%0d):", total_wbins);
        $display("    zero    (0)      : %0d  %s", wbin_zero, wbin_zero > 0 ? "HIT" : "MISS");
        $display("    low     (1-63)   : %0d  %s", wbin_low,  wbin_low  > 0 ? "HIT" : "MISS");
        $display("    mid     (64-191) : %0d  %s", wbin_mid,  wbin_mid  > 0 ? "HIT" : "MISS");
        $display("    high    (192-254): %0d  %s", wbin_high, wbin_high > 0 ? "HIT" : "MISS");
        $display("    max     (255)    : %0d  %s", wbin_max,  wbin_max  > 0 ? "HIT" : "MISS");

        // Activation value bins
        total_abins = abin_zero + abin_low + abin_mid + abin_high + abin_max;
        $display("  Activation Value Bins (total=%0d):", total_abins);
        $display("    zero    (0)      : %0d  %s", abin_zero, abin_zero > 0 ? "HIT" : "MISS");
        $display("    low     (1-63)   : %0d  %s", abin_low,  abin_low  > 0 ? "HIT" : "MISS");
        $display("    mid     (64-191) : %0d  %s", abin_mid,  abin_mid  > 0 ? "HIT" : "MISS");
        $display("    high    (192-254): %0d  %s", abin_high, abin_high > 0 ? "HIT" : "MISS");
        $display("    max     (255)    : %0d  %s", abin_max,  abin_max  > 0 ? "HIT" : "MISS");

        // Activation patterns
        $display("  Activation Patterns:");
        $display("    All-zero        : %0d cycles", act_zero_count);
        $display("    All-max         : %0d cycles  %s", act_max_count,  act_max_count  > 0 ? "HIT" : "MISS");
        $display("    Mixed           : %0d cycles  %s", act_mixed_count, act_mixed_count > 0 ? "HIT" : "MISS");
        $display("    Back-to-back    : %0d cycles  %s", act_bb_count,   act_bb_count   > 0 ? "HIT" : "MISS");

        // Corner cases
        $display("  Corner Cases:");
        $display("    Zero weight row : %0d  %s", zero_weight_row_count, zero_weight_row_count > 0 ? "HIT" : "MISS");
        $display("    Overflow-prone  : %0d  %s", overflow_prone_count,  overflow_prone_count  > 0 ? "HIT" : "MISS");

        $display("  Total cycles    : %0d", total_cycles);
        $display("  Weight loads    : %0d", weight_load_count);
        $display("=======================\n");
    endfunction

endclass
`endif
