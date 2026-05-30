// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg.h"

Vsa_tb_std__03a__03amailbox__Tz1::Vsa_tb_std__03a__03amailbox__Tz1(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03amailbox__Tz1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_bound = bound;
}

VlCoroutine Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if ((0U != this->__PVT__m_bound)) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hc681402f__0;
            __VdynTrigger_hc681402f__0 = 0;
            __VdynTrigger_hc681402f__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_hc07f3069__0;
            __Vtrigcurrexpr_hc07f3069__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_hc681402f__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/share/verilator/include/verilated_std.sv", 
                                                             44);
                __Vtrigcurrexpr_hc07f3069__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hc681402f__0 = __Vtrigcurrexpr_hc07f3069__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc681402f__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         44);
        }
    }
    this->__PVT__m_queue.push_back(VL_CVT_W_A(message, this->__PVT__m_queue
                                              .atDefault()));
}

VlCoroutine Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_hc826db83__0;
        __VdynTrigger_hc826db83__0 = 0;
        __VdynTrigger_hc826db83__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hbe48cded__0;
        __Vtrigcurrexpr_hbe48cded__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_hc826db83__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         59);
            __Vtrigcurrexpr_hbe48cded__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_hc826db83__0 = __Vtrigcurrexpr_hbe48cded__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc826db83__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/share/verilator/include/verilated_std.sv", 
                                                     59);
    }
    VL_ASSIGN_W(256,message, this->__PVT__m_queue.pop_front());
}

VlCoroutine Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vsa_tb__Syms* __restrict vlSymsp, VlWide<8>/*255:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_hc826db83__1;
        __VdynTrigger_hc826db83__1 = 0;
        __VdynTrigger_hc826db83__1 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hbe48cded__1;
        __Vtrigcurrexpr_hbe48cded__1 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_hc826db83__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         74);
            __Vtrigcurrexpr_hbe48cded__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_hc826db83__1 = __Vtrigcurrexpr_hbe48cded__1;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc826db83__1);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/share/verilator/include/verilated_std.sv", 
                                                     74);
    }
    VL_ASSIGN_W(256,message, this->__PVT__m_queue.at(0U));
}

void Vsa_tb_std__03a__03amailbox__Tz1::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_bound = 0;
    VL_ZERO_W(256, __PVT__m_queue.atDefault().data());
}
