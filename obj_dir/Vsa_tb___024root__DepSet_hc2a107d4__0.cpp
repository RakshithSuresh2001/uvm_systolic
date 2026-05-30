// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Body
    vlSelf->sa_tb__DOT__weight_load = 0U;
    vlSelf->sa_tb__DOT__weight_row = 0U;
    vlSelf->sa_tb__DOT__weight_data = 0ULL;
    vlSelf->sa_tb__DOT__act_in = 0ULL;
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       45);
    while ((1U & (~ (IData)(vlSelf->sa_tb__DOT__rst_n)))) {
        co_await vlSelf->__VtrigSched_h759c8f0b__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] sa_tb.rst_n)", 
                                                           "tb/sa_tb.sv", 
                                                           46);
    }
    co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge sa_tb.clk)", 
                                                       "tb/sa_tb.sv", 
                                                       47);
    while (1U) {
        co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_tb.sv", 49)->__VnoInFunc_get(vlSymsp, vlSelf->sa_tb__DOT__driver_run__Vstatic__txn);
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           50);
        vlSelf->sa_tb__DOT__weight_load = VL_NULL_CHECK(vlSelf->sa_tb__DOT__driver_run__Vstatic__txn, "tb/sa_tb.sv", 51)
            ->__PVT__weight_load;
        vlSelf->sa_tb__DOT__weight_row = VL_NULL_CHECK(vlSelf->sa_tb__DOT__driver_run__Vstatic__txn, "tb/sa_tb.sv", 52)
            ->__PVT__weight_row;
        vlSelf->sa_tb__DOT__weight_data = VL_NULL_CHECK(vlSelf->sa_tb__DOT__driver_run__Vstatic__txn, "tb/sa_tb.sv", 53)
            ->__PVT__weight_data;
        vlSelf->sa_tb__DOT__act_in = VL_NULL_CHECK(vlSelf->sa_tb__DOT__driver_run__Vstatic__txn, "tb/sa_tb.sv", 54)
            ->__PVT__act_in;
    }
}
