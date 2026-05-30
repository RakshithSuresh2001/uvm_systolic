// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__4(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           152);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/sa_tb.sv", 
                                           153);
        if (((IData)(vlSelf->sa_tb__DOT__rst_n) & (VlNull{} 
                                                   != vlSelf->sa_tb__DOT__cov))) {
            VL_NULL_CHECK(vlSelf->sa_tb__DOT__cov, "tb/sa_tb.sv", 155)->__VnoInFunc_sample_scalar(vlSymsp, vlSelf->sa_tb__DOT__weight_load, (IData)(vlSelf->sa_tb__DOT__weight_row), 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->sa_tb__DOT__weight_data)), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 8U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x10U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x18U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x20U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x28U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x30U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__weight_data 
                                                                                >> 0x38U))), 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->sa_tb__DOT__act_in)), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 8U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x10U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x18U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x20U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x28U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x30U))), 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->sa_tb__DOT__act_in 
                                                                                >> 0x38U))));
        }
    }
}
