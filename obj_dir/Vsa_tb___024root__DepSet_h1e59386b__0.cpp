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

extern const VlWide<8>/*255:0*/ Vsa_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsa_tb___024root___nba_sequent__TOP__0(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__sa_tb__DOT__wload_streak;
    __Vdly__sa_tb__DOT__wload_streak = 0;
    VlWide<64>/*2047:0*/ __Vtemp_63;
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__rst_n)) 
                                | ((~ (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__weight_load)) 
                                   | (0ULL == vlSelf->__Vsampled__TOP__sa_tb__DOT__act_in))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: sa_tb.sv:209: Assertion failed in %Nsa_tb.a_act_zero_during_wload: [SVA FAIL] act_in nonzero during weight_load at time %0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                          -9);
                VL_STOP_MT("tb/sa_tb.sv", 209, "");
            }
        }
    }
    __Vdly__sa_tb__DOT__wload_streak = vlSelf->sa_tb__DOT__wload_streak;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__weight_load) 
                                       & (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_0_0))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__weight_row) 
                                      == (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_1_0)))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: sa_tb.sv:218: Assertion failed in %Nsa_tb.a_wrow_increments: [SVA FAIL] weight_row did not increment during weight_load at time %0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                          -9);
                VL_STOP_MT("tb/sa_tb.sv", 218, "");
            }
        }
    }
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
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_3_0)) 
                                | (0U == ((((((((vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[0U] 
                                                 ^ 
                                                 vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[0U]) 
                                                | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[1U] 
                                                   ^ 
                                                   vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[1U])) 
                                               | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[2U] 
                                                  ^ 
                                                  vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[2U])) 
                                              | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[3U] 
                                                 ^ 
                                                 vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[3U])) 
                                             | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[4U] 
                                                ^ vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[4U])) 
                                            | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[5U] 
                                               ^ vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[5U])) 
                                           | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[6U] 
                                              ^ vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[6U])) 
                                          | (vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_4_0[7U] 
                                             ^ vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[7U])))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: sa_tb.sv:239: Assertion failed in %Nsa_tb.a_psum_stable_after_reset: [SVA FAIL] psum_out unstable right after reset at time %0t\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                          -9);
                VL_STOP_MT("tb/sa_tb.sv", 239, "");
            }
        }
    }
    if (vlSelf->sa_tb__DOT__rst_n) {
        if (vlSelf->sa_tb__DOT__weight_load) {
            __Vdly__sa_tb__DOT__wload_streak = ((IData)(1U) 
                                                + vlSelf->sa_tb__DOT__wload_streak);
            if (vlSymsp->_vm_contextp__->assertOn()) {
                if (VL_LIKELY((8U <= vlSelf->sa_tb__DOT__wload_streak))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: sa_tb.sv:228: Assertion failed in %Nsa_tb: [SVA FAIL] weight_load high for >8 cycles at time %0t\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,vlSymsp->name(),
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9);
                        VL_STOP_MT("tb/sa_tb.sv", 228, "");
                    }
                }
            }
        } else {
            __Vdly__sa_tb__DOT__wload_streak = 0U;
        }
    } else {
        __Vdly__sa_tb__DOT__wload_streak = 0U;
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
        vlSelf->sa_tb__DOT__psum_out[0U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[0U];
        vlSelf->sa_tb__DOT__psum_out[1U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[1U];
        vlSelf->sa_tb__DOT__psum_out[2U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[2U];
        vlSelf->sa_tb__DOT__psum_out[3U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[3U];
        vlSelf->sa_tb__DOT__psum_out[4U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[4U];
        vlSelf->sa_tb__DOT__psum_out[5U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[5U];
        vlSelf->sa_tb__DOT__psum_out[6U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[6U];
        vlSelf->sa_tb__DOT__psum_out[7U] = vlSelf->sa_tb__DOT__dut__DOT__psum_s11[7U];
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
        vlSelf->sa_tb__DOT__psum_out[0U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->sa_tb__DOT__psum_out[1U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->sa_tb__DOT__psum_out[2U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->sa_tb__DOT__psum_out[3U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->sa_tb__DOT__psum_out[4U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->sa_tb__DOT__psum_out[5U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->sa_tb__DOT__psum_out[6U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->sa_tb__DOT__psum_out[7U] = Vsa_tb__ConstPool__CONST_h9e67c271_0[7U];
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
    vlSelf->sa_tb__DOT__wload_streak = __Vdly__sa_tb__DOT__wload_streak;
    vlSelf->sa_tb__DOT___Vpast_1_0 = vlSelf->__Vsampled__TOP__sa_tb__DOT__weight_row;
    vlSelf->sa_tb__DOT___Vpast_0_0 = vlSelf->__Vsampled__TOP__sa_tb__DOT__weight_load;
    vlSelf->sa_tb__DOT___Vpast_3_0 = ((~ (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT___Vpast_2_0)) 
                                      & (IData)(vlSelf->__Vsampled__TOP__sa_tb__DOT__rst_n));
    vlSelf->sa_tb__DOT___Vpast_4_0[0U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[0U];
    vlSelf->sa_tb__DOT___Vpast_4_0[1U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[1U];
    vlSelf->sa_tb__DOT___Vpast_4_0[2U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[2U];
    vlSelf->sa_tb__DOT___Vpast_4_0[3U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[3U];
    vlSelf->sa_tb__DOT___Vpast_4_0[4U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[4U];
    vlSelf->sa_tb__DOT___Vpast_4_0[5U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[5U];
    vlSelf->sa_tb__DOT___Vpast_4_0[6U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[6U];
    vlSelf->sa_tb__DOT___Vpast_4_0[7U] = vlSelf->__Vsampled__TOP__sa_tb__DOT__psum_out[7U];
    vlSelf->sa_tb__DOT___Vpast_2_0 = vlSelf->__Vsampled__TOP__sa_tb__DOT__rst_n;
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
