// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT__03A__03ASA_TRANSACTION__VCLPKG_H_
#define VERILATED_VSA_TB___024UNIT__03A__03ASA_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb___024unit__03a__03asa_transaction;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit__03a__03asa_transaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit__03a__03asa_transaction__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit__03a__03asa_transaction__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb___024unit__03a__03asa_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vsa_tb__Syms;

class Vsa_tb___024unit__03a__03asa_transaction : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__weight_load;
    CData/*2:0*/ __PVT__weight_row;
    QData/*63:0*/ __PVT__weight_data;
    QData/*63:0*/ __PVT__act_in;
    VlWide<8>/*255:0*/ __PVT__psum_out;
    void __VnoInFunc_clone(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> &clone__Vfuncrtn);
    void __VnoInFunc_to_string(Vsa_tb__Syms* __restrict vlSymsp, std::string &to_string__Vfuncrtn);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb___024unit__03a__03asa_transaction(Vsa_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb___024unit__03a__03asa_transaction();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_transaction>& obj);

#endif  // guard
