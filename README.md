# UVM-Style Systolic Array Testbench

A structured SystemVerilog testbench for an 8x8 weight-stationary systolic array, built without a UVM library to run cleanly under Verilator 5.020. The testbench covers directed, all-ones, random, corner-case, and full regression tests with 1337 checks and 5 SVA properties passing across all sequences.

## DUT

The device under test is an 8x8 weight-stationary systolic array with the following architecture:

- 64 registered MAC processing elements arranged in an 8x8 grid
- Activations travel horizontally (left to right), one register per PE hop
- Partial sums accumulate vertically (top to bottom), one register per PE hop
- Two input pipeline registers before the array, two output pipeline registers after
- Single-cycle weight load per row via a dedicated `weight_load` interface

## Testbench Structure

```
tb/
├── sa_transaction.sv   — transaction class with weight, activation, and psum fields
├── sa_driver.sv        — drives DUT signals from the driver mailbox
├── sa_monitor.sv       — samples DUT inputs at posedge + 1ns
├── sa_scoreboard.sv    — per-PE scheduled checks with arrival timing model
├── sa_coverage.sv      — functional coverage: weight bins, activation patterns, corner cases
├── sa_sequences.sv     — directed, all-ones, constrained random, and corner-case sequences
└── sa_tb.sv            — top-level module, global mailboxes, SVA assertions
```

Global mailboxes (`g_drv_mbx`, `g_mon_mbx`) work around a Verilator limitation where packed arrays inside class objects lose their values when passed through mailbox handles.

## Scoreboard Model

Each PE[row][col] produces output at a precisely predictable cycle:

```
arrival_cycle = act_cycle + PE_LAT + col + (ROWS - 1 - row)
```

`PE_LAT = 4` accounts for the two input pipeline registers, the MAC register, and the two output pipeline registers. The scoreboard schedules one check entry per PE per activation pulse and fires checks at the exact expected arrival cycle.

Two gates prevent false failures. A `DRAIN_CYCLES = 50` gate blocks scheduling until the pipeline has flushed after a weight load. An `ACT_SPACING = 50` gate prevents overlapping activation wavefronts from being checked simultaneously.

Zero-weight PE checks are skipped silently since the DUT correctly outputs zero for those entries but checking them against residual pipeline state produces false mismatches.

**Verilator workaround:** Verilator's `--timing` coroutine scheduler snapshots all signal values at `@(posedge clk)` suspension points. Any signal read after resumption returns the pre-edge value, even after a `#1` delay. To get post-NBA signal values, the psum check runs inside a dedicated `always @(posedge clk)` block with a `#1` delay, where `if` comparisons read the settled wire value directly rather than through a task argument.

## SVA Assertions

Five concurrent and immediate properties check structural DUT behavior every clock cycle:

1. `psum_out` never contains X or Z after reset
2. `act_in` is always zero while `weight_load` is high
3. `weight_row` stays stable across consecutive `weight_load` cycles
4. `weight_load` never stays high for more than 8 consecutive cycles
5. `psum_out` is stable for at least one cycle after reset deasserts

## Functional Coverage

All 15 coverage bins hit after full regression:

| Bin Group | Bins |
|-----------|------|
| Weight rows | 8/8 rows loaded |
| Weight values | zero, low (1-63), mid (64-191), high (192-254), max (255) |
| Activation values | zero, low, mid, high, max |
| Activation patterns | all-max, mixed, back-to-back |
| Corner cases | zero weight row, overflow-prone (max weight + max activation) |

## Running Tests

Requires Verilator 5.020 or later with `--assert` enabled (set in Makefile).

```bash
make sim TEST=directed   # identity weights, 16 checks
make sim TEST=allones    # all-ones weights, 128 checks
make sim TEST=random     # constrained random, 238 checks
make sim TEST=full       # all sequences including corner cases, 1337 checks
```

## Results

```
directed : 16/16     PASS
allones  : 128/128   PASS
random   : 238/238   PASS
full     : 1337/1337 PASS
SVA      : 5/5 properties, 0 violations
Coverage : 15/15 bins HIT
```

## Tools

| Tool | Version |
|------|---------|
| Verilator | 5.020 |
| OS | Ubuntu 22.04 (WSL2) |
| HDL | SystemVerilog |

## Related Projects

- [PicoRISCV-SoC](https://github.com/RakshithSuresh2001/PicoRISCV-SoC): PicoRV32 core integrated with this systolic array over AXI-Lite, taped out on ASAP7 at 500 MHz with 0 DRC violations
- [Systolic-Array](https://github.com/RakshithSuresh2001/Systolic-Array): Standalone systolic array submitted to the ChipFoundry CI2609 Sky130 shuttle

## Author

Rakshith Suresh, MS Electrical Engineering, USC Viterbi School of Engineering
[GitHub](https://github.com/RakshithSuresh2001) | [LinkedIn](https://linkedin.com/in/rakshith-suresh-890329258/)
