// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

VlCoroutine Vsa_tb___024unit__03a__03asa_corner_seq::__VnoInFunc_run(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_corner_seq::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__r;
    unnamedblk1__DOT__r = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__c;
    unnamedblk1__DOT__unnamedblk2__DOT__c = 0;
    IData/*31:0*/ unnamedblk2_1__DOT__r;
    unnamedblk2_1__DOT__r = 0;
    IData/*31:0*/ unnamedblk3__DOT__r;
    unnamedblk3__DOT__r = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__c;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 0;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> unnamedblk5__DOT__txn;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk6__DOT__r;
    unnamedblk5__DOT__unnamedblk6__DOT__r = 0;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk7__DOT__r;
    unnamedblk5__DOT__unnamedblk7__DOT__r = 0;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk8__DOT__r;
    unnamedblk5__DOT__unnamedblk8__DOT__r = 0;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> w;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            w[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<CData/*7:0*/, 8> a;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        a[__Vi0] = 0;
    }
    VL_WRITEF("[SEQ] Corner cases\n");
    w[0U][0U] = 5U;
    w[0U][1U] = 5U;
    w[0U][2U] = 5U;
    w[0U][3U] = 5U;
    w[0U][4U] = 5U;
    w[0U][5U] = 5U;
    w[0U][6U] = 5U;
    w[0U][7U] = 5U;
    w[1U][0U] = 5U;
    w[1U][1U] = 5U;
    w[1U][2U] = 5U;
    w[1U][3U] = 5U;
    w[1U][4U] = 5U;
    w[1U][5U] = 5U;
    w[1U][6U] = 5U;
    w[1U][7U] = 5U;
    w[2U][0U] = 5U;
    w[2U][1U] = 5U;
    w[2U][2U] = 5U;
    w[2U][3U] = 5U;
    w[2U][4U] = 5U;
    w[2U][5U] = 5U;
    w[2U][6U] = 5U;
    w[2U][7U] = 5U;
    w[3U][0U] = 0U;
    w[3U][1U] = 0U;
    w[3U][2U] = 0U;
    w[3U][3U] = 0U;
    w[3U][4U] = 0U;
    w[3U][5U] = 0U;
    w[3U][6U] = 0U;
    w[3U][7U] = 0U;
    w[4U][0U] = 5U;
    w[4U][1U] = 5U;
    w[4U][2U] = 5U;
    w[4U][3U] = 5U;
    w[4U][4U] = 5U;
    w[4U][5U] = 5U;
    w[4U][6U] = 5U;
    w[4U][7U] = 5U;
    w[5U][0U] = 5U;
    w[5U][1U] = 5U;
    w[5U][2U] = 5U;
    w[5U][3U] = 5U;
    w[5U][4U] = 5U;
    w[5U][5U] = 5U;
    w[5U][6U] = 5U;
    w[5U][7U] = 5U;
    w[6U][0U] = 5U;
    w[6U][1U] = 5U;
    w[6U][2U] = 5U;
    w[6U][3U] = 5U;
    w[6U][4U] = 5U;
    w[6U][5U] = 5U;
    w[6U][6U] = 5U;
    w[6U][7U] = 5U;
    w[7U][0U] = 5U;
    w[7U][1U] = 5U;
    w[7U][2U] = 5U;
    w[7U][3U] = 5U;
    w[7U][4U] = 5U;
    w[7U][5U] = 5U;
    w[7U][6U] = 5U;
    w[7U][7U] = 5U;
    unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    unnamedblk1__DOT__r = 8U;
    co_await this->__VnoInFunc_load_weights(vlSymsp, w);
    a[0U] = 2U;
    unnamedblk2_1__DOT__r = 1U;
    a[1U] = 2U;
    unnamedblk2_1__DOT__r = 2U;
    a[2U] = 2U;
    unnamedblk2_1__DOT__r = 3U;
    a[3U] = 2U;
    unnamedblk2_1__DOT__r = 4U;
    a[4U] = 2U;
    unnamedblk2_1__DOT__r = 5U;
    a[5U] = 2U;
    unnamedblk2_1__DOT__r = 6U;
    a[6U] = 2U;
    unnamedblk2_1__DOT__r = 7U;
    a[7U] = 2U;
    unnamedblk2_1__DOT__r = 8U;
    co_await this->__VnoInFunc_send_activation(vlSymsp, a);
    w[0U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[0U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[0U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[0U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[0U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[0U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[0U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[0U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 1U;
    w[1U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[1U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[1U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[1U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[1U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[1U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[1U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[1U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 2U;
    w[2U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[2U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[2U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[2U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[2U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[2U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[2U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[2U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 3U;
    w[3U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[3U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[3U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[3U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[3U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[3U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[3U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[3U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 4U;
    w[4U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[4U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[4U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[4U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[4U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[4U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[4U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[4U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 5U;
    w[5U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[5U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[5U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[5U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[5U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[5U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[5U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[5U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 6U;
    w[6U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[6U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[6U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[6U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[6U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[6U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[6U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[6U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 7U;
    w[7U][0U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 1U;
    w[7U][1U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 2U;
    w[7U][2U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 3U;
    w[7U][3U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 4U;
    w[7U][4U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 5U;
    w[7U][5U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 6U;
    w[7U][6U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 7U;
    w[7U][7U] = 0xffU;
    unnamedblk3__DOT__unnamedblk4__DOT__c = 8U;
    unnamedblk3__DOT__r = 8U;
    co_await this->__VnoInFunc_load_weights(vlSymsp, w);
    unnamedblk5__DOT__txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 210)->__PVT__weight_load = 0U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xffULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 1U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff00ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 2U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff0000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 3U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff000000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 4U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff00000000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 5U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff0000000000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 6U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff000000000000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 7U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)->__PVT__act_in 
        = (0xff00000000000000ULL | VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 211)
           ->__PVT__act_in);
    unnamedblk5__DOT__unnamedblk6__DOT__r = 8U;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 212)->__VnoInFunc_put(vlSymsp, unnamedblk5__DOT__txn);
    co_await this->__VnoInFunc_send_idle(vlSymsp, 0x14U);
    unnamedblk5__DOT__txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 216)->__PVT__weight_load = 0U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (3ULL | (0xffffffffffffff00ULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                   ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 1U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x300ULL | (0xffffffffffff00ffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                       ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 2U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x30000ULL | (0xffffffffff00ffffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                         ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 3U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x3000000ULL | (0xffffffff00ffffffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                           ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 4U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x300000000ULL | (0xffffff00ffffffffULL 
                             & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                             ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 5U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x30000000000ULL | (0xffff00ffffffffffULL 
                               & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                               ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 6U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x3000000000000ULL | (0xff00ffffffffffffULL 
                                 & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                                 ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 7U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)->__PVT__act_in 
        = (0x300000000000000ULL | (0xffffffffffffffULL 
                                   & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 217)
                                   ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk7__DOT__r = 8U;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 218)->__VnoInFunc_put(vlSymsp, unnamedblk5__DOT__txn);
    unnamedblk5__DOT__txn = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 219)->__PVT__weight_load = 0U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (4ULL | (0xffffffffffffff00ULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                   ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 1U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x400ULL | (0xffffffffffff00ffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                       ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 2U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x40000ULL | (0xffffffffff00ffffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                         ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 3U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x4000000ULL | (0xffffffff00ffffffULL & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                           ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 4U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x400000000ULL | (0xffffff00ffffffffULL 
                             & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                             ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 5U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x40000000000ULL | (0xffff00ffffffffffULL 
                               & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                               ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 6U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x4000000000000ULL | (0xff00ffffffffffffULL 
                                 & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                                 ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 7U;
    VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)->__PVT__act_in 
        = (0x400000000000000ULL | (0xffffffffffffffULL 
                                   & VL_NULL_CHECK(unnamedblk5__DOT__txn, "tb/sa_sequences.sv", 220)
                                   ->__PVT__act_in));
    unnamedblk5__DOT__unnamedblk8__DOT__r = 8U;
    co_await VL_NULL_CHECK(vlSymsp->TOP____024unit.g_drv_mbx, "tb/sa_sequences.sv", 221)->__VnoInFunc_put(vlSymsp, unnamedblk5__DOT__txn);
    co_await this->__VnoInFunc_send_idle(vlSymsp, 0x3cU);
}
