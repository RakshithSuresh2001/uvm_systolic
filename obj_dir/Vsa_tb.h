// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSA_TB_H_
#define VERILATED_VSA_TB_H_  // guard

#include "verilated.h"

class Vsa_tb__Syms;
class Vsa_tb___024root;
class Vsa_tb___024unit;
class Vsa_tb___024unit__03a__03asa_allones_seq;
class Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_base_seq;
class Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_corner_seq;
class Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_coverage;
class Vsa_tb___024unit__03a__03asa_coverage__Vclpkg;
class Vsa_tb___024unit__03a__03asa_directed_seq;
class Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_random_seq;
class Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg;
class Vsa_tb___024unit__03a__03asa_scoreboard;
#include "Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg.h"
class Vsa_tb___024unit__03a__03asa_transaction;
class Vsa_tb___024unit__03a__03asa_transaction__Vclpkg;
class Vsa_tb_std;
class Vsa_tb_std__03a__03amailbox__Tz1;
class Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg;
class Vsa_tb_std__03a__03amailbox__Tz2;
class Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg;
class Vsa_tb_std__03a__03aprocess__Vclpkg;
class Vsa_tb_std__03a__03asemaphore__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsa_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsa_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsa_tb___024unit* const __PVT____024unit;
    Vsa_tb_std* const __PVT__std;
    Vsa_tb___024unit__03a__03asa_transaction__Vclpkg* const __024unit__03a__03asa_transaction__Vclpkg;
    Vsa_tb___024unit__03a__03asa_scoreboard__Vclpkg* const __024unit__03a__03asa_scoreboard__Vclpkg;
    Vsa_tb___024unit__03a__03asa_coverage__Vclpkg* const __024unit__03a__03asa_coverage__Vclpkg;
    Vsa_tb___024unit__03a__03asa_base_seq__Vclpkg* const __024unit__03a__03asa_base_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_directed_seq__Vclpkg* const __024unit__03a__03asa_directed_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_allones_seq__Vclpkg* const __024unit__03a__03asa_allones_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_random_seq__Vclpkg* const __024unit__03a__03asa_random_seq__Vclpkg;
    Vsa_tb___024unit__03a__03asa_corner_seq__Vclpkg* const __024unit__03a__03asa_corner_seq__Vclpkg;
    Vsa_tb_std__03a__03asemaphore__Vclpkg* const std__03a__03asemaphore__Vclpkg;
    Vsa_tb_std__03a__03aprocess__Vclpkg* const std__03a__03aprocess__Vclpkg;
    Vsa_tb_std__03a__03amailbox__Tz1__Vclpkg* const std__03a__03amailbox__Tz1__Vclpkg;
    Vsa_tb_std__03a__03amailbox__Tz2__Vclpkg* const std__03a__03amailbox__Tz2__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsa_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsa_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsa_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsa_tb();
  private:
    VL_UNCOPYABLE(Vsa_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
