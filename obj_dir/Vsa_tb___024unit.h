// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT_H_
#define VERILATED_VSA_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb_std__03a__03amailbox__Tz1;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vsa_tb_std__03a__03amailbox__Tz1> g_drv_mbx;
    VlClassRef<Vsa_tb_std__03a__03amailbox__Tz1> g_mon_mbx;

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit();
    VL_UNCOPYABLE(Vsa_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
