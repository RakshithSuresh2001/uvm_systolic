// =============================================================================
// sa_transaction.sv — Transaction class for Systolic Array TB
// =============================================================================
`ifndef SA_TRANSACTION_SV
`define SA_TRANSACTION_SV

class sa_transaction;

    parameter ROWS   = 8;
    parameter COLS   = 8;
    parameter DATA_W = 8;
    parameter ACC_W  = 32;

    // Weight load fields
    rand bit                          weight_load;
    rand bit [2:0]                    weight_row;
    bit [COLS-1:0][DATA_W-1:0]   weight_data;

    // Activation inputs
    bit [ROWS-1:0][DATA_W-1:0]   act_in;

    // Output — captured by monitor
    bit [COLS-1:0][ACC_W-1:0]         psum_out;

    // Constraints removed — Verilator does not support them; caller sets fields explicitly

    function new();
    endfunction

    function string to_string();
        string s;
        s = $sformatf("wload=%0b row=%0d | act=[", weight_load, weight_row);
        foreach (act_in[i]) s = {s, $sformatf("%0d ", act_in[i])};
        s = {s, "] | psum=["};
        foreach (psum_out[i]) s = {s, $sformatf("%0d ", psum_out[i])};
        s = {s, "]"};
        return s;
    endfunction

    function sa_transaction clone();
        sa_transaction t = new();
        t.weight_load = this.weight_load;
        t.weight_row  = this.weight_row;
        t.weight_data = this.weight_data;
        t.act_in      = this.act_in;
        t.psum_out    = this.psum_out;
        return t;
    endfunction

endclass

typedef mailbox #(sa_transaction) sa_mbx_t;

`endif
