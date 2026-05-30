// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__5(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__5\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           68);
        if (((IData)(vlSelf->sa_tb__DOT__rst_n) & (VlNull{} 
                                                   != vlSymsp->TOP____024unit.g_psum_mbx))) {
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[0U] 
                = vlSelf->sa_tb__DOT__psum_out[0U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[1U] 
                = vlSelf->sa_tb__DOT__psum_out[1U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[2U] 
                = vlSelf->sa_tb__DOT__psum_out[2U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[3U] 
                = vlSelf->sa_tb__DOT__psum_out[3U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[4U] 
                = vlSelf->sa_tb__DOT__psum_out[4U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[5U] 
                = vlSelf->sa_tb__DOT__psum_out[5U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[6U] 
                = vlSelf->sa_tb__DOT__psum_out[6U];
            vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv[7U] 
                = vlSelf->sa_tb__DOT__psum_out[7U];
            co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_psum_mbx, "tb/sa_tb.sv", 75)->__VnoInFunc_put(vlSymsp, vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv);
        }
    }
}
