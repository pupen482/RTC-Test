// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRTC_TOP_H_
#define VERILATED_VRTC_TOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vrtc_top__Syms;
class Vrtc_top___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vrtc_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vrtc_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rstn_i,0,0);
    VL_IN8(&date_update_i,0,0);
    VL_IN8(&clock_update_i,0,0);
    VL_IN8(&calibre_update_i,0,0);
    VL_IN8(&timer_update_i,0,0);
    VL_IN8(&timer_enable_i,0,0);
    VL_IN8(&timer_retrig_i,0,0);
    VL_IN8(&alarm_enable_i,0,0);
    VL_IN8(&alarm_mask_i,5,0);
    VL_IN8(&alarm_update_clock_i,0,0);
    VL_IN8(&alarm_update_date_i,0,0);
    VL_IN8(&event_flag_update_i,0,0);
    VL_IN8(&event_flag_i,1,0);
    VL_OUT8(&event_flag_o,1,0);
    VL_OUT8(&event_o,0,0);
    VL_IN16(&init_sec_cnt_i,9,0);
    VL_IN16(&calibre_sec_cnt_i,15,0);
    VL_OUT16(&calibre_sec_cnt_o,15,0);
    VL_IN(&date_i,31,0);
    VL_OUT(&date_o,31,0);
    VL_OUT(&clock_o,21,0);
    VL_IN(&clock_i,21,0);
    VL_IN(&timer_target_i,16,0);
    VL_OUT(&timer_value_o,16,0);
    VL_IN(&alarm_clock_i,21,0);
    VL_OUT(&alarm_clock_o,21,0);
    VL_IN(&alarm_date_i,31,0);
    VL_OUT(&alarm_date_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vrtc_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vrtc_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vrtc_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vrtc_top();
  private:
    VL_UNCOPYABLE(Vrtc_top);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
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
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
