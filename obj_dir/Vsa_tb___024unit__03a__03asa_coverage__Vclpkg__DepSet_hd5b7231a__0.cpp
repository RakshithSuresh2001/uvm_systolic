// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_sample\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_2__DOT__r;
    unnamedblk2_2__DOT__r = 0;
    CData/*0:0*/ all_zero;
    all_zero = 0;
    CData/*0:0*/ all_max;
    all_max = 0;
    this->__PVT__total_cycles = ((IData)(1U) + this->__PVT__total_cycles);
    if (VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 35)
        ->__PVT__weight_load) {
        this->__PVT__rows_loaded[VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 36)->__PVT__weight_row] 
            = ((IData)(1U) + this->__PVT__rows_loaded
               [VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 36)
               ->__PVT__weight_row]);
        this->__PVT__weight_load_count = ((IData)(1U) 
                                          + this->__PVT__weight_load_count);
    }
    all_zero = 1U;
    all_max = 1U;
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x38U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x38U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x30U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x30U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x28U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x28U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x20U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x20U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x18U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x18U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 0x10U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 0x10U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                 ->__PVT__act_in >> 8U))))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                    ->__PVT__act_in 
                                    >> 8U))))) {
        all_max = 0U;
    }
    if ((0U != (0xffU & (IData)(VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 44)
                                ->__PVT__act_in)))) {
        all_zero = 0U;
    }
    if ((0xffU != (0xffU & (IData)(VL_NULL_CHECK(txn, "tb/sa_coverage.sv", 45)
                                   ->__PVT__act_in)))) {
        all_max = 0U;
    }
    unnamedblk2_2__DOT__r = 0xffffffffU;
    if (all_zero) {
        this->__PVT__act_zero_count = ((IData)(1U) 
                                       + this->__PVT__act_zero_count);
    } else if (all_max) {
        this->__PVT__act_max_count = ((IData)(1U) + this->__PVT__act_max_count);
    } else {
        this->__PVT__act_mixed_count = ((IData)(1U) 
                                        + this->__PVT__act_mixed_count);
    }
}
