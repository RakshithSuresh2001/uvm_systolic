// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
#include "Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg.h"

VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vsa_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ sa_tb__DOT____Vrepeat3;
    sa_tb__DOT____Vrepeat3 = 0;
    std::string __Vtask_sa_tb__DOT__run_test__22__name;
    // Body
    vlSymsp->TOP____024unit.g_drv_mbx = VL_NEW(Vsa_tb_std__03a__03amailbox__Tz2, vlSymsp, 0U);
    vlSymsp->TOP____024unit.g_mon_mbx = VL_NEW(Vsa_tb_std__03a__03amailbox__Tz2, vlSymsp, 0U);
    vlSymsp->TOP____024unit.g_psum_mbx = VL_NEW(Vsa_tb_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    vlSelf->sa_tb__DOT__sb = VL_NEW(Vsa_tb___024unit__03a__03asa_scoreboard, vlSymsp);
    vlSelf->sa_tb__DOT__cov = VL_NEW(Vsa_tb___024unit__03a__03asa_coverage, vlSymsp);
    vlSelf->sa_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       127);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       127);
    vlSelf->sa_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       129);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       129);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       129);
    if ((! VL_VALUEPLUSARGS_INN(64, std::string{"TEST=%s"}, 
                                vlSelf->sa_tb__DOT__test_name))) {
        vlSelf->sa_tb__DOT__test_name = std::string{"directed"};
    }
    VL_WRITEF("\n=== Systolic Array TB ===\nRunning test: %@\n\n",
              -1,&(vlSelf->sa_tb__DOT__test_name));
    Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       143);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       143);
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       143);
    __Vtask_sa_tb__DOT__run_test__22__name = vlSelf->sa_tb__DOT__test_name;
    if ((std::string{"directed"} == __Vtask_sa_tb__DOT__run_test__22__name)) {
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk2__DOT__s, "tb/sa_tb.sv", 98)->__VnoInFunc_run(vlSymsp);
    } else if ((std::string{"allones"} == __Vtask_sa_tb__DOT__run_test__22__name)) {
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk3__DOT__s, "tb/sa_tb.sv", 99)->__VnoInFunc_run(vlSymsp);
    } else if ((std::string{"random"} == __Vtask_sa_tb__DOT__run_test__22__name)) {
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk4__DOT__s, "tb/sa_tb.sv", 100)->__VnoInFunc_run(vlSymsp);
    } else if (VL_UNLIKELY((std::string{"full"} == __Vtask_sa_tb__DOT__run_test__22__name))) {
        VL_WRITEF("[TB] Full regression\n");
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__ds, "tb/sa_tb.sv", 107)->__VnoInFunc_run(vlSymsp);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk6__DOT__idle, "tb/sa_tb.sv", 108)->__VnoInFunc_send_idle(vlSymsp, 0x28U);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__as, "tb/sa_tb.sv", 109)->__VnoInFunc_run(vlSymsp);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk7__DOT__idle, "tb/sa_tb.sv", 110)->__VnoInFunc_send_idle(vlSymsp, 0x28U);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__rs, "tb/sa_tb.sv", 111)->__VnoInFunc_run(vlSymsp);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk8__DOT__idle, "tb/sa_tb.sv", 112)->__VnoInFunc_send_idle(vlSymsp, 0x28U);
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__cs, "tb/sa_tb.sv", 113)->__VnoInFunc_run(vlSymsp);
    } else {
        co_await VL_NULL_CHECK(vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk9__DOT__s, "tb/sa_tb.sv", 115)->__VnoInFunc_run(vlSymsp);
    }
    sa_tb__DOT____Vrepeat3 = 0xfa0U;
    while (VL_LTS_III(32, 0U, sa_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           145);
        sa_tb__DOT____Vrepeat3 = (sa_tb__DOT____Vrepeat3 
                                  - (IData)(1U));
    }
    VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 147)->__VnoInFunc_report(vlSymsp);
    VL_NULL_CHECK(vlSelf->sa_tb__DOT__cov, "tb/sa_tb.sv", 148)->__VnoInFunc_report(vlSymsp);
    VL_FINISH_MT("tb/sa_tb.sv", 149, "");
}
