# =============================================================================
# Makefile — Systolic Array Structured Testbench (Verilator)
# =============================================================================

RTL = rtl/pe.sv rtl/systolic_array.sv
TB  = tb/sa_if.sv tb/sa_tb.sv
INC = +incdir+tb

TEST ?= directed

sim: clean
	verilator --binary -sv --timing \
		--top-module sa_tb \
		$(INC) \
		$(RTL) $(TB) \
		--Mdir obj_dir -o sim_sa
	./obj_dir/sim_sa +TEST=$(TEST)

lint:
	verilator --lint-only -sv --timing \
		$(INC) \
		$(RTL) $(TB)

clean:
	rm -rf obj_dir waves.vcd *.log

.PHONY: sim lint clean
