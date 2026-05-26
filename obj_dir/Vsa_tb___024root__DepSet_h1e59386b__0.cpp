// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__act(Vsa_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsa_tb___024root___eval_triggers__act(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->sa_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->sa_tb__DOT__rst_n) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__rst_n__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdynSched.evaluate());
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__clk__0 
        = vlSelf->sa_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__rst_n__0 
        = vlSelf->sa_tb__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsa_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}
