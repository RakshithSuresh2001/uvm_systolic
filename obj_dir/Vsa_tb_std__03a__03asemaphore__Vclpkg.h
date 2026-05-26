// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VSA_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb_std__03a__03asemaphore__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vsa_tb__Syms;

class Vsa_tb_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb_std__03a__03asemaphore(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb_std__03a__03asemaphore>& obj);

#endif  // guard
