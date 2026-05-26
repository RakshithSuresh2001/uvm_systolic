// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg.h"

VlCoroutine Vsa_tb___024unit__03a__03asa_random_seq::__VnoInFunc_run(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_random_seq::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vrepeat0;
    __Vrepeat0 = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__r;
    unnamedblk1__DOT__unnamedblk2__DOT__r = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2_1__DOT__r;
    unnamedblk1__DOT__unnamedblk2_1__DOT__r = 0;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn;
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
    VL_WRITEF("[SEQ] Random: %0# vectors\n",32,this->__PVT__num_vectors);
    __Vrepeat0 = this->__PVT__num_vectors;
    while (VL_LTS_III(32, 0U, __Vrepeat0)) {
        w[0U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[0U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[1U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[2U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[3U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[4U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[5U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[6U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        w[7U][7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__c = 8U;
        unnamedblk1__DOT__unnamedblk2__DOT__r = 8U;
        co_await this->__VnoInFunc_load_weights(vlSymsp, w);
        a[0U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 1U;
        a[1U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 2U;
        a[2U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 3U;
        a[3U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 4U;
        a[4U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 5U;
        a[5U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 6U;
        a[6U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 7U;
        a[7U] = (0xffU & VL_URANDOM_RANGE_I(1U, 0xffU));
        unnamedblk1__DOT__unnamedblk2_1__DOT__r = 8U;
        co_await this->__VnoInFunc_send_activation(vlSymsp, a);
        __Vrepeat0 = (__Vrepeat0 - (IData)(1U));
    }
}
