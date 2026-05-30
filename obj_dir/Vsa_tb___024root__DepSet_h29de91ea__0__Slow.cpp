// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb__Syms.h"
#include "Vsa_tb___024root.h"
#include "Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg.h"
#include "Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg.h"

VL_ATTR_COLD void Vsa_tb___024root___eval_static__TOP(Vsa_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsa_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsa_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk2__DOT__s 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_directed_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk3__DOT__s 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_allones_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk4__DOT__s 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_random_seq, vlSymsp, 5U);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__ds 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_directed_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__as 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_allones_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__rs 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_random_seq, vlSymsp, 0x14U);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__cs 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_corner_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk6__DOT__idle 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_base_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk7__DOT__idle 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_base_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk5__DOT__unnamedblk8__DOT__idle 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_base_seq, vlSymsp);
    vlSelf->sa_tb__DOT__run_test__Vstatic__unnamedblk9__DOT__s 
        = VL_NEW(Vsa_tb___024unit__03a__03asa_directed_seq, vlSymsp);
}
