// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsa_tb.h for the primary calling header

#ifndef VERILATED_VSA_TB___024UNIT__03A__03ASA_SCOREBOARD__VCLPKG_H_
#define VERILATED_VSA_TB___024UNIT__03A__03ASA_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
class Vsa_tb___024unit__03a__03asa_transaction;
class Vsa_tb_std__03a__03amailbox__Tz1;


class Vsa_tb__Syms;

// UNPACKED STRUCT TYPES
struct Vsa_tb_check_entry_t__struct__0 {
    IData/*31:0*/ __PVT__arrival;
    IData/*31:0*/ __PVT__col;
    IData/*31:0*/ __PVT__exp;

    bool operator==(const Vsa_tb_check_entry_t__struct__0& rhs) const {
        return __PVT__arrival == rhs.__PVT__arrival
            && __PVT__col == rhs.__PVT__col
            && __PVT__exp == rhs.__PVT__exp;
    }
    bool operator!=(const Vsa_tb_check_entry_t__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsa_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg(Vsa_tb__Syms* symsp, const char* v__name);
    ~Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg();
    VL_UNCOPYABLE(Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsa_tb_check_entry_t__struct__0& obj);

class Vsa_tb__Syms;

class Vsa_tb___024unit__03a__03asa_scoreboard : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__last_wload_cycle;
    IData/*31:0*/ __PVT__pass_count;
    IData/*31:0*/ __PVT__fail_count;
    IData/*31:0*/ __PVT__cycle_count;
    IData/*31:0*/ __PVT__checks_done;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> __PVT__ref_weights;
    VlQueue<Vsa_tb_check_entry_t__struct__0> __PVT__cq;
    VlClassRef<Vsa_tb_std__03a__03amailbox__Tz1> __PVT__mbx;
    void __VnoInFunc_check_direct(Vsa_tb__Syms* __restrict vlSymsp, VlClassRef<Vsa_tb___024unit__03a__03asa_transaction> txn, VlWide<8>/*255:0*/ psum);
    void __VnoInFunc_do_reset(Vsa_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_report(Vsa_tb__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(Vsa_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vsa_tb__Syms* __restrict vlSymsp);
  public:
    Vsa_tb___024unit__03a__03asa_scoreboard(Vsa_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vsa_tb___024unit__03a__03asa_scoreboard();
};

std::string VL_TO_STRING(const VlClassRef<Vsa_tb___024unit__03a__03asa_scoreboard>& obj);

#endif  // guard
