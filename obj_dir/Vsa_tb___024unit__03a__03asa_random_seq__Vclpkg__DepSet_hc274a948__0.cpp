// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg.h"

Vsa_tb___024unit__03a__03asa_random_seq::Vsa_tb___024unit__03a__03asa_random_seq(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ n): Vsa_tb___024unit__03a__03asa_base_seq(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_random_seq::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    ;
    this->__PVT__num_vectors = n;
}

void Vsa_tb___024unit__03a__03asa_random_seq::_ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_random_seq::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__num_vectors = 0;
}
