// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"

std::string VL_TO_STRING(const Vsa_tb_check_entry_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{arrival:" + VL_TO_STRING(obj.__PVT__arrival);
        out += ", col:" + VL_TO_STRING(obj.__PVT__col);
        out += ", exp:" + VL_TO_STRING(obj.__PVT__exp);
        out += "}";
    return out;
}

VlCoroutine Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_run(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn;
    while (1U) {
        co_await VL_NULL_CHECK(this->__PVT__mbx, "tb/sa_scoreboard.sv", 100)->__VnoInFunc_get(vlSymsp, txn);
    }
}

void Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_do_reset(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_do_reset\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_5__DOT__r;
    unnamedblk2_5__DOT__r = 0;
    IData/*31:0*/ unnamedblk2_5__DOT__unnamedblk2_6__DOT__c;
    unnamedblk2_5__DOT__unnamedblk2_6__DOT__c = 0;
    this->__PVT__ref_weights[7U][7U] = 0U;
    this->__PVT__ref_weights[7U][6U] = 0U;
    this->__PVT__ref_weights[7U][5U] = 0U;
    this->__PVT__ref_weights[7U][4U] = 0U;
    this->__PVT__ref_weights[7U][3U] = 0U;
    this->__PVT__ref_weights[7U][2U] = 0U;
    this->__PVT__ref_weights[7U][1U] = 0U;
    this->__PVT__ref_weights[7U][0U] = 0U;
    this->__PVT__ref_weights[6U][7U] = 0U;
    this->__PVT__ref_weights[6U][6U] = 0U;
    this->__PVT__ref_weights[6U][5U] = 0U;
    this->__PVT__ref_weights[6U][4U] = 0U;
    this->__PVT__ref_weights[6U][3U] = 0U;
    this->__PVT__ref_weights[6U][2U] = 0U;
    this->__PVT__ref_weights[6U][1U] = 0U;
    this->__PVT__ref_weights[6U][0U] = 0U;
    this->__PVT__ref_weights[5U][7U] = 0U;
    this->__PVT__ref_weights[5U][6U] = 0U;
    this->__PVT__ref_weights[5U][5U] = 0U;
    this->__PVT__ref_weights[5U][4U] = 0U;
    this->__PVT__ref_weights[5U][3U] = 0U;
    this->__PVT__ref_weights[5U][2U] = 0U;
    this->__PVT__ref_weights[5U][1U] = 0U;
    this->__PVT__ref_weights[5U][0U] = 0U;
    this->__PVT__ref_weights[4U][7U] = 0U;
    this->__PVT__ref_weights[4U][6U] = 0U;
    this->__PVT__ref_weights[4U][5U] = 0U;
    this->__PVT__ref_weights[4U][4U] = 0U;
    this->__PVT__ref_weights[4U][3U] = 0U;
    this->__PVT__ref_weights[4U][2U] = 0U;
    this->__PVT__ref_weights[4U][1U] = 0U;
    this->__PVT__ref_weights[4U][0U] = 0U;
    this->__PVT__ref_weights[3U][7U] = 0U;
    this->__PVT__ref_weights[3U][6U] = 0U;
    this->__PVT__ref_weights[3U][5U] = 0U;
    this->__PVT__ref_weights[3U][4U] = 0U;
    this->__PVT__ref_weights[3U][3U] = 0U;
    this->__PVT__ref_weights[3U][2U] = 0U;
    this->__PVT__ref_weights[3U][1U] = 0U;
    this->__PVT__ref_weights[3U][0U] = 0U;
    this->__PVT__ref_weights[2U][7U] = 0U;
    this->__PVT__ref_weights[2U][6U] = 0U;
    this->__PVT__ref_weights[2U][5U] = 0U;
    this->__PVT__ref_weights[2U][4U] = 0U;
    this->__PVT__ref_weights[2U][3U] = 0U;
    this->__PVT__ref_weights[2U][2U] = 0U;
    this->__PVT__ref_weights[2U][1U] = 0U;
    this->__PVT__ref_weights[2U][0U] = 0U;
    this->__PVT__ref_weights[1U][7U] = 0U;
    this->__PVT__ref_weights[1U][6U] = 0U;
    this->__PVT__ref_weights[1U][5U] = 0U;
    this->__PVT__ref_weights[1U][4U] = 0U;
    this->__PVT__ref_weights[1U][3U] = 0U;
    this->__PVT__ref_weights[1U][2U] = 0U;
    this->__PVT__ref_weights[1U][1U] = 0U;
    this->__PVT__ref_weights[1U][0U] = 0U;
    this->__PVT__ref_weights[0U][7U] = 0U;
    this->__PVT__ref_weights[0U][6U] = 0U;
    this->__PVT__ref_weights[0U][5U] = 0U;
    this->__PVT__ref_weights[0U][4U] = 0U;
    this->__PVT__ref_weights[0U][3U] = 0U;
    this->__PVT__ref_weights[0U][2U] = 0U;
    this->__PVT__ref_weights[0U][1U] = 0U;
    this->__PVT__ref_weights[0U][0U] = 0U;
    unnamedblk2_5__DOT__unnamedblk2_6__DOT__c = 0xffffffffU;
    unnamedblk2_5__DOT__r = 0xffffffffU;
    this->__PVT__cq.clear();
    this->__PVT__last_wload_cycle = 0xffffffecU;
}

void Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::__VnoInFunc_report\n"); );
    // Body
    VL_WRITEF("\n=== Scoreboard Report ===\n  Cycles  : %0#\n  Checks  : %0#\n  PASS    : %0#\n  FAIL    : %0#\n",
              32,this->__PVT__cycle_count,32,this->__PVT__checks_done,
              32,this->__PVT__pass_count,32,this->__PVT__fail_count);
    if ((0U == this->__PVT__fail_count)) {
        VL_WRITEF("  RESULT  : TEST PASSED\n");
    } else {
        VL_WRITEF("  RESULT  : TEST FAILED\n");
    }
    VL_WRITEF("=========================\n\n");
}

Vsa_tb___024unit__03a__03asa_scoreboard::~Vsa_tb___024unit__03a__03asa_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_scoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    out += ", ref_weights:" + VL_TO_STRING(__PVT__ref_weights);
    out += ", cq:" + VL_TO_STRING(__PVT__cq);
    out += ", last_wload_cycle:" + VL_TO_STRING(__PVT__last_wload_cycle);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", cycle_count:" + VL_TO_STRING(__PVT__cycle_count);
    out += ", checks_done:" + VL_TO_STRING(__PVT__checks_done);
    return out;
}
