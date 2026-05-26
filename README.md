# UVM-Style Systolic Array Testbench

A structured SystemVerilog testbench for an 8x8 weight-stationary systolic array, built without a UVM library to run cleanly under Verilator 5.x. The testbench covers directed, all-ones, random, and full regression tests with 464 checks passing across all sequences.

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
├── sa_monitor.sv       — samples DUT outputs at posedge + 1ns
├── sa_scoreboard.sv    — per-PE scheduled checks with correct arrival timing
├── sa_coverage.sv      — functional coverage for weight rows and activation patterns
├── sa_sequences.sv     — directed, all-ones, and random test sequences
└── sa_tb.sv            — top-level module, global mailboxes, fork/join_none structure
```

Global mailboxes (`g_drv_mbx`, `g_mon_mbx`) are used as a workaround for a Verilator class handle passing limitation with packed arrays inside classes.

## Scoreboard Model

The key insight driving the scoreboard design is that each PE[row][col] produces output at a precisely predictable cycle:

```
arrival_cycle = act_cycle + PE_LAT + col + (ROWS - 1 - row)
```

Where `PE_LAT = 4` accounts for the input pipeline, MAC stage, and output registers. The scoreboard schedules one check entry per PE per activation pulse and fires checks at the exact expected arrival cycle, reading `psum_out` directly from the wire to avoid a Verilator packed-array-through-mailbox bug.

Zero-weight PE checks are skipped silently to avoid false failures during weight-load drain. A `DRAIN_CYCLES = 20` gate prevents checks from being scheduled until the pipeline has flushed residual output after a weight load.

## Running Tests

Requires Verilator 5.020 or later.

```bash
make sim TEST=directed   # identity weights, 16 checks
make sim TEST=allones    # all-ones weights, 128 checks
make sim TEST=random     # random weights and activations, 128 checks
make sim TEST=full       # all three sequences, 464 checks
```

## Results

```
directed : 16/16   PASS
allones  : 128/128 PASS
random   : 128/128 PASS
full     : 464/464 PASS
```

Coverage after full regression: 8/8 weight rows hit, mixed and all-max activation patterns exercised.

## Tools

| Tool | Version |
|------|---------|
| Verilator | 5.020 |
| OS | Ubuntu 22.04 (WSL2) |
| HDL | SystemVerilog |

## Related Projects

- [PicoRISCV-SoC](https://github.com/RakshithSuresh2001/PicoRISCV-SoC): PicoRV32 core integrated with this systolic array over AXI-Lite MMIO, taped out on ASAP7 at 500MHz with 0 DRC violations
- [Systolic-Array](https://github.com/RakshithSuresh2001/Systolic-Array): Standalone systolic array submitted to the ChipFoundry CI2609 Sky130 shuttle

## Author

Rakshith Suresh, MS Electrical Engineering, USC Viterbi School of Engineering
[GitHub](https://github.com/RakshithSuresh2001) | [LinkedIn](https://linkedin.com/in/rakshith-suresh-890329258/)
