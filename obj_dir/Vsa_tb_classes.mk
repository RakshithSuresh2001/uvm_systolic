# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsa_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsa_tb \
	Vsa_tb___024root__DepSet_h1e59386b__0 \
	Vsa_tb___024root__DepSet_h04c397ce__0 \
	Vsa_tb___024root__DepSet_hc2a107d4__0 \
	Vsa_tb___024root__DepSet_he0ac6271__0 \
	Vsa_tb___024root__DepSet_h467df266__0 \
	Vsa_tb___024root__DepSet_hbc34fb74__0 \
	Vsa_tb___024root__DepSet_h01195e6f__0 \
	Vsa_tb___024unit__03a__03asa_transaction__Vclpkg__DepSet_h1123c3ea__0 \
	Vsa_tb___024unit__03a__03asa_transaction__Vclpkg__DepSet_h3f13d6e5__0 \
	Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg__DepSet_hae6c84e1__0 \
	Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg__DepSet_h964895f0__0 \
	Vsa_tb___024unit__03a__03asa_coverage__Vclpkg__DepSet_h1b0827d6__0 \
	Vsa_tb___024unit__03a__03asa_coverage__Vclpkg__DepSet_h492cf2f9__0 \
	Vsa_tb___024unit__03a__03asa_coverage__Vclpkg__DepSet_hd5b7231a__0 \
	Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg__DepSet_hd144894e__0 \
	Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg__DepSet_h15c3c5f6__0 \
	Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg__DepSet_hff70a181__0 \
	Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg__DepSet_h78d031ad__0 \
	Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg__DepSet_h7a79d0c5__0 \
	Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg__DepSet_h6904e8a4__0 \
	Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg__DepSet_hfcb07f8a__0 \
	Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg__DepSet_he4a52ac5__0 \
	Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg__DepSet_h8541b7b7__0 \
	Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg__DepSet_hc274a948__0 \
	Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg__DepSet_hf115aba6__0 \
	Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg__DepSet_hf2608187__0 \
	Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg__DepSet_h9619c26f__0 \
	Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg__DepSet_h1a846f09__0 \
	Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg__DepSet_h4ab13b48__0 \
	Vsa_tb_std__03a__03asemaphore__Vclpkg__DepSet_hae29d315__0 \
	Vsa_tb_std__03a__03asemaphore__Vclpkg__DepSet_h960dc73c__0 \
	Vsa_tb_std__03a__03aprocess__Vclpkg__DepSet_h6fbb8598__0 \
	Vsa_tb_std__03a__03aprocess__Vclpkg__DepSet_h559b94b7__0 \
	Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h73243911__0 \
	Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h6110f140__0 \
	Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg__DepSet_h4ea7ed3d__0 \
	Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg__DepSet_h768fbd14__0 \
	Vsa_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsa_tb__ConstPool_0 \
	Vsa_tb___024root__Slow \
	Vsa_tb___024root__DepSet_h1e59386b__0__Slow \
	Vsa_tb___024root__DepSet_h29de91ea__0__Slow \
	Vsa_tb___024root__DepSet_h467df266__0__Slow \
	Vsa_tb___024unit__Slow \
	Vsa_tb___024unit__DepSet_ha71148fd__0__Slow \
	Vsa_tb_std__Slow \
	Vsa_tb_std__DepSet_hdd45e029__0__Slow \
	Vsa_tb___024unit__03a__03asa_transaction__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_transaction__Vclpkg__DepSet_h3f13d6e5__0__Slow \
	Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg__DepSet_h964895f0__0__Slow \
	Vsa_tb___024unit__03a__03asa_coverage__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_coverage__Vclpkg__DepSet_h492cf2f9__0__Slow \
	Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg__DepSet_hff70a181__0__Slow \
	Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg__DepSet_h6904e8a4__0__Slow \
	Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg__DepSet_he4a52ac5__0__Slow \
	Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg__DepSet_hf2608187__0__Slow \
	Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg__Slow \
	Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg__DepSet_h4ab13b48__0__Slow \
	Vsa_tb_std__03a__03asemaphore__Vclpkg__Slow \
	Vsa_tb_std__03a__03asemaphore__Vclpkg__DepSet_h960dc73c__0__Slow \
	Vsa_tb_std__03a__03aprocess__Vclpkg__Slow \
	Vsa_tb_std__03a__03aprocess__Vclpkg__DepSet_h559b94b7__0__Slow \
	Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg__Slow \
	Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h6110f140__0__Slow \
	Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg__Slow \
	Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg__DepSet_h768fbd14__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsa_tb__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
