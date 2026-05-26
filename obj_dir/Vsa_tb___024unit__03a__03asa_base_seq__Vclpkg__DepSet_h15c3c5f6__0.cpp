// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

VlCoroutine Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_idle(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_idle\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vrepeat0;
    __Vrepeat0 = 0;
    // Body
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn;
    __Vrepeat0 = n;
    while (VL_LTS_III(32, 0U, __Vrepeat0)) {
        txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
        VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 14)->__PVT__weight_load = 0U;
        VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 15)->__PVT__act_in = 0ULL;
        co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 16)->__VnoInFunc_put(vlSymsp, txn);
        __Vrepeat0 = (__Vrepeat0 - (IData)(1U));
    }
}

VlCoroutine Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_load_weights(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> w) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_load_weights\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__r;
    unnamedblk1__DOT__r = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__c;
    unnamedblk1__DOT__unnamedblk2__DOT__c = 0;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 0U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [0U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [0U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 1U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [1U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [1U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 2U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [2U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [2U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 3U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [3U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [3U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 4U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [4U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [4U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 5U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [5U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [5U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 6U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [6U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [6U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 7U;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 24)->__PVT__weight_load = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 25)->__PVT__weight_row = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | (IData)((IData)(
                                                    w
                                                    [7U]
                                                    [0U])));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [1U])) 
                                     << 8U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [2U])) 
                                     << 0x10U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [3U])) 
                                     << 0x18U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [4U])) 
                                     << 0x20U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [5U])) 
                                     << 0x28U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [6U])) 
                                     << 0x30U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)->__PVT__weight_data 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 27)
            ->__PVT__weight_data) | ((QData)((IData)(
                                                     w
                                                     [7U]
                                                     [7U])) 
                                     << 0x38U));
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 28)->__PVT__act_in = 0ULL;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 29)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1__DOT__r = 8U;
    co_await this->__VnoInFunc_send_idle(vlSymsp, 0x14U);
}

VlCoroutine Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_activation(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<CData/*7:0*/, 8> acts) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_activation\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__r;
    unnamedblk3__DOT__r = 0;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn;
    txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 37)->__PVT__weight_load = 0U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffffffffffff00ULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | (IData)((IData)(acts
                                               [0U])));
    unnamedblk3__DOT__r = 1U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffffffffff00ffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [1U])) 
                                << 8U));
    unnamedblk3__DOT__r = 2U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffffffff00ffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [2U])) 
                                << 0x10U));
    unnamedblk3__DOT__r = 3U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffffff00ffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [3U])) 
                                << 0x18U));
    unnamedblk3__DOT__r = 4U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffff00ffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [4U])) 
                                << 0x20U));
    unnamedblk3__DOT__r = 5U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffff00ffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [5U])) 
                                << 0x28U));
    unnamedblk3__DOT__r = 6U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xff00ffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [6U])) 
                                << 0x30U));
    unnamedblk3__DOT__r = 7U;
    VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)->__PVT__act_in 
        = ((0xffffffffffffffULL & VL_NULL_CHECK(txn, "tb/sa_sequences.sv", 38)
            ->__PVT__act_in) | ((QData)((IData)(acts
                                                [7U])) 
                                << 0x38U));
    unnamedblk3__DOT__r = 8U;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 39)->__VnoInFunc_put(vlSymsp, txn);
    co_await this->__VnoInFunc_send_idle(vlSymsp, 0x14U);
}
