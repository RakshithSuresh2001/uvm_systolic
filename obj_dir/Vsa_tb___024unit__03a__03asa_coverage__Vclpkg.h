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
    IData/*31:0*/ __PVT__act_zero_count;
    IData/*31:0*/ __PVT__act_max_count;
    IData/*31:0*/ __PVT__act_mixed_count;
    IData/*31:0*/ __PVT__weight_load_count;
    IData/*31:0*/ __PVT__total_cycles;
    VlUnpacked<IData/*31:0*/, 8> __PVT__rows_loaded;
    void __VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_sample(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn);
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
