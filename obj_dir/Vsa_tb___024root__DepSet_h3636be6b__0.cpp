// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

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
    if (((IData)(vlSelf->sa_tb__DOT__rst_n) & (VlNull{} 
                                               != vlSelf->sa_tb__DOT__cov))) {
        vlSelf->sa_tb__DOT__unnamedblk6__DOT__t = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__unnamedblk6__DOT__t, "tb/sa_tb.sv", 119)->__PVT__weight_load 
            = vlSelf->sa_tb__DOT__weight_load;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__unnamedblk6__DOT__t, "tb/sa_tb.sv", 119)->__PVT__weight_row 
            = vlSelf->sa_tb__DOT__weight_row;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__unnamedblk6__DOT__t, "tb/sa_tb.sv", 120)->__PVT__weight_data 
            = vlSelf->sa_tb__DOT__weight_data;
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__unnamedblk6__DOT__t, "tb/sa_tb.sv", 120)->__PVT__act_in 
            = vlSelf->sa_tb__DOT__act_in;
        VL_ASSIGN_W(256,VL_NULL_CHECK(vlSelf->sa_tb__DOT__unnamedblk6__DOT__t, "tb/sa_tb.sv", 121)
                    ->__PVT__psum_out, vlSelf->sa_tb__DOT__psum_out);
        VL_NULL_CHECK(vlSelf->sa_tb__DOT__cov, "tb/sa_tb.sv", 122)->__VnoInFunc_sample(vlSymsp, vlSelf->sa_tb__DOT__unnamedblk6__DOT__t);
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
