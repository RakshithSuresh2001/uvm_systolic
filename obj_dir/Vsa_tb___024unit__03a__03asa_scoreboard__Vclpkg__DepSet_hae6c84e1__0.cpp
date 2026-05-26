// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"

Vsa_tb___024unit__03a__03asa_scoreboard::Vsa_tb___024unit__03a__03asa_scoreboard(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT__r;
    unnamedblk2_1__DOT__r = 0;
    IData/*31:0*/ unnamedblk2_1__DOT__unnamedblk2_2__DOT__c;
    unnamedblk2_1__DOT__unnamedblk2_2__DOT__c = 0;
    this->__PVT__mbx = vlSymsp->TOP____024unit.g_mon_mbx;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
    this->__PVT__cycle_count = 0U;
    this->__PVT__checks_done = 0U;
    this->__PVT__last_wload_cycle = 0xffffffecU;
    this->__PVT__ref_weights[7U][7U] = 0U;
    this->__PVT__ref_weights[7U][6U] = 0U;
    this->__PVT__ref_weights[7U][5U] = 0U;
    this->__PVT__ref_weights[7U][4U] = 0U;
    this->__PVT__ref_weights[7U][3U] = 0U;
    this->__PVT__ref_weights[7U][2U] = 0U;
    this->__PVT__ref_weights[7U][1U] = 0U;
    this->__PVT__ref_weights[7U][0U] = 0U;
    this->__PVT__ref_weights[6U][7U] = 0U;
    this->__PVT__ref_weights[6U][6U] = 0U;
    this->__PVT__ref_weights[6U][5U] = 0U;
    this->__PVT__ref_weights[6U][4U] = 0U;
    this->__PVT__ref_weights[6U][3U] = 0U;
    this->__PVT__ref_weights[6U][2U] = 0U;
    this->__PVT__ref_weights[6U][1U] = 0U;
    this->__PVT__ref_weights[6U][0U] = 0U;
    this->__PVT__ref_weights[5U][7U] = 0U;
    this->__PVT__ref_weights[5U][6U] = 0U;
    this->__PVT__ref_weights[5U][5U] = 0U;
    this->__PVT__ref_weights[5U][4U] = 0U;
    this->__PVT__ref_weights[5U][3U] = 0U;
    this->__PVT__ref_weights[5U][2U] = 0U;
    this->__PVT__ref_weights[5U][1U] = 0U;
    this->__PVT__ref_weights[5U][0U] = 0U;
    this->__PVT__ref_weights[4U][7U] = 0U;
    this->__PVT__ref_weights[4U][6U] = 0U;
    this->__PVT__ref_weights[4U][5U] = 0U;
    this->__PVT__ref_weights[4U][4U] = 0U;
    this->__PVT__ref_weights[4U][3U] = 0U;
    this->__PVT__ref_weights[4U][2U] = 0U;
    this->__PVT__ref_weights[4U][1U] = 0U;
    this->__PVT__ref_weights[4U][0U] = 0U;
    this->__PVT__ref_weights[3U][7U] = 0U;
    this->__PVT__ref_weights[3U][6U] = 0U;
    this->__PVT__ref_weights[3U][5U] = 0U;
    this->__PVT__ref_weights[3U][4U] = 0U;
    this->__PVT__ref_weights[3U][3U] = 0U;
    this->__PVT__ref_weights[3U][2U] = 0U;
    this->__PVT__ref_weights[3U][1U] = 0U;
    this->__PVT__ref_weights[3U][0U] = 0U;
    this->__PVT__ref_weights[2U][7U] = 0U;
    this->__PVT__ref_weights[2U][6U] = 0U;
    this->__PVT__ref_weights[2U][5U] = 0U;
    this->__PVT__ref_weights[2U][4U] = 0U;
    this->__PVT__ref_weights[2U][3U] = 0U;
    this->__PVT__ref_weights[2U][2U] = 0U;
    this->__PVT__ref_weights[2U][1U] = 0U;
    this->__PVT__ref_weights[2U][0U] = 0U;
    this->__PVT__ref_weights[1U][7U] = 0U;
    this->__PVT__ref_weights[1U][6U] = 0U;
    this->__PVT__ref_weights[1U][5U] = 0U;
    this->__PVT__ref_weights[1U][4U] = 0U;
    this->__PVT__ref_weights[1U][3U] = 0U;
    this->__PVT__ref_weights[1U][2U] = 0U;
    this->__PVT__ref_weights[1U][1U] = 0U;
    this->__PVT__ref_weights[1U][0U] = 0U;
    this->__PVT__ref_weights[0U][7U] = 0U;
    this->__PVT__ref_weights[0U][6U] = 0U;
    this->__PVT__ref_weights[0U][5U] = 0U;
    this->__PVT__ref_weights[0U][4U] = 0U;
    this->__PVT__ref_weights[0U][3U] = 0U;
    this->__PVT__ref_weights[0U][2U] = 0U;
    this->__PVT__ref_weights[0U][1U] = 0U;
    this->__PVT__ref_weights[0U][0U] = 0U;
    unnamedblk2_1__DOT__unnamedblk2_2__DOT__c = 0xffffffffU;
    unnamedblk2_1__DOT__r = 0xffffffffU;
}

void Vsa_tb___024unit__03a__03asa_scoreboard::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            __PVT__ref_weights[__Vi0][__Vi1] = 0;
        }
    }
    __PVT__cq.atDefault().__PVT__arrival = 0;
    __PVT__cq.atDefault().__PVT__col = 0;
    __PVT__cq.atDefault().__PVT__exp = 0;
    __PVT__last_wload_cycle = 0;
    __PVT__pass_count = 0;
    __PVT__fail_count = 0;
    __PVT__cycle_count = 0;
    __PVT__checks_done = 0;
}
