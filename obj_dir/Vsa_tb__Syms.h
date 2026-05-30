// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSA_TB__SYMS_H_
#define VERILATED_VSA_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsa_tb.h"

// INCLUDE MODULE CLASSES
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit.h"
#include "Vsa_tb_std.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg.h"
#include "Vsa_tb_std__03a__03asemaphore__Vclpkg.h"
#include "Vsa_tb_std__03a__03aprocess__Vclpkg.h"
#include "Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsa_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsa_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsa_tb___024root               TOP;
    Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg TOP____024unit__03a__03asa_allones_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg TOP____024unit__03a__03asa_base_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg TOP____024unit__03a__03asa_corner_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_coverage__Vclpkg TOP____024unit__03a__03asa_coverage__Vclpkg;
    Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg TOP____024unit__03a__03asa_directed_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg TOP____024unit__03a__03asa_random_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg TOP____024unit__03a__03asa_scoreboard__Vclpkg;
    Vsa_tb___024unit__03a__03asa_transaction__Vclpkg TOP____024unit__03a__03asa_transaction__Vclpkg;
    Vsa_tb___024unit               TOP____024unit;
    Vsa_tb_std                     TOP__std;
    Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg TOP__std__03a__03amailbox__Tz2__Vclpkg;
    Vsa_tb_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vsa_tb_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_std__process;
    VerilatedScope __Vscope_std__process__suspend;

    // CONSTRUCTORS
    Vsa_tb__Syms(VerilatedContext* contextp, const char* namep, Vsa_tb* modelp);
    ~Vsa_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
