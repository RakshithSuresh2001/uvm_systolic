// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_check_direct(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn, VlWide<8>/*255:0*/ psum) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_check_direct\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__c;
    unnamedblk1__DOT__c = 0;
    IData/*31:0*/ unnamedblk2_3__DOT__r;
    unnamedblk2_3__DOT__r = 0;
    IData/*31:0*/ unnamedblk2__DOT__row;
    unnamedblk2__DOT__row = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__col;
    unnamedblk2__DOT__unnamedblk3__DOT__col = 0;
    Vsa_tb_check_entry_t__struct__0 unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival = 0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp = 0;
    IData/*31:0*/ unnamedblk2_4__DOT__i;
    unnamedblk2_4__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_4__DOT__unnamedblk5__DOT__col;
    unnamedblk2_4__DOT__unnamedblk5__DOT__col = 0;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    CData/*0:0*/ any_active;
    any_active = 0;
    this->__PVT__cycle_count = ((IData)(1U) + this->__PVT__cycle_count);
    if (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 47)
        ->__PVT__weight_load) {
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][0U] 
            = (0xffU & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                               ->__PVT__weight_data));
        unnamedblk1__DOT__c = 8U;
        this->__PVT__last_wload_cycle = this->__PVT__cycle_count;
        this->__PVT__cq.clear();
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][1U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 8U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][2U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x10U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][3U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x18U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][4U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x20U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][5U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x28U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][6U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x30U)));
        this->__PVT__ref_weights[VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)->__PVT__weight_row][7U] 
            = (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 49)
                                ->__PVT__weight_data 
                                >> 0x38U)));
    }
    any_active = 0U;
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x38U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x30U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x28U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x20U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x18U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 0x10U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)((VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                 ->__PVT__act_in >> 8U))))) {
        any_active = 1U;
    }
    if ((0U != (0xffU & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 56)
                                ->__PVT__act_in)))) {
        any_active = 1U;
    }
    unnamedblk2_3__DOT__r = 0xffffffffU;
    if (((IData)(any_active) & (0x14U < (this->__PVT__cycle_count 
                                         - this->__PVT__last_wload_cycle)))) {
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__col = 8U;
        unnamedblk2__DOT__row = 8U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][0U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][1U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][2U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xeU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][3U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xfU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][4U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x10U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][5U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x11U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][6U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x12U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[0U][7U] * (0xffU 
                                                   & (IData)(VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                             ->__PVT__act_in)));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xeU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xfU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x10U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x11U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[1U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 8U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xeU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xfU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0x10U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[2U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x10U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(8U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xeU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xfU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[3U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x18U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(7U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(8U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xeU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[4U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x20U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(6U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(7U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(8U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xdU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[5U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x28U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(5U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(6U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(7U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(8U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xcU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[6U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x30U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(4U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][0U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(5U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 1U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][1U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(6U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 2U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][2U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(7U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 3U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][3U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(8U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 4U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][4U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(9U) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 5U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][5U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xaU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 6U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][6U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__arrival 
            = ((IData)(0xbU) + this->__PVT__cycle_count);
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__col = 7U;
        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e.__PVT__exp 
            = (this->__PVT__ref_weights[7U][7U] * (0xffU 
                                                   & (IData)(
                                                             (VL_NULL_CHECK(txn, "tb/sa_scoreboard.sv", 65)
                                                              ->__PVT__act_in 
                                                              >> 0x38U))));
        this->__PVT__cq.push_back(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__e);
    }
    unnamedblk2_4__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2_4__DOT__i, this->__PVT__cq.size())) {
        if ((this->__PVT__cq.at(unnamedblk2_4__DOT__i)
             .__PVT__arrival == this->__PVT__cycle_count)) {
            unnamedblk2_4__DOT__unnamedblk5__DOT__col 
                = this->__PVT__cq.at(unnamedblk2_4__DOT__i)
                .__PVT__col;
            this->__PVT__checks_done = ((IData)(1U) 
                                        + this->__PVT__checks_done);
            if ((0U == this->__PVT__cq.at(unnamedblk2_4__DOT__i)
                 .__PVT__exp)) {
                this->__PVT__checks_done = (this->__PVT__checks_done 
                                            - (IData)(1U));
            } else if (VL_LIKELY(((((0U == (0x1fU & 
                                            VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U)))
                                     ? 0U : (psum[(
                                                   ((IData)(0x1fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U))) 
                                                   >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U))))) 
                                   | (psum[(7U & (VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U) 
                                                  >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U)))) 
                                  == this->__PVT__cq.at(unnamedblk2_4__DOT__i)
                                  .__PVT__exp))) {
                this->__PVT__pass_count = ((IData)(1U) 
                                           + this->__PVT__pass_count);
            } else {
                VL_WRITEF("[SB FAIL] cycle=%0# col=%0d got=0x%08x exp=0x%08x\n",
                          32,this->__PVT__cycle_count,
                          32,unnamedblk2_4__DOT__unnamedblk5__DOT__col,
                          32,(((0U == (0x1fU & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U)))
                                ? 0U : (psum[(((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U))) 
                                              >> 5U)] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U))))) 
                              | (psum[(7U & (VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U) 
                                             >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,32,32, unnamedblk2_4__DOT__unnamedblk5__DOT__col, 5U)))),
                          32,this->__PVT__cq.at(unnamedblk2_4__DOT__i)
                          .__PVT__exp);
                this->__PVT__fail_count = ((IData)(1U) 
                                           + this->__PVT__fail_count);
            }
        }
        unnamedblk2_4__DOT__i = ((IData)(1U) + unnamedblk2_4__DOT__i);
    }
    unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk6__DOT__i, this->__PVT__cq.size())) {
        if ((this->__PVT__cq.at(unnamedblk6__DOT__i)
             .__PVT__arrival < this->__PVT__cycle_count)) {
            this->__PVT__cq.erase(unnamedblk6__DOT__i);
        } else {
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
    }
}
