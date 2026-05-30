// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024root.h"

VL_ATTR_COLD void Vsa_tb___024root___eval_static__TOP(Vsa_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_tb___024root___eval_static(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_static\n"); );
    // Body
    Vsa_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsa_tb___024root___eval_initial__TOP(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->sa_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vsa_tb___024root___eval_final(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__stl(Vsa_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsa_tb___024root___eval_phase__stl(Vsa_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_tb___024root___eval_settle(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsa_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/sa_tb.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsa_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__stl(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<8>/*255:0*/ Vsa_tb__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vsa_tb___024root___stl_sequent__TOP__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (0U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (1U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (2U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (3U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (4U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (5U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (6U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (7U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    __Vtemp_62[0U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[1U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[2U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[3U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[4U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[5U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[6U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[7U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[8U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[9U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xaU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xbU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xcU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xdU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xeU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0xfU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x10U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x11U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x12U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x13U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x14U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x15U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x16U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x17U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x18U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x19U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1eU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x1fU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x20U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x21U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x22U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x23U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x24U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x25U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x26U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x27U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x28U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x29U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2eU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x2fU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x30U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x31U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x32U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x33U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x34U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x35U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x36U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x37U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x38U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x39U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x3aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x3bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x3cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x3dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out))) 
                                 >> 0x20U));
    VL_CONCAT_WWW(2304,2048,256, vlSelf->sa_tb__DOT__dut__DOT__psum_v, __Vtemp_62, Vsa_tb__ConstPool__CONST_h9e67c271_0);
}

VL_ATTR_COLD void Vsa_tb___024root___eval_stl(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsa_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsa_tb___024root___eval_triggers__stl(Vsa_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsa_tb___024root___eval_phase__stl(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsa_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsa_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__act(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sa_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] sa_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__nba(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sa_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] sa_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsa_tb___024root___ctor_var_reset(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sa_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__weight_row = VL_RAND_RESET_I(3);
    vlSelf->sa_tb__DOT__weight_data = VL_RAND_RESET_Q(64);
    vlSelf->sa_tb__DOT__act_in = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->sa_tb__DOT__psum_out);
    vlSelf->sa_tb__DOT___cyc = 0;
    VL_ZERO_RESET_W(256, vlSelf->sa_tb__DOT__unnamedblk1__DOT__pv);
    vlSelf->sa_tb__DOT__unnamedblk10__DOT___i = 0;
    vlSelf->sa_tb__DOT__dut__DOT__act_s1 = VL_RAND_RESET_Q(64);
    vlSelf->sa_tb__DOT__dut__DOT__act_s2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2304, vlSelf->sa_tb__DOT__dut__DOT__psum_v);
    VL_RAND_RESET_W(256, vlSelf->sa_tb__DOT__dut__DOT__psum_s11);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load = VL_RAND_RESET_I(1);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
