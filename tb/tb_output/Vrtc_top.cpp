// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrtc_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrtc_top::Vrtc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrtc_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rstn_i{vlSymsp->TOP.rstn_i}
    , date_update_i{vlSymsp->TOP.date_update_i}
    , clock_update_i{vlSymsp->TOP.clock_update_i}
    , calibre_update_i{vlSymsp->TOP.calibre_update_i}
    , timer_update_i{vlSymsp->TOP.timer_update_i}
    , timer_enable_i{vlSymsp->TOP.timer_enable_i}
    , timer_retrig_i{vlSymsp->TOP.timer_retrig_i}
    , alarm_enable_i{vlSymsp->TOP.alarm_enable_i}
    , alarm_mask_i{vlSymsp->TOP.alarm_mask_i}
    , alarm_update_clock_i{vlSymsp->TOP.alarm_update_clock_i}
    , alarm_update_date_i{vlSymsp->TOP.alarm_update_date_i}
    , event_flag_update_i{vlSymsp->TOP.event_flag_update_i}
    , event_flag_i{vlSymsp->TOP.event_flag_i}
    , event_flag_o{vlSymsp->TOP.event_flag_o}
    , event_o{vlSymsp->TOP.event_o}
    , init_sec_cnt_i{vlSymsp->TOP.init_sec_cnt_i}
    , calibre_sec_cnt_i{vlSymsp->TOP.calibre_sec_cnt_i}
    , calibre_sec_cnt_o{vlSymsp->TOP.calibre_sec_cnt_o}
    , date_i{vlSymsp->TOP.date_i}
    , date_o{vlSymsp->TOP.date_o}
    , clock_o{vlSymsp->TOP.clock_o}
    , clock_i{vlSymsp->TOP.clock_i}
    , timer_target_i{vlSymsp->TOP.timer_target_i}
    , timer_value_o{vlSymsp->TOP.timer_value_o}
    , alarm_clock_i{vlSymsp->TOP.alarm_clock_i}
    , alarm_clock_o{vlSymsp->TOP.alarm_clock_o}
    , alarm_date_i{vlSymsp->TOP.alarm_date_i}
    , alarm_date_o{vlSymsp->TOP.alarm_date_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrtc_top::Vrtc_top(const char* _vcname__)
    : Vrtc_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrtc_top::~Vrtc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrtc_top___024root___eval_debug_assertions(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrtc_top___024root___eval_static(Vrtc_top___024root* vlSelf);
void Vrtc_top___024root___eval_initial(Vrtc_top___024root* vlSelf);
void Vrtc_top___024root___eval_settle(Vrtc_top___024root* vlSelf);
void Vrtc_top___024root___eval(Vrtc_top___024root* vlSelf);

void Vrtc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrtc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrtc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrtc_top___024root___eval_static(&(vlSymsp->TOP));
        Vrtc_top___024root___eval_initial(&(vlSymsp->TOP));
        Vrtc_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrtc_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrtc_top::eventsPending() { return false; }

uint64_t Vrtc_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrtc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrtc_top___024root___eval_final(Vrtc_top___024root* vlSelf);

VL_ATTR_COLD void Vrtc_top::final() {
    Vrtc_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrtc_top::hierName() const { return vlSymsp->name(); }
const char* Vrtc_top::modelName() const { return "Vrtc_top"; }
unsigned Vrtc_top::threads() const { return 1; }
void Vrtc_top::prepareClone() const { contextp()->prepareClone(); }
void Vrtc_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrtc_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrtc_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrtc_top___024root__trace_init_top(Vrtc_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrtc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrtc_top___024root*>(voidSelf);
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrtc_top___024root__trace_decl_types(tracep);
    Vrtc_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrtc_top___024root__trace_register(Vrtc_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrtc_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrtc_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrtc_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
