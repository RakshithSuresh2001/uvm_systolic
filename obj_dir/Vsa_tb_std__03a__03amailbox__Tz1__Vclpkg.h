// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VSA_TB_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vsa_tb__Syms;

class Vsa_tb_std__03a__03amailbox__Tz1 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlWide<8>/*255:0*/> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message);
    void __VnoInFunc_num(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message);
    VlCoroutine __VnoInFunc_put(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ message);
    void __VnoInFunc_try_get(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb_std__03a__03amailbox__Tz1(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb_std__03a__03amailbox__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
