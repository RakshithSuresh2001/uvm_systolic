// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

Vsa_tb___024unit__03a__03asa_transaction::Vsa_tb___024unit__03a__03asa_transaction(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vsa_tb___024unit__03a__03asa_transaction::__VnoInFunc_clone(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::__VnoInFunc_clone\n"); );
    // Body
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> t;
    t = VL_NEW(Vsa_tb___024unit__03a__03asa_transaction, vlSymsp);
    VL_NULL_CHECK(t, "tb/sa_transaction.sv", 42)->__PVT__weight_load 
        = this->__PVT__weight_load;
    VL_NULL_CHECK(t, "tb/sa_transaction.sv", 43)->__PVT__weight_row 
        = this->__PVT__weight_row;
    VL_NULL_CHECK(t, "tb/sa_transaction.sv", 44)->__PVT__weight_data 
        = this->__PVT__weight_data;
    VL_NULL_CHECK(t, "tb/sa_transaction.sv", 45)->__PVT__act_in 
        = this->__PVT__act_in;
    VL_ASSIGN_W(256,VL_NULL_CHECK(t, "tb/sa_transaction.sv", 46)
                ->__PVT__psum_out, this->__PVT__psum_out);
    clone__Vfuncrtn = t;
}

void Vsa_tb___024unit__03a__03asa_transaction::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__weight_load = 0;
    __PVT__weight_row = 0;
    __PVT__weight_data = 0;
    __PVT__act_in = 0;
    VL_ZERO_W(256, __PVT__psum_out);
}
