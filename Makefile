# =============================================================================
# Makefile — Systolic Array Structured Testbench (Verilator)
# =============================================================================
RTL    = rtl/pe.sv rtl/systolic_array.sv
TB     = tb/sa_tb.sv
INC    = +incdir+tb
TEST   ?= directed
SEEDS  ?= 1 2 3 4 5

sim: clean
	verilator --binary -sv --timing --assert \
		--top-module sa_tb \
		$(INC) \
		$(RTL) $(TB) \
		--Mdir obj_dir -o sim_sa
	./obj_dir/sim_sa +TEST=$(TEST)

regress: clean
	verilator --binary -sv --timing --assert \
		--top-module sa_tb \
		$(INC) \
		$(RTL) $(TB) \
		--Mdir obj_dir -o sim_sa
	@echo ""; echo "=== Regression: TEST=full, seeds=$(SEEDS) ==="; echo ""
	@pass=0; fail=0; \
	for seed in $(SEEDS); do \
		out=$$(./obj_dir/sim_sa +TEST=full 2>&1); \
		if echo "$$out" | grep -q "TEST PASSED"; then \
			pass=$$((pass+1)); \
			checks=$$(echo "$$out" | grep "Checks" | awk '{print $$3}'); \
			echo "  seed=$$seed : PASS ($$checks checks)"; \
		else \
			fail=$$((fail+1)); \
			echo "  seed=$$seed : FAIL"; \
		fi; \
	done; \
	echo ""; \
	echo "=== Regression Summary ==="; \
	total=$$(echo $(SEEDS) | wc -w); \
	echo "  Seeds run : $$total"; \
	echo "  PASS      : $$pass"; \
	echo "  FAIL      : $$fail"; \
	if [ $$fail -eq 0 ]; then \
		echo "  RESULT    : ALL PASS"; \
	else \
		echo "  RESULT    : FAILURES DETECTED"; \
	fi; \
	echo "=========================="

lint:
	verilator --lint-only -sv \
		$(INC) \
		$(RTL) $(TB)

clean:
	rm -rf obj_dir waves.vcd *.log

.PHONY: sim lint clean regress
