// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB_STD_H_
#define VERILATED_VSA_TB_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb_std(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb_std();
    VL_UNCOPYABLE(Vsa_tb_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
