// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VSA_TB_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb_std__03a__03aprocess;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb_std__03a__03aprocess__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vsa_tb__Syms;

class Vsa_tb_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vsa_tb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vsa_tb__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vsa_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb_std__03a__03aprocess(Vsa_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb_std__03a__03aprocess>& obj);

#endif  // guard
