// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_coverage__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::__VnoInFunc_report\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_3__DOT__r;
    unnamedblk2_3__DOT__r = 0;
    IData/*31:0*/ rows_hit;
    rows_hit = 0;
    double row_cov;
    row_cov = 0;
    double act_cov;
    act_cov = 0;
    rows_hit = 0U;
    VL_WRITEF("\n=== Coverage Report ===\n  Weight Row Coverage:\n    row[0]: %0# loads %s\n",
              32,this->__PVT__rows_loaded[0U],32,((0U 
                                                   < 
                                                   this->__PVT__rows_loaded
                                                   [0U])
                                                   ? 0x484954U
                                                   : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[0U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[1]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [1U],32,((0U < this->__PVT__rows_loaded
                        [1U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[1U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[2]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [2U],32,((0U < this->__PVT__rows_loaded
                        [2U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[2U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[3]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [3U],32,((0U < this->__PVT__rows_loaded
                        [3U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[3U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[4]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [4U],32,((0U < this->__PVT__rows_loaded
                        [4U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[4U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[5]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [5U],32,((0U < this->__PVT__rows_loaded
                        [5U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[5U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[6]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [6U],32,((0U < this->__PVT__rows_loaded
                        [6U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[6U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    VL_WRITEF("    row[7]: %0# loads %s\n",32,this->__PVT__rows_loaded
              [7U],32,((0U < this->__PVT__rows_loaded
                        [7U]) ? 0x484954U : 0x4d495353U));
    if ((0U < this->__PVT__rows_loaded[7U])) {
        rows_hit = ((IData)(1U) + rows_hit);
    }
    unnamedblk2_3__DOT__r = 8U;
    row_cov = (100.0 * (VL_ISTOR_D_I(32, rows_hit) 
                        / 8.0));
    VL_WRITEF("  Row coverage: %0d/8 (%.1f%%)\n  Activation Patterns:\n    All-zero  : %0# cycles\n    All-max   : %0# cycles\n    Mixed     : %0# cycles\n  Total cycles    : %0#\n  Weight loads    : %0#\n=======================\n\n",
              32,rows_hit,64,row_cov,32,this->__PVT__act_zero_count,
              32,this->__PVT__act_max_count,32,this->__PVT__act_mixed_count,
              32,this->__PVT__total_cycles,32,this->__PVT__weight_load_count);
}

Vsa_tb___024unit__03a__03asa_coverage::~Vsa_tb___024unit__03a__03asa_coverage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_coverage>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_coverage::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_coverage::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_coverage::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rows_loaded:" + VL_TO_STRING(__PVT__rows_loaded);
    out += ", act_zero_count:" + VL_TO_STRING(__PVT__act_zero_count);
    out += ", act_max_count:" + VL_TO_STRING(__PVT__act_max_count);
    out += ", act_mixed_count:" + VL_TO_STRING(__PVT__act_mixed_count);
    out += ", weight_load_count:" + VL_TO_STRING(__PVT__weight_load_count);
    out += ", total_cycles:" + VL_TO_STRING(__PVT__total_cycles);
    return out;
}
