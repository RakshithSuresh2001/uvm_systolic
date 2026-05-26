// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb_std__03a__03asemaphore__Vclpkg.h"

Vsa_tb_std__03a__03asemaphore::Vsa_tb_std__03a__03asemaphore(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03asemaphore::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_keyCount = keyCount;
}

VlCoroutine Vsa_tb_std__03a__03asemaphore::__VnoInFunc_get(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
        CData/*0:0*/ __VdynTrigger_hcd23dee5__0;
        __VdynTrigger_hcd23dee5__0 = 0;
        __VdynTrigger_hcd23dee5__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_hb6dbd39f__0;
        __Vtrigcurrexpr_hb6dbd39f__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_hcd23dee5__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         101);
            __Vtrigcurrexpr_hb6dbd39f__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
            __VdynTrigger_hcd23dee5__0 = __Vtrigcurrexpr_hb6dbd39f__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hcd23dee5__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                     "/usr/share/verilator/include/verilated_std.sv", 
                                                     101);
    }
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               - keyCount);
}

void Vsa_tb_std__03a__03asemaphore::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_keyCount = 0;
}
