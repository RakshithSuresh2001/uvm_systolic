// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"

void Vsa_tb___024root___ctor_var_reset(Vsa_tb___024root* vlSelf);

Vsa_tb___024root::Vsa_tb___024root(Vsa_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsa_tb___024root___ctor_var_reset(this);
}

void Vsa_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsa_tb___024root::~Vsa_tb___024root() {
}
