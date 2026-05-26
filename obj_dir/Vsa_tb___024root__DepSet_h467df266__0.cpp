// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024root.h"

VL_ATTR_COLD void Vsa_tb___024root___eval_initial__TOP(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__2(Vsa_tb___024root* vlSelf);

void Vsa_tb___024root___eval_initial(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial\n"); );
    // Body
    Vsa_tb___024root___eval_initial__TOP(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__clk__0 
        = vlSelf->sa_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__sa_tb__DOT__rst_n__0 
        = vlSelf->sa_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x77359400ULL, 
                                       nullptr, "tb/sa_tb.sv", 
                                       135);
    VL_WRITEF("[TB] TIMEOUT\n");
    VL_FINISH_MT("tb/sa_tb.sv", 135, "");
}

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__2(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/sa_tb.sv", 
                                           19);
        vlSelf->sa_tb__DOT__clk = (1U & (~ (IData)(vlSelf->sa_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vsa_tb___024root___act_comb__TOP__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___act_comb__TOP__0\n"); );
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
}

void Vsa_tb___024root___eval_act(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsa_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsa_tb___024root___nba_comb__TOP__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (7U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (6U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (5U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (4U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (3U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (2U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (1U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
    vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load 
        = ((IData)(vlSelf->sa_tb__DOT__weight_load) 
           & (0U == (IData)(vlSelf->sa_tb__DOT__weight_row)));
}

void Vsa_tb___024root___nba_sequent__TOP__0(Vsa_tb___024root* vlSelf);

void Vsa_tb___024root___eval_nba(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsa_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsa_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vsa_tb___024root___timing_resume(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h31f193c6__0.resume("@(posedge sa_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h759c8f0b__0.resume("@([changed] sa_tb.rst_n)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdynSched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vsa_tb___024root___timing_commit(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h31f193c6__0.commit("@(posedge sa_tb.clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h759c8f0b__0.commit("@([changed] sa_tb.rst_n)");
    }
}

void Vsa_tb___024root___eval_triggers__act(Vsa_tb___024root* vlSelf);

bool Vsa_tb___024root___eval_phase__act(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsa_tb___024root___eval_triggers__act(vlSelf);
    Vsa_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsa_tb___024root___timing_resume(vlSelf);
        Vsa_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsa_tb___024root___eval_phase__nba(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsa_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__nba(Vsa_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsa_tb___024root___dump_triggers__act(Vsa_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsa_tb___024root___eval(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsa_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/sa_tb.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsa_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/sa_tb.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsa_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsa_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsa_tb___024root___eval_debug_assertions(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
