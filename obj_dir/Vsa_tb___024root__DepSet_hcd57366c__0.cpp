// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       81);
    while ((1U & (~ (IData)(vlSelf->sa_tb__DOT__rst_n)))) {
        co_await vlSelf->__VtrigSched_h759c8f0b__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] sa_tb.rst_n)", 
                                                           "tb/sa_tb.sv", 
                                                           82);
    }
    while (1U) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           84);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/sa_tb.sv", 
                                           85);
        vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn 
            = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn, "tb/sa_tb.sv", 87)->__PVT__weight_load 
            = vlSelf->sa_tb__DOT__weight_load;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn, "tb/sa_tb.sv", 88)->__PVT__weight_row 
            = vlSelf->sa_tb__DOT__weight_row;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn, "tb/sa_tb.sv", 89)->__PVT__weight_data 
            = vlSelf->sa_tb__DOT__weight_data;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn, "tb/sa_tb.sv", 90)->__PVT__act_in 
            = vlSelf->sa_tb__DOT__act_in;
        VL_ASSIGN_W(256,VL_NULL_CHECK(vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn, "tb/sa_tb.sv", 91)
                    ->__PVT__psum_out, vlSelf->sa_tb__DOT__psum_out);
        co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_mon_mbx, "tb/sa_tb.sv", 92)->__VnoInFunc_put(vlSymsp, vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn);
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 93)->__VnoInFunc_check_direct(vlSymsp, vlSelf->sa_tb__DOT__monitor_run__Vstatic__txn);
    }
}
