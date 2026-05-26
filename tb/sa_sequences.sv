// =============================================================================
// sa_sequences.sv — Sequences for Systolic Array TB
// =============================================================================
`ifndef SA_SEQUENCES_SV
`define SA_SEQUENCES_SV

class sa_base_seq;
    function new(); endfunction

    task send_idle(int n);
        sa_transaction txn;
        repeat (n) begin
            txn = new();
            txn.weight_load = 0;
            txn.act_in      = '0;
            g_drv_mbx.put(txn);
        end
    endtask

    task load_weights(bit [7:0] w [8][8]);
        sa_transaction txn;
        for (int r = 0; r < 8; r++) begin
            txn = new();
            txn.weight_load = 1;
            txn.weight_row  = 3'(r);
            for (int c = 0; c < 8; c++)
                txn.weight_data[c] = w[r][c];
            txn.act_in = '0;
            g_drv_mbx.put(txn);
        end
        send_idle(20); // flush any startup transients
    endtask

    task send_activation(bit [7:0] acts [8]);
        sa_transaction txn;
        txn = new();
        txn.weight_load = 0;
        for (int r = 0; r < 8; r++) txn.act_in[r] = acts[r];
        g_drv_mbx.put(txn);
        send_idle(20); // flush pipeline
    endtask
endclass

// =============================================================================
// Directed: identity weights
// =============================================================================
class sa_directed_seq extends sa_base_seq;
    function new(); super.new(); endfunction

    task run();
        bit [7:0] w[8][8];
        bit [7:0] a[8];
        $display("[SEQ] Directed: identity weights");

        for (int r = 0; r < 8; r++)
            for (int c = 0; c < 8; c++)
                w[r][c] = (r == c) ? 8'h01 : 8'h00;
        load_weights(w);

        foreach (a[r]) a[r] = 8'h01;
        $display("[SEQ] Sending all-ones activation");
        send_activation(a);

        foreach (a[r]) a[r] = 8'hFF;
        $display("[SEQ] Sending all-max activation");
        send_activation(a);
    endtask
endclass

// =============================================================================
// All-ones weights
// =============================================================================
class sa_allones_seq extends sa_base_seq;
    function new(); super.new(); endfunction

    task run();
        bit [7:0] w[8][8];
        bit [7:0] a[8];
        $display("[SEQ] All-ones weights");

        for (int r = 0; r < 8; r++)
            for (int c = 0; c < 8; c++)
                w[r][c] = 8'h01;
        load_weights(w);

        foreach (a[r]) a[r] = 8'h01;
        $display("[SEQ] act=1 -> exp psum=8 per col");
        send_activation(a);

        foreach (a[r]) a[r] = 8'h02;
        $display("[SEQ] act=2 -> exp psum=16 per col");
        send_activation(a);
    endtask
endclass

// =============================================================================
// Random weights and activations
// =============================================================================
class sa_random_seq extends sa_base_seq;
    int unsigned num_vectors;
    function new(int unsigned n = 5); super.new(); num_vectors = n; endfunction

    task run();
        sa_transaction txn;
        bit [7:0] w[8][8];
        bit [7:0] a[8];
        $display("[SEQ] Random: %0d vectors", num_vectors);

        repeat (num_vectors) begin
            for (int r = 0; r < 8; r++)
                for (int c = 0; c < 8; c++)
                    w[r][c] = 8'($urandom_range(1,255));
            load_weights(w);

            foreach (a[r]) a[r] = 8'($urandom_range(1,255));
            send_activation(a);
        end
    endtask
endclass

`endif
