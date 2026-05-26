// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb_std__03a__03aprocess__Vclpkg.h"

void Vsa_tb_std__03a__03aprocess__Vclpkg___ctor_var_reset(Vsa_tb_std__03a__03aprocess__Vclpkg* vlSelf);

Vsa_tb_std__03a__03aprocess__Vclpkg::Vsa_tb_std__03a__03aprocess__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsa_tb_std__03a__03aprocess__Vclpkg___ctor_var_reset(this);
}

void Vsa_tb_std__03a__03aprocess__Vclpkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsa_tb_std__03a__03aprocess__Vclpkg::~Vsa_tb_std__03a__03aprocess__Vclpkg() {
}
