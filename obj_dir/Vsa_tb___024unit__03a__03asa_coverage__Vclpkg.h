// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT__03A__03ASA_COVERAGE__VCLPKG_H_
#define VERILATED_VSA_TB___024UNIT__03A__03ASA_COVERAGE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb___024unit__03a__03asa_transaction;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit__03a__03asa_coverage__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit__03a__03asa_coverage__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit__03a__03asa_coverage__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb___024unit__03a__03asa_coverage__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vsa_tb__Syms;

class Vsa_tb___024unit__03a__03asa_coverage : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__prev_act_nonzero;
    CData/*0:0*/ __PVT__any_max_weight_loaded;
    IData/*31:0*/ __PVT__act_zero_count;
    IData/*31:0*/ __PVT__act_max_count;
    IData/*31:0*/ __PVT__act_mixed_count;
    IData/*31:0*/ __PVT__act_bb_count;
    IData/*31:0*/ __PVT__wbin_zero;
    IData/*31:0*/ __PVT__wbin_low;
    IData/*31:0*/ __PVT__wbin_mid;
    IData/*31:0*/ __PVT__wbin_high;
    IData/*31:0*/ __PVT__wbin_max;
    IData/*31:0*/ __PVT__abin_zero;
    IData/*31:0*/ __PVT__abin_low;
    IData/*31:0*/ __PVT__abin_mid;
    IData/*31:0*/ __PVT__abin_high;
    IData/*31:0*/ __PVT__abin_max;
    IData/*31:0*/ __PVT__overflow_prone_count;
    IData/*31:0*/ __PVT__zero_weight_row_count;
    IData/*31:0*/ __PVT__weight_load_count;
    IData/*31:0*/ __PVT__total_cycles;
    VlUnpacked<IData/*31:0*/, 8> __PVT__rows_loaded;
    void __VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_sample(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn);
    void __VnoInFunc_sample_scalar(Vsa_tb__Syms* __restrict vlSymsp, CData/*0:0*/ wload, CData/*2:0*/ wrow, CData/*7:0*/ w0, CData/*7:0*/ w1, CData/*7:0*/ w2, CData/*7:0*/ w3, CData/*7:0*/ w4, CData/*7:0*/ w5, CData/*7:0*/ w6, CData/*7:0*/ w7, CData/*7:0*/ a0, CData/*7:0*/ a1, CData/*7:0*/ a2, CData/*7:0*/ a3, CData/*7:0*/ a4, CData/*7:0*/ a5, CData/*7:0*/ a6, CData/*7:0*/ a7);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb___024unit__03a__03asa_coverage(Vsa_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb___024unit__03a__03asa_coverage();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_coverage>& obj);

#endif  // guard
