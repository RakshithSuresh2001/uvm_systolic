// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsa_tb__pch.h"

//============================================================
// Constructors

Vsa_tb::Vsa_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsa_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __024unit__03a__03asa_transaction__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_transaction__Vclpkg}
    , __024unit__03a__03asa_scoreboard__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_scoreboard__Vclpkg}
    , __024unit__03a__03asa_coverage__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_coverage__Vclpkg}
    , __024unit__03a__03asa_base_seq__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_base_seq__Vclpkg}
    , __024unit__03a__03asa_directed_seq__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_directed_seq__Vclpkg}
    , __024unit__03a__03asa_allones_seq__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_allones_seq__Vclpkg}
    , __024unit__03a__03asa_random_seq__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_random_seq__Vclpkg}
    , __024unit__03a__03asa_corner_seq__Vclpkg{vlSymsp->TOP.__024unit__03a__03asa_corner_seq__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , std__03a__03amailbox__Tz2__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz2__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsa_tb::Vsa_tb(const char* _vcname__)
    : Vsa_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsa_tb::~Vsa_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsa_tb___024root___eval_debug_assertions(Vsa_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsa_tb___024root___eval_static(Vsa_tb___024root* vlSelf);
void Vsa_tb___024root___eval_initial(Vsa_tb___024root* vlSelf);
void Vsa_tb___024root___eval_settle(Vsa_tb___024root* vlSelf);
void Vsa_tb___024root___eval(Vsa_tb___024root* vlSelf);

void Vsa_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsa_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsa_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsa_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsa_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsa_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsa_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsa_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsa_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsa_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsa_tb___024root___eval_final(Vsa_tb___024root* vlSelf);

VL_ATTR_COLD void Vsa_tb::final() {
    Vsa_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsa_tb::hierName() const { return vlSymsp->name(); }
const char* Vsa_tb::modelName() const { return "Vsa_tb"; }
unsigned Vsa_tb::threads() const { return 1; }
void Vsa_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsa_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vsa_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsa_tb::trace()' called on model that was Verilated without --trace option");
}
