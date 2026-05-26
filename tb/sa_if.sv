// =============================================================================
// sa_if.sv — Interface for 8x8 Systolic Array Testbench
// =============================================================================
`ifndef SA_IF_SV
`define SA_IF_SV

interface sa_if #(
    parameter ROWS   = 8,
    parameter COLS   = 8,
    parameter DATA_W = 8,
    parameter ACC_W  = 32
)(
    input logic clk,
    input logic rst_n
);
    logic                          weight_load;
    logic [$clog2(ROWS)-1:0]       weight_row;
    logic [COLS-1:0][DATA_W-1:0]   weight_data;
    logic [ROWS-1:0][DATA_W-1:0]   act_in;
    logic [COLS-1:0][ACC_W-1:0]    psum_out;

    modport tb_mp  (output weight_load, weight_row, weight_data, act_in, input psum_out, input clk, input rst_n);
    modport dut_mp (
        input  clk, rst_n,
        input  weight_load, weight_row, weight_data, act_in,
        output psum_out
    );

endinterface

`endif
