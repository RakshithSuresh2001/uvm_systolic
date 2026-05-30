// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg.h"

VlCoroutine Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_activation_bb(Vsa_tb__Syms* __restrict vlSymsp, VlUnpacked<CData/*7:0*/, 8> acts0, VlUnpacked<CData/*7:0*/, 8> acts1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_send_activation_bb\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await this->__VnoInFunc_send_activation(vlSymsp, acts0);
    co_await this->__VnoInFunc_send_activation(vlSymsp, acts1);
}

void Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_rand_binned(Vsa_tb__Syms* __restrict vlSymsp, CData/*7:0*/ &rand_binned__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::__VnoInFunc_rand_binned\n"); );
    // Body
    IData/*31:0*/ bin;
    bin = 0;
    {
        bin = VL_URANDOM_RANGE_I(0U, 4U);
        if ((0U == bin)) {
            rand_binned__Vfuncrtn = 0U;
            goto __Vlabel1;
        } else if ((1U == bin)) {
            rand_binned__Vfuncrtn = (0xffU & VL_URANDOM_RANGE_I(1U, 0x3fU));
            goto __Vlabel1;
        } else if ((2U == bin)) {
            rand_binned__Vfuncrtn = (0xffU & VL_URANDOM_RANGE_I(0x40U, 0xbfU));
            goto __Vlabel1;
        } else if ((3U == bin)) {
            rand_binned__Vfuncrtn = (0xffU & VL_URANDOM_RANGE_I(0xc0U, 0xfeU));
            goto __Vlabel1;
        } else if ((4U == bin)) {
            rand_binned__Vfuncrtn = 0xffU;
            goto __Vlabel1;
        }
        rand_binned__Vfuncrtn = 0U;
        __Vlabel1: ;
    }
}

Vsa_tb___024unit__03a__03asa_base_seq::~Vsa_tb___024unit__03a__03asa_base_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_base_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_base_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_base_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_base_seq::to_string_middle\n"); );
    // Body
    std::string out;
    return out;
}
