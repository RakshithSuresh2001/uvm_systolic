// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024ROOT_H_
#define VERILATED_VSA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsa_tb___024unit;
class Vsa_tb___024unit__03a__03asa_allones_seq;
class Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_coverage;
class Vsa_tb___024unit__03a__03asa_coverage__Vclpkg;
class Vsa_tb___024unit__03a__03asa_directed_seq;
class Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_random_seq;
class Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_scoreboard;
class Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg;
class Vsa_tb___024unit__03a__03asa_transaction;
class Vsa_tb___024unit__03a__03asa_transaction__Vclpkg;
class Vsa_tb_std;
class Vsa_tb_std__03a__03amailbox__Tz1;
class Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg;
class Vsa_tb_std__03a__03aprocess__Vclpkg;
class Vsa_tb_std__03a__03asemaphore__Vclpkg;


class Vsa_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsa_tb___024unit* __PVT____024unit;
    Vsa_tb_std* __PVT__std;
    Vsa_tb___024unit__03a__03asa_transaction__Vclpkg* __024unit__03a__03asa_transaction__Vclpkg;
    Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg* __024unit__03a__03asa_scoreboard__Vclpkg;
    Vsa_tb___024unit__03a__03asa_coverage__Vclpkg* __024unit__03a__03asa_coverage__Vclpkg;
    Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg* __024unit__03a__03asa_base_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg* __024unit__03a__03asa_directed_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg* __024unit__03a__03asa_allones_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg* __024unit__03a__03asa_random_seq__Vclpkg;
    Vsa_tb_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vsa_tb_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ sa_tb__DOT__clk;
        CData/*0:0*/ sa_tb__DOT__rst_n;
        CData/*0:0*/ sa_tb__DOT__weight_load;
        CData/*2:0*/ sa_tb__DOT__weight_row;
        QData/*63:0*/ sa_tb__DOT__weight_data;
        QData/*63:0*/ sa_tb__DOT__act_in;
        QData/*63:0*/ sa_tb__DOT__dut__DOT__act_s1;
        QData/*63:0*/ sa_tb__DOT__dut__DOT__act_s2;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
    };
    struct {
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__act_out;
        CData/*0:0*/ sa_tb__DOT__dut__DOT____Vcellinp__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__weight_load;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__act_out;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
    };
    struct {
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__DOT__weight_reg;
        CData/*7:0*/ sa_tb__DOT__dut__DOT__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__DOT__weight_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sa_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VlWide<8>/*255:0*/ sa_tb__DOT__psum_out;
        VlWide<72>/*2303:0*/ sa_tb__DOT__dut__DOT__psum_v;
        VlWide<8>/*255:0*/ sa_tb__DOT__dut__DOT__psum_s11;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__0__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__1__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__2__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__3__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__4__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__5__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
    };
    struct {
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__6__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__0__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__1__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__2__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__3__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__4__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__5__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__6__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ sa_tb__DOT__dut__DOT____Vcellout__gen_row__BRA__7__KET____DOT__gen_col__BRA__7__KET____DOT__u_pe__psum_out;
        IData/*31:0*/ __VactIterCount;
    };
    std::string sa_tb__DOT__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h31f193c6__0;
    VlTriggerScheduler __VtrigSched_h759c8f0b__0;
    VlDynamicTriggerScheduler __VdynSched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;
    VlClassRef<Vsa_tb___024unit__03a__03asa_scoreboard> sa_tb__DOT__sb;
    VlClassRef<Vsa_tb___024unit__03a__03asa_coverage> sa_tb__DOT__cov;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> sa_tb__DOT__driver_run__Vstatic__txn;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> sa_tb__DOT__monitor_run__Vstatic__txn;
    VlClassRef<Vsa_tb___024unit__03a__03asa_directed_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk1__DOT__s;
    VlClassRef<Vsa_tb___024unit__03a__03asa_allones_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk2__DOT__s;
    VlClassRef<Vsa_tb___024unit__03a__03asa_random_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk3__DOT__s;
    VlClassRef<Vsa_tb___024unit__03a__03asa_directed_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk4__DOT__ds;
    VlClassRef<Vsa_tb___024unit__03a__03asa_allones_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk4__DOT__as;
    VlClassRef<Vsa_tb___024unit__03a__03asa_random_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk4__DOT__rs;
    VlClassRef<Vsa_tb___024unit__03a__03asa_directed_seq> sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__s;
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> sa_tb__DOT__unnamedblk6__DOT__t;

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024root(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024root();
    VL_UNCOPYABLE(Vsa_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
