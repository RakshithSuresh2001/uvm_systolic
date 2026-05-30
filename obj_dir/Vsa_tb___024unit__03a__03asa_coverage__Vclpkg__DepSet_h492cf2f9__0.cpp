// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample_scalar(Vsa_tb__Syms* __restrict vlSymsp, CData/*0:0*/ wload, CData/*2:0*/ wrow, CData/*7:0*/ w0, CData/*7:0*/ w1, CData/*7:0*/ w2, CData/*7:0*/ w3, CData/*7:0*/ w4, CData/*7:0*/ w5, CData/*7:0*/ w6, CData/*7:0*/ w7, CData/*7:0*/ a0, CData/*7:0*/ a1, CData/*7:0*/ a2, CData/*7:0*/ a3, CData/*7:0*/ a4, CData/*7:0*/ a5, CData/*7:0*/ a6, CData/*7:0*/ a7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample_scalar\n"); );
    // Body
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk2_3__DOT__c;
    unnamedblk4__DOT__unnamedblk2_3__DOT__c = 0;
    IData/*31:0*/ unnamedblk2_4__DOT__r;
    unnamedblk2_4__DOT__r = 0;
    VlUnpacked<CData/*7:0*/, 8> w;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        w[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 8> a;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        a[__Vi0] = 0;
    }
    CData/*0:0*/ all_zero_act;
    all_zero_act = 0;
    CData/*0:0*/ all_max_act;
    all_max_act = 0;
    CData/*0:0*/ any_nonzero_act;
    any_nonzero_act = 0;
    CData/*0:0*/ has_max_weight;
    has_max_weight = 0;
    CData/*0:0*/ has_max_act;
    has_max_act = 0;
    CData/*0:0*/ all_zero_wrow;
    all_zero_wrow = 0;
    w[0U] = w0;
    w[1U] = w1;
    w[2U] = w2;
    w[3U] = w3;
    w[4U] = w4;
    w[5U] = w5;
    w[6U] = w6;
    w[7U] = w7;
    a[0U] = a0;
    a[1U] = a1;
    a[2U] = a2;
    a[3U] = a3;
    a[4U] = a4;
    a[5U] = a5;
    a[6U] = a6;
    a[7U] = a7;
    this->__PVT__total_cycles = ((IData)(1U) + this->__PVT__total_cycles);
    if (wload) {
        this->__PVT__rows_loaded[wrow] = ((IData)(1U) 
                                          + this->__PVT__rows_loaded
                                          [wrow]);
        this->__PVT__weight_load_count = ((IData)(1U) 
                                          + this->__PVT__weight_load_count);
        all_zero_wrow = 1U;
        has_max_weight = 0U;
        if ((0U == w[0U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[0U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[0U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[0U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        unnamedblk4__DOT__unnamedblk2_3__DOT__c = 8U;
        if ((0U != w[0U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[0U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[1U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[1U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[1U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[1U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[1U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[1U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[2U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[2U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[2U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[2U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[2U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[2U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[3U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[3U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[3U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[3U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[3U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[3U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[4U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[4U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[4U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[4U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[4U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[4U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[5U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[5U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[5U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[5U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[5U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[5U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[6U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[6U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[6U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[6U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[6U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[6U])) {
            has_max_weight = 1U;
        }
        if ((0U == w[7U])) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= w[7U])) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= w[7U])) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= w[7U])) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != w[7U])) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == w[7U])) {
            has_max_weight = 1U;
        }
        if (all_zero_wrow) {
            this->__PVT__zero_weight_row_count = ((IData)(1U) 
                                                  + this->__PVT__zero_weight_row_count);
        }
        if (has_max_weight) {
            this->__PVT__any_max_weight_loaded = 1U;
        }
        if ((0U == (IData)(wrow))) {
            this->__PVT__any_max_weight_loaded = has_max_weight;
        }
    }
    all_zero_act = 1U;
    all_max_act = 1U;
    any_nonzero_act = 0U;
    has_max_act = 0U;
    if ((0U != a[0U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[0U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[0U])) {
        has_max_act = 1U;
    }
    if ((0U == a[0U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[0U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[0U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[0U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[1U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[1U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[1U])) {
        has_max_act = 1U;
    }
    if ((0U == a[1U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[1U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[1U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[1U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[2U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[2U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[2U])) {
        has_max_act = 1U;
    }
    if ((0U == a[2U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[2U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[2U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[2U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[3U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[3U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[3U])) {
        has_max_act = 1U;
    }
    if ((0U == a[3U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[3U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[3U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[3U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[4U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[4U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[4U])) {
        has_max_act = 1U;
    }
    if ((0U == a[4U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[4U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[4U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[4U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[5U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[5U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[5U])) {
        has_max_act = 1U;
    }
    if ((0U == a[5U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[5U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[5U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[5U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[6U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[6U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[6U])) {
        has_max_act = 1U;
    }
    if ((0U == a[6U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[6U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[6U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[6U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0U != a[7U])) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU != a[7U])) {
        all_max_act = 0U;
    }
    if ((0xffU == a[7U])) {
        has_max_act = 1U;
    }
    if ((0U == a[7U])) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= a[7U])) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= a[7U])) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= a[7U])) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_4__DOT__r = 8U;
    if (all_zero_act) {
        this->__PVT__act_zero_count = ((IData)(1U) 
                                       + this->__PVT__act_zero_count);
    } else if (all_max_act) {
        this->__PVT__act_max_count = ((IData)(1U) + this->__PVT__act_max_count);
    } else {
        this->__PVT__act_mixed_count = ((IData)(1U) 
                                        + this->__PVT__act_mixed_count);
    }
    if (((IData)(any_nonzero_act) & (IData)(this->__PVT__prev_act_nonzero))) {
        this->__PVT__act_bb_count = ((IData)(1U) + this->__PVT__act_bb_count);
    }
    this->__PVT__prev_act_nonzero = any_nonzero_act;
    if (((((~ (IData)(wload)) & (IData)(any_nonzero_act)) 
          & (IData)(has_max_act)) & (IData)(this->__PVT__any_max_weight_loaded))) {
        this->__PVT__overflow_prone_count = ((IData)(1U) 
                                             + this->__PVT__overflow_prone_count);
    }
}

void Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_report\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_5__DOT__r;
    unnamedblk2_5__DOT__r = 0;
    IData/*31:0*/ rows_hit;
    rows_hit = 0;
    double row_pct;
    row_pct = 0;
    IData/*31:0*/ total_wbins;
    total_wbins = 0;
    IData/*31:0*/ total_abins;
    total_abins = 0;
    rows_hit = 0U;
    VL_WRITEF("\n=== Coverage Report ===\n  Weight Row Coverage:\n    row[0]: %0# loads  %s\n",
              32,this->__PVT__rows_loaded[0U],32,((0U 
                                                   < 
                                                   this->__PVT__rows_loaded
                                                   [0U])
                                                   ? 0x484954U
                                                   : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[0U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[1]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [1U],32,((0U < this->__PVT__rows_loaded
                        [1U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[1U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[2]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [2U],32,((0U < this->__PVT__rows_loaded
                        [2U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[2U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[3]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [3U],32,((0U < this->__PVT__rows_loaded
                        [3U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[3U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[4]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [4U],32,((0U < this->__PVT__rows_loaded
                        [4U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[4U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[5]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [5U],32,((0U < this->__PVT__rows_loaded
                        [5U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[5U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[6]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [6U],32,((0U < this->__PVT__rows_loaded
                        [6U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[6U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[7]: %0# loads  %s\n",32,this->__PVT__rows_loaded
              [7U],32,((0U < this->__PVT__rows_loaded
                        [7U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[7U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    unnamedblk2_5__DOT__r = 8U;
    row_pct = (100.0 * (VL_ISTOR_D_I(32, rows_hit) 
                        / 8.0));
    VL_WRITEF("  Row coverage: %0d/8 (%.1f%%)\n",32,
              rows_hit,64,row_pct);
    total_wbins = ((((this->__PVT__wbin_zero + this->__PVT__wbin_low) 
                     + this->__PVT__wbin_mid) + this->__PVT__wbin_high) 
                   + this->__PVT__wbin_max);
    VL_WRITEF("  Weight Value Bins (total=%0d):\n    zero    (0)      : %0#  %s\n    low     (1-63)   : %0#  %s\n    mid     (64-191) : %0#  %s\n    high    (192-254): %0#  %s\n    max     (255)    : %0#  %s\n",
              32,total_wbins,32,this->__PVT__wbin_zero,
              32,((0U < this->__PVT__wbin_zero) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__wbin_low,
              32,((0U < this->__PVT__wbin_low) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__wbin_mid,
              32,((0U < this->__PVT__wbin_mid) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__wbin_high,
              32,((0U < this->__PVT__wbin_high) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__wbin_max,
              32,((0U < this->__PVT__wbin_max) ? 0x484954U
                   : 0x4d495353U));
    total_abins = ((((this->__PVT__abin_zero + this->__PVT__abin_low) 
                     + this->__PVT__abin_mid) + this->__PVT__abin_high) 
                   + this->__PVT__abin_max);
    VL_WRITEF("  Activation Value Bins (total=%0d):\n    zero    (0)      : %0#  %s\n    low     (1-63)   : %0#  %s\n    mid     (64-191) : %0#  %s\n    high    (192-254): %0#  %s\n    max     (255)    : %0#  %s\n  Activation Patterns:\n    All-zero        : %0# cycles\n    All-max         : %0# cycles  %s\n    Mixed           : %0# cycles  %s\n    Back-to-back    : %0# cycles  %s\n  Corner Cases:\n    Zero weight row : %0#  %s\n    Overflow-prone  : %0#  %s\n  Total cycles    : %0#\n  Weight loads    : %0#\n",
              32,total_abins,32,this->__PVT__abin_zero,
              32,((0U < this->__PVT__abin_zero) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__abin_low,
              32,((0U < this->__PVT__abin_low) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__abin_mid,
              32,((0U < this->__PVT__abin_mid) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__abin_high,
              32,((0U < this->__PVT__abin_high) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__abin_max,
              32,((0U < this->__PVT__abin_max) ? 0x484954U
                   : 0x4d495353U),32,this->__PVT__act_zero_count,
              32,this->__PVT__act_max_count,32,((0U 
                                                 < this->__PVT__act_max_count)
                                                 ? 0x484954U
                                                 : 0x4d495353U),
              32,this->__PVT__act_mixed_count,32,((0U 
                                                   < this->__PVT__act_mixed_count)
                                                   ? 0x484954U
                                                   : 0x4d495353U),
              32,this->__PVT__act_bb_count,32,((0U 
                                                < this->__PVT__act_bb_count)
                                                ? 0x484954U
                                                : 0x4d495353U),
              32,this->__PVT__zero_weight_row_count,
              32,((0U < this->__PVT__zero_weight_row_count)
                   ? 0x484954U : 0x4d495353U),32,this->__PVT__overflow_prone_count,
              32,((0U < this->__PVT__overflow_prone_count)
                   ? 0x484954U : 0x4d495353U),32,this->__PVT__total_cycles,
              32,this->__PVT__weight_load_count);
    VL_WRITEF("=======================\n\n");
}

Vsa_tb___024unit__03a__03asa_coverage::~Vsa_tb___024unit__03a__03asa_coverage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_coverage>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_coverage::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_coverage::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rows_loaded:" + VL_TO_STRING(__PVT__rows_loaded);
    out += ", act_zero_count:" + VL_TO_STRING(__PVT__act_zero_count);
    out += ", act_max_count:" + VL_TO_STRING(__PVT__act_max_count);
    out += ", act_mixed_count:" + VL_TO_STRING(__PVT__act_mixed_count);
    out += ", act_bb_count:" + VL_TO_STRING(__PVT__act_bb_count);
    out += ", wbin_zero:" + VL_TO_STRING(__PVT__wbin_zero);
    out += ", wbin_low:" + VL_TO_STRING(__PVT__wbin_low);
    out += ", wbin_mid:" + VL_TO_STRING(__PVT__wbin_mid);
    out += ", wbin_high:" + VL_TO_STRING(__PVT__wbin_high);
    out += ", wbin_max:" + VL_TO_STRING(__PVT__wbin_max);
    out += ", abin_zero:" + VL_TO_STRING(__PVT__abin_zero);
    out += ", abin_low:" + VL_TO_STRING(__PVT__abin_low);
    out += ", abin_mid:" + VL_TO_STRING(__PVT__abin_mid);
    out += ", abin_high:" + VL_TO_STRING(__PVT__abin_high);
    out += ", abin_max:" + VL_TO_STRING(__PVT__abin_max);
    out += ", overflow_prone_count:" + VL_TO_STRING(__PVT__overflow_prone_count);
    out += ", zero_weight_row_count:" + VL_TO_STRING(__PVT__zero_weight_row_count);
    out += ", weight_load_count:" + VL_TO_STRING(__PVT__weight_load_count);
    out += ", total_cycles:" + VL_TO_STRING(__PVT__total_cycles);
    out += ", prev_act_nonzero:" + VL_TO_STRING(__PVT__prev_act_nonzero);
    out += ", any_max_weight_loaded:" + VL_TO_STRING(__PVT__any_max_weight_loaded);
    return out;
}
