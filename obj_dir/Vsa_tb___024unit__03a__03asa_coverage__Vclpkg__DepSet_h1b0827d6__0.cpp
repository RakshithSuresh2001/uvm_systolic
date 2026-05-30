// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"

Vsa_tb___024unit__03a__03asa_coverage::Vsa_tb___024unit__03a__03asa_coverage(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT__r;
    unnamedblk2_1__DOT__r = 0;
    this->__PVT__rows_loaded[0U] = 0U;
    this->__PVT__rows_loaded[1U] = 0U;
    this->__PVT__rows_loaded[2U] = 0U;
    this->__PVT__rows_loaded[3U] = 0U;
    this->__PVT__rows_loaded[4U] = 0U;
    this->__PVT__rows_loaded[5U] = 0U;
    this->__PVT__rows_loaded[6U] = 0U;
    this->__PVT__rows_loaded[7U] = 0U;
    unnamedblk2_1__DOT__r = 8U;
    this->__PVT__act_zero_count = 0U;
    this->__PVT__act_max_count = 0U;
    this->__PVT__act_mixed_count = 0U;
    this->__PVT__act_bb_count = 0U;
    this->__PVT__wbin_zero = 0U;
    this->__PVT__wbin_low = 0U;
    this->__PVT__wbin_mid = 0U;
    this->__PVT__wbin_high = 0U;
    this->__PVT__wbin_max = 0U;
    this->__PVT__abin_zero = 0U;
    this->__PVT__abin_low = 0U;
    this->__PVT__abin_mid = 0U;
    this->__PVT__abin_high = 0U;
    this->__PVT__abin_max = 0U;
    this->__PVT__overflow_prone_count = 0U;
    this->__PVT__zero_weight_row_count = 0U;
    this->__PVT__weight_load_count = 0U;
    this->__PVT__total_cycles = 0U;
    this->__PVT__prev_act_nonzero = 0U;
    this->__PVT__any_max_weight_loaded = 0U;
}

void Vsa_tb___024unit__03a__03asa_coverage::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __PVT__rows_loaded[__Vi0] = 0;
    }
    __PVT__act_zero_count = 0;
    __PVT__act_max_count = 0;
    __PVT__act_mixed_count = 0;
    __PVT__act_bb_count = 0;
    __PVT__wbin_zero = 0;
    __PVT__wbin_low = 0;
    __PVT__wbin_mid = 0;
    __PVT__wbin_high = 0;
    __PVT__wbin_max = 0;
    __PVT__abin_zero = 0;
    __PVT__abin_low = 0;
    __PVT__abin_mid = 0;
    __PVT__abin_high = 0;
    __PVT__abin_max = 0;
    __PVT__overflow_prone_count = 0;
    __PVT__zero_weight_row_count = 0;
    __PVT__weight_load_count = 0;
    __PVT__total_cycles = 0;
    __PVT__prev_act_nonzero = 0;
    __PVT__any_max_weight_loaded = 0;
}
