// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_transaction__Vclpkg.h"

void Vsa_tb___024unit__03a__03asa_transaction::__VnoInFunc_to_string(Vsa_tb__Syms* __restrict vlSymsp, std::string &to_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::__VnoInFunc_to_string\n"); );
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    std::string s;
    s = VL_SFORMATF_NX("wload=%0b row=%0# | act=[",
                       1,this->__PVT__weight_load,3,
                       (IData)(this->__PVT__weight_row)) ;
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x38U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x30U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x28U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x20U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x18U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 0x10U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(
                                                             (this->__PVT__act_in 
                                                              >> 8U)))) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",8,(0xffU 
                                                   & (IData)(this->__PVT__act_in))) );
    unnamedblk2_1__DOT__i = 0xffffffffU;
    s = VL_CONCATN_NNN(s, std::string{"] | psum=["});
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[7U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[6U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[5U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[4U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[3U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[2U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[1U]) );
    s = VL_CONCATN_NNN(s, VL_SFORMATF_NX("%0# ",32,
                                         this->__PVT__psum_out[0U]) );
    unnamedblk2_2__DOT__i = 0xffffffffU;
    s = VL_CONCATN_NNN(s, std::string{"]"});
    to_string__Vfuncrtn = s;
}

Vsa_tb___024unit__03a__03asa_transaction::~Vsa_tb___024unit__03a__03asa_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_transaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_transaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_transaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_transaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "weight_load:" + VL_TO_STRING(__PVT__weight_load);
    out += ", weight_row:" + VL_TO_STRING(__PVT__weight_row);
    out += ", weight_data:" + VL_TO_STRING(__PVT__weight_data);
    out += ", act_in:" + VL_TO_STRING(__PVT__act_in);
    out += ", psum_out:" + VL_TO_STRING(__PVT__psum_out);
    return out;
}
