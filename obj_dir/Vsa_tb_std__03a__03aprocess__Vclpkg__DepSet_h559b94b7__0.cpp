// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb_std__03a__03aprocess__Vclpkg.h"

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_set_status(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body
    // $c statement at /usr/share/verilator/include/verilated_std.sv:139:10
    this->__PVT__m_process->state(s);
}

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_status(Vsa_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
    // $c function at /usr/share/verilator/include/verilated_std.sv:145:24
    this->__PVT__m_process->state()
    ;
}

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_kill(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_resume(Vsa_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_get_randstate(Vsa_tb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_SFORMATF_NX("%0d",32,VL_RANDOM_I()) ;
    this->__VnoInFunc_set_randstate(vlSymsp, s);
    get_randstate__Vfuncrtn = s;
}

void Vsa_tb_std__03a__03aprocess::__VnoInFunc_set_randstate(Vsa_tb__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body
    (void)VL_URANDOM_SEEDED_II(VL_ATOI_N(s, 10));
}

Vsa_tb_std__03a__03aprocess::~Vsa_tb_std__03a__03aprocess() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsa_tb_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return out;
}
