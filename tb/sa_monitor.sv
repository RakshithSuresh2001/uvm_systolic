// =============================================================================
// sa_monitor.sv — Monitor for Systolic Array TB
// =============================================================================
`ifndef SA_MONITOR_SV
`define SA_MONITOR_SV

class sa_monitor;

    virtual sa_if vif;
    int unsigned sample_count;

    sa_mbx_t mbx;
    function new(virtual sa_if vif);
        this.vif          = vif;
        this.mbx          = g_mon_mbx;
        this.sample_count = 0;
    endfunction

    task run();
        sa_transaction txn;

        // Wait for reset
        @(posedge vif.clk);
        wait (vif.rst_n === 1'b1);

        forever begin
            @(posedge vif.clk);
            #1;
            txn = new();
            txn.weight_load = vif.weight_load;
            txn.weight_row  = vif.weight_row;
            txn.weight_data = vif.weight_data;
            txn.act_in      = vif.act_in;
            txn.psum_out    = vif.psum_out;
            mbx.put(txn);
            sample_count++;
        end
    endtask

endclass

`endif
