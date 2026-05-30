// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT__03A__03ASA_RANDOM_SEQ__VCLPKG_H_
#define VERILATED_VSA_TB___024UNIT__03A__03ASA_RANDOM_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb___024unit__03a__03asa_base_seq;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"

class Vsa_tb__Syms;

class Vsa_tb___024unit__03a__03asa_random_seq : public Vsa_tb___024unit__03a__03asa_base_seq {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__num_vectors;
    VlCoroutine __VnoInFunc_run(Vsa_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb___024unit__03a__03asa_random_seq(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ n);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vsa_tb___024unit__03a__03asa_random_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_random_seq>& obj);

#endif  // guard
