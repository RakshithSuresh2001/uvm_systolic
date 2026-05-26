// =============================================================================
// sa_driver.sv — Driver for Systolic Array TB
// =============================================================================
`ifndef SA_DRIVER_SV
`define SA_DRIVER_SV

class sa_driver;

    virtual sa_if vif;
    int unsigned txn_count;

    sa_mbx_t mbx;
    function new(virtual sa_if vif);
        this.vif       = vif;
        this.mbx       = g_drv_mbx;
        this.txn_count = 0;
    endfunction

    task run();
        sa_transaction txn;

        $display("[DRV] Driver started");
        // Initialize signals
        vif.weight_load <= 0;
        vif.weight_row  <= 0;
        vif.weight_data <= '0;
        vif.act_in      <= '0;

        // Wait for reset
        @(posedge vif.clk);
        wait (vif.rst_n === 1'b1);
        @(posedge vif.clk);

        $display("[DRV] Entering get loop");
        forever begin
            mbx.get(txn);
            $display("[DRV] Got txn wload=%0d", txn.weight_load);
            drive(txn);
            txn_count++;
        end
    endtask

    task drive(sa_transaction txn);
        @(posedge vif.clk);
        $display("[DRV] drive: wload=%0d act0=%0d", txn.weight_load, txn.act_in[0]);
        vif.weight_load <= txn.weight_load;
        vif.weight_row  <= txn.weight_row;
        vif.weight_data <= txn.weight_data;
        vif.act_in      <= txn.act_in;
    endtask

endclass

`endif
