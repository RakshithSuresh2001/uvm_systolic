// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vsa_tb___024root___eval_initial__TOP__Vtiming__3(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h31f193c6__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge sa_tb.clk)", 
                                                           "tb/sa_tb.sv", 
                                                           165);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/sa_tb.sv", 
                                           166);
        if (vlSelf->sa_tb__DOT__rst_n) {
            vlSelf->sa_tb__DOT___cyc = ((IData)(1U) 
                                        + vlSelf->sa_tb__DOT___cyc);
            VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 170)->__VnoInFunc_schedule(vlSymsp, vlSelf->sa_tb__DOT___cyc, (IData)(vlSelf->sa_tb__DOT__weight_load), vlSelf->sa_tb__DOT__weight_row, vlSelf->sa_tb__DOT__weight_data, 
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
            vlSelf->sa_tb__DOT__unnamedblk10__DOT___i = 0U;
            while (VL_LTS_III(32, vlSelf->sa_tb__DOT__unnamedblk10__DOT___i, VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 174)
                              ->__PVT__cq.size())) {
                if (((VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 175)
                      ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                      .__PVT__arrival == vlSelf->sa_tb__DOT___cyc) 
                     && (0U != VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 175)
                         ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                         .__PVT__exp))) {
                    VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 176)->__PVT__checks_done 
                        = ((IData)(1U) + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 176)
                                                 ->__PVT__checks_done));
                    if (((((((((0U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                .__PVT__col) | (1U 
                                                == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                                ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                                .__PVT__col)) 
                              | (2U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                 ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                 .__PVT__col)) | (3U 
                                                  == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                                  ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                                  .__PVT__col)) 
                            | (4U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                               ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                               .__PVT__col)) | (5U 
                                                == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                                ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                                .__PVT__col)) 
                          | (6U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                             ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                             .__PVT__col)) | (7U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                              ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                              .__PVT__col))) {
                        if ((0U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                             ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                             .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[0U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col0 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[0U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 178)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((1U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[1U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col1 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[1U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 179)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((2U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[2U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col2 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[2U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 180)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((3U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[3U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col3 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[3U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 181)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((4U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[4U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col4 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[4U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 182)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((5U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[5U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col5 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[5U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 183)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if ((6U == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 177)
                                    ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                    .__PVT__col)) {
                            if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[6U] 
                                           == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)
                                           ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                           .__PVT__exp))) {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)->__PVT__pass_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)
                                                 ->__PVT__pass_count));
                            } else {
                                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)->__PVT__fail_count 
                                    = ((IData)(1U) 
                                       + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)
                                                 ->__PVT__fail_count));
                                VL_WRITEF("[SBF] cyc=%0d col6 got=%08x exp=%08x\n",
                                          32,vlSelf->sa_tb__DOT___cyc,
                                          32,vlSelf->sa_tb__DOT__psum_out[6U],
                                          32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 184)
                                          ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                          .__PVT__exp);
                            }
                        } else if (VL_LIKELY((vlSelf->sa_tb__DOT__psum_out[7U] 
                                              == VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)
                                              ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                              .__PVT__exp))) {
                            VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)->__PVT__pass_count 
                                = ((IData)(1U) + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)
                                                         ->__PVT__pass_count));
                        } else {
                            VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)->__PVT__fail_count 
                                = ((IData)(1U) + (IData)(VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)
                                                         ->__PVT__fail_count));
                            VL_WRITEF("[SBF] cyc=%0d col7 got=%08x exp=%08x\n",
                                      32,vlSelf->sa_tb__DOT___cyc,
                                      32,vlSelf->sa_tb__DOT__psum_out[7U],
                                      32,VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 185)
                                      ->__PVT__cq.at(vlSelf->sa_tb__DOT__unnamedblk10__DOT___i)
                                      .__PVT__exp);
                        }
                    }
                }
                vlSelf->sa_tb__DOT__unnamedblk10__DOT___i 
                    = ((IData)(1U) + vlSelf->sa_tb__DOT__unnamedblk10__DOT___i);
            }
            while ((VL_LTS_III(32, 0U, VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 189)
                               ->__PVT__cq.size()) 
                    && VL_LTES_III(32, VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 189)
                                   ->__PVT__cq.at(0U)
                                   .__PVT__arrival, vlSelf->sa_tb__DOT___cyc))) {
                VL_NULL_CHECK(vlSelf->sa_tb__DOT__sb, "tb/sa_tb.sv", 189)->__PVT__cq.pop_front();
            }
        }
    }
}
