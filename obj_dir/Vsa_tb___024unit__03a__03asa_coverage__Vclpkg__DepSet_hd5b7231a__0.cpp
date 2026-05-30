// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__c;
    unnamedblk1__DOT__c = 0;
    CData/*7:0*/ unnamedblk1__DOT__unnamedblk2__DOT__w;
    unnamedblk1__DOT__unnamedblk2__DOT__w = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__r;
    unnamedblk2_2__DOT__r = 0;
    CData/*7:0*/ unnamedblk2_2__DOT__unnamedblk3__DOT__a;
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = 0;
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
    this->__PVT__total_cycles = ((IData)(1U) + this->__PVT__total_cycles);
    if (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 77)
        ->__PVT__weight_load) {
        this->__PVT__rows_loaded[VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 78)->__PVT__weight_row] 
            = ((IData)(1U) + this->__PVT__rows_loaded
               [VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 78)
               ->__PVT__weight_row]);
        this->__PVT__weight_load_count = ((IData)(1U) 
                                          + this->__PVT__weight_load_count);
        all_zero_wrow = 1U;
        unnamedblk1__DOT__c = 8U;
        has_max_weight = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                           ->__PVT__weight_data));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 8U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x10U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x18U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x20U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x28U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x30U)));
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        unnamedblk1__DOT__unnamedblk2__DOT__w = (0xffU 
                                                 & (IData)(
                                                           (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 85)
                                                            ->__PVT__weight_data 
                                                            >> 0x38U)));
        if ((0xffU == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            has_max_weight = 1U;
        }
        if ((0U != (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            all_zero_wrow = 0U;
        }
        if ((0U == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_zero = ((IData)(1U) + this->__PVT__wbin_zero);
        } else if ((0x3fU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_low = ((IData)(1U) + this->__PVT__wbin_low);
        } else if ((0xbfU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_mid = ((IData)(1U) + this->__PVT__wbin_mid);
        } else if ((0xfeU >= (IData)(unnamedblk1__DOT__unnamedblk2__DOT__w))) {
            this->__PVT__wbin_high = ((IData)(1U) + this->__PVT__wbin_high);
        } else {
            this->__PVT__wbin_max = ((IData)(1U) + this->__PVT__wbin_max);
        }
        if (all_zero_wrow) {
            this->__PVT__zero_weight_row_count = ((IData)(1U) 
                                                  + this->__PVT__zero_weight_row_count);
        }
    }
    all_zero_act = 1U;
    all_max_act = 1U;
    any_nonzero_act = 0U;
    has_max_act = 0U;
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x38U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x30U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x28U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x20U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x18U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 0x10U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(
                                                         (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                          ->__PVT__act_in 
                                                          >> 8U)));
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    unnamedblk2_2__DOT__unnamedblk3__DOT__a = (0xffU 
                                               & (IData)(VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 103)
                                                         ->__PVT__act_in));
    if ((0U == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_zero = ((IData)(1U) + this->__PVT__abin_zero);
    } else if ((0x3fU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_low = ((IData)(1U) + this->__PVT__abin_low);
    } else if ((0xbfU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_mid = ((IData)(1U) + this->__PVT__abin_mid);
    } else if ((0xfeU >= (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        this->__PVT__abin_high = ((IData)(1U) + this->__PVT__abin_high);
    } else {
        this->__PVT__abin_max = ((IData)(1U) + this->__PVT__abin_max);
    }
    if ((0xffU == (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        has_max_act = 1U;
    }
    if ((0xffU != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_max_act = 0U;
    }
    if ((0U != (IData)(unnamedblk2_2__DOT__unnamedblk3__DOT__a))) {
        all_zero_act = 0U;
        any_nonzero_act = 1U;
    }
    unnamedblk2_2__DOT__r = 0xffffffffU;
    if (all_zero_act) {
        this->__PVT__act_zero_count = ((IData)(1U) 
                                       + this->__PVT__act_zero_count);
    } else if (all_max_act) {
        this->__PVT__act_max_count = ((IData)(1U) + this->__PVT__act_max_count);
    } else {
        this->__PVT__act_mixed_count = ((IData)(1U) 
                                        + this->__PVT__act_mixed_count);
    }
    if (any_nonzero_act) {
        if (this->__PVT__prev_act_nonzero) {
            this->__PVT__act_bb_count = ((IData)(1U) 
                                         + this->__PVT__act_bb_count);
        }
        this->__PVT__prev_act_nonzero = 1U;
    } else {
        this->__PVT__prev_act_nonzero = 0U;
    }
    if ((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 131)
         ->__PVT__weight_load && (IData)(has_max_weight))) {
        this->__PVT__any_max_weight_loaded = 1U;
    }
    if ((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 134)
         ->__PVT__weight_load && (0U == VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 134)
                                  ->__PVT__weight_row))) {
        this->__PVT__any_max_weight_loaded = has_max_weight;
    }
    if (((((1U & (~ (IData)(VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 138)
                            ->__PVT__weight_load))) 
           && (IData)(any_nonzero_act)) && (IData)(has_max_act)) 
         && (IData)(this->__PVT__any_max_weight_loaded))) {
        this->__PVT__overflow_prone_count = ((IData)(1U) 
                                             + this->__PVT__overflow_prone_count);
    }
}
