// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024root.h"

VL_ATTR_COLD void Vsa_tb___024root___eval_initial__TOP(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__0(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__1(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__2(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__3(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__4(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__5(Vsa_tb___024root* vlSelf);
VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__6(Vsa_tb___024root* vlSelf);

void Vsa_tb___024root___eval_initial(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial\n"); );
    // Body
    Vsa_tb___024root___eval_initial__TOP(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vsa_tb___024root___eval_initial__TOP__Vtiming__6(vlSelf);
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
    co_await vlSelf->__VdlySched.delay(0xee6b2800ULL, 
                                       nullptr, "tb/sa_tb.sv", 
                                       251);
    VL_WRITEF("[TB] TIMEOUT\n");
    VL_FINISH_MT("tb/sa_tb.sv", 251, "");
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
                                           29);
        vlSelf->sa_tb__DOT__clk = (1U & (~ (IData)(vlSelf->sa_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__6(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__6\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 8> sa_tb__DOT__psum_reg;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        sa_tb__DOT__psum_reg[__Vi0] = 0;
    }
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           60);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/sa_tb.sv", 
                                           61);
        sa_tb__DOT__psum_reg[0U] = vlSelf->sa_tb__DOT__psum_out[0U];
        sa_tb__DOT__psum_reg[1U] = vlSelf->sa_tb__DOT__psum_out[1U];
        sa_tb__DOT__psum_reg[2U] = vlSelf->sa_tb__DOT__psum_out[2U];
        sa_tb__DOT__psum_reg[3U] = vlSelf->sa_tb__DOT__psum_out[3U];
        sa_tb__DOT__psum_reg[4U] = vlSelf->sa_tb__DOT__psum_out[4U];
        sa_tb__DOT__psum_reg[5U] = vlSelf->sa_tb__DOT__psum_out[5U];
        sa_tb__DOT__psum_reg[6U] = vlSelf->sa_tb__DOT__psum_out[6U];
        sa_tb__DOT__psum_reg[7U] = vlSelf->sa_tb__DOT__psum_out[7U];
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

extern const VlWide<8>/*255:0*/ Vsa_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsa_tb___024root___nba_sequent__TOP__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_63;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->sa_tb__DOT__rst_n) 
                     & (0U != (((((((vlSelf->sa_tb__DOT__psum_out[0U] 
                                     | vlSelf->sa_tb__DOT__psum_out[1U]) 
                                    | vlSelf->sa_tb__DOT__psum_out[2U]) 
                                   | vlSelf->sa_tb__DOT__psum_out[3U]) 
                                  | vlSelf->sa_tb__DOT__psum_out[4U]) 
                                 | vlSelf->sa_tb__DOT__psum_out[5U]) 
                                | vlSelf->sa_tb__DOT__psum_out[6U]) 
                               | vlSelf->sa_tb__DOT__psum_out[7U]))))) {
        VL_WRITEF("[PSUM] cycle=%0# p0=%08x p1=%08x p2=%08x p3=%08x p4=%08x p5=%08x p6=%08x p7=%08x\n",
                  64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                  32,vlSelf->sa_tb__DOT__psum_out[0U],
                  32,vlSelf->sa_tb__DOT__psum_out[1U],
                  32,vlSelf->sa_tb__DOT__psum_out[2U],
                  32,vlSelf->sa_tb__DOT__psum_out[3U],
                  32,vlSelf->sa_tb__DOT__psum_out[4U],
                  32,vlSelf->sa_tb__DOT__psum_out[5U],
                  32,vlSelf->sa_tb__DOT__psum_out[6U],
                  32,vlSelf->sa_tb__DOT__psum_out[7U]);
    }
    if (vlSelf->sa_tb__DOT__rst_n) {
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x38U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__psum_out[0U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[0U];
        vlSelf->sa_tb__DOT__psum_out[1U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[1U];
        vlSelf->sa_tb__DOT__psum_out[2U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[2U];
        vlSelf->sa_tb__DOT__psum_out[3U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[3U];
        vlSelf->sa_tb__DOT__psum_out[4U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[4U];
        vlSelf->sa_tb__DOT__psum_out[5U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[5U];
        vlSelf->sa_tb__DOT__psum_out[6U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[6U];
        vlSelf->sa_tb__DOT__psum_out[7U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[7U];
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x30U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[0U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x40U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[1U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x41U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[2U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x42U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[3U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x43U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[4U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x44U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[5U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x45U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[6U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x46U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[7U] 
            = vlSelf->sa_tb__DOT__dut__DOT__psum_v[0x47U];
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x28U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x20U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x18U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 0x10U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
                  * (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                      >> 8U)))));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
               + ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
                  * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out)));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg) 
               * (0xffU & (IData)(vlSelf->sa_tb__DOT__dut__DOT__act_s2)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x38U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out 
            = ((IData)(vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg) 
               * (IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out));
        if (vlSelf->sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load) {
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)(vlSelf->sa_tb__DOT__weight_data));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 8U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x10U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x18U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x20U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x28U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x30U)));
            vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (IData)((vlSelf->sa_tb__DOT__weight_data 
                                    >> 0x38U)));
        }
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x30U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x28U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x20U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x18U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 0x10U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)((vlSelf->sa_tb__DOT__dut__DOT__act_s2 
                                >> 8U)));
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out 
            = (0xffU & (IData)(vlSelf->sa_tb__DOT__dut__DOT__act_s2));
        vlSelf->sa_tb__DOT__dut__DOT__act_s2 = vlSelf->sa_tb__DOT__dut__DOT__act_s1;
        vlSelf->sa_tb__DOT__dut__DOT__act_s1 = vlSelf->sa_tb__DOT__act_in;
    } else {
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__psum_out[0U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sa_tb__DOT__psum_out[1U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sa_tb__DOT__psum_out[2U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sa_tb__DOT__psum_out[3U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sa_tb__DOT__psum_out[4U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sa_tb__DOT__psum_out[5U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sa_tb__DOT__psum_out[6U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sa_tb__DOT__psum_out[7U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[0U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[1U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[2U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[3U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[4U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[5U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[6U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sa_tb__DOT__dut__DOT__psum_s11[7U] 
            = Vsa_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->sa_tb__DOT__dut__DOT__act_s2 = 0ULL;
        vlSelf->sa_tb__DOT__dut__DOT__act_s1 = 0ULL;
    }
    __Vtemp_63[0U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[1U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[2U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[3U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[4U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[5U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[6U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[7U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[8U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[9U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xaU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xbU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xcU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xdU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xeU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0xfU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x10U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x11U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x12U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x13U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x14U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x15U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x16U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x17U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x18U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x19U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1eU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x1fU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x20U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x21U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x22U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x23U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x24U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x25U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x26U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x27U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x28U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x29U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2eU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x2fU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x30U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x31U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x32U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x33U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x34U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x35U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x36U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x37U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x38U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x39U] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x3aU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x3bU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x3cU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x3dU] = vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
    __Vtemp_63[0x3eU] = (IData)((((QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out))));
    __Vtemp_63[0x3fU] = (IData)(((((QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out))) 
                                 >> 0x20U));
    VL_CONCAT_WWW(2304,2048,256, vlSelf->sa_tb__DOT__dut__DOT__psum_v, __Vtemp_63, Vsa_tb__ConstPool__CONST_h9e67c271_0);
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
            VL_FATAL_MT("tb/sa_tb.sv", 12, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb/sa_tb.sv", 12, "", "Active region did not converge.");
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
