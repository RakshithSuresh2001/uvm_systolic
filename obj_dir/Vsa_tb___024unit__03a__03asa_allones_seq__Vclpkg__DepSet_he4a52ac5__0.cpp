// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsa_tb.h for the primary calling header

#include "Vsa_tb__pch.h"
#include "Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg.h"

Vsa_tb___024unit__03a__03asa_allones_seq::~Vsa_tb___024unit__03a__03asa_allones_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_allones_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_allones_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_allones_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vsa_tb___024unit__03a__03asa_allones_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_allones_seq::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vsa_tb___024unit__03a__03asa_allones_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsa_tb___024unit__03a__03asa_allones_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vsa_tb___024unit__03a__03asa_base_seq::to_string_middle();
    return out;
}
