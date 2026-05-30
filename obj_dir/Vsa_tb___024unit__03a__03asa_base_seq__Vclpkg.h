// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT__03A__03ASA_BASE_SEQ__VCLPKG_H_
#define VERILATED_VSA_TB___024UNIT__03A__03ASA_BASE_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb___024unit__03a__03asa_transaction;
class Vsa_tb_std__03a__03amailbox__Tz2;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vsa_tb__Syms;

class Vsa_tb___024unit__03a__03asa_base_seq : public VlClass {
  public:
    VlCoroutine __VnoInFunc_load_weights(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> w);
    void __VnoInFunc_rand_binned(Vsa_tb__Syms* __restrict vlSymsp, CData/*7:0*/ &rand_binned__Vfuncrtn);
    VlCoroutine __VnoInFunc_send_activation(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<CData/*7:0*/, 8> acts);
    VlCoroutine __VnoInFunc_send_activation_bb(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<CData/*7:0*/, 8> acts0, VlUnpacked<CData/*7:0*/, 8> acts1);
    VlCoroutine __VnoInFunc_send_idle(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ n);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb___024unit__03a__03asa_base_seq(Vsa_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vsa_tb___024unit__03a__03asa_base_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_base_seq>& obj);

#endif  // guard
