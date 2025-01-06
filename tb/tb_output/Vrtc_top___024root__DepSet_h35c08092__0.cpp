// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtc_top.h for the primary calling header

#include "Vrtc_top__pch.h"
#include "Vrtc_top___024root.h"

void Vrtc_top___024root___ico_sequent__TOP__0(Vrtc_top___024root* vlSelf);

void Vrtc_top___024root___eval_ico(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vrtc_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vrtc_top___024root___eval_triggers__ico(Vrtc_top___024root* vlSelf);

bool Vrtc_top___024root___eval_phase__ico(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrtc_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vrtc_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrtc_top___024root___eval_act(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vrtc_top___024root___nba_sequent__TOP__0(Vrtc_top___024root* vlSelf);

void Vrtc_top___024root___eval_nba(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrtc_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vrtc_top___024root___eval_triggers__act(Vrtc_top___024root* vlSelf);

bool Vrtc_top___024root___eval_phase__act(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrtc_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrtc_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrtc_top___024root___eval_phase__nba(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrtc_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__ico(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__nba(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__act(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtc_top___024root___eval(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vrtc_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtc/rtl/rtc_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vrtc_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vrtc_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtc/rtl/rtc_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vrtc_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtc/rtl/rtc_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrtc_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrtc_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrtc_top___024root___eval_debug_assertions(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelfRef.rstn_i & 0xfeU))) {
        Verilated::overWidthError("rstn_i");}
    if (VL_UNLIKELY((vlSelfRef.date_update_i & 0xfeU))) {
        Verilated::overWidthError("date_update_i");}
    if (VL_UNLIKELY((vlSelfRef.clock_update_i & 0xfeU))) {
        Verilated::overWidthError("clock_update_i");}
    if (VL_UNLIKELY((vlSelfRef.clock_i & 0xffc00000U))) {
        Verilated::overWidthError("clock_i");}
    if (VL_UNLIKELY((vlSelfRef.init_sec_cnt_i & 0xfc00U))) {
        Verilated::overWidthError("init_sec_cnt_i");}
    if (VL_UNLIKELY((vlSelfRef.calibre_update_i & 0xfeU))) {
        Verilated::overWidthError("calibre_update_i");}
    if (VL_UNLIKELY((vlSelfRef.timer_update_i & 0xfeU))) {
        Verilated::overWidthError("timer_update_i");}
    if (VL_UNLIKELY((vlSelfRef.timer_enable_i & 0xfeU))) {
        Verilated::overWidthError("timer_enable_i");}
    if (VL_UNLIKELY((vlSelfRef.timer_retrig_i & 0xfeU))) {
        Verilated::overWidthError("timer_retrig_i");}
    if (VL_UNLIKELY((vlSelfRef.timer_target_i & 0xfffe0000U))) {
        Verilated::overWidthError("timer_target_i");}
    if (VL_UNLIKELY((vlSelfRef.alarm_enable_i & 0xfeU))) {
        Verilated::overWidthError("alarm_enable_i");}
    if (VL_UNLIKELY((vlSelfRef.alarm_mask_i & 0xc0U))) {
        Verilated::overWidthError("alarm_mask_i");}
    if (VL_UNLIKELY((vlSelfRef.alarm_update_clock_i 
                     & 0xfeU))) {
        Verilated::overWidthError("alarm_update_clock_i");}
    if (VL_UNLIKELY((vlSelfRef.alarm_clock_i & 0xffc00000U))) {
        Verilated::overWidthError("alarm_clock_i");}
    if (VL_UNLIKELY((vlSelfRef.alarm_update_date_i 
                     & 0xfeU))) {
        Verilated::overWidthError("alarm_update_date_i");}
    if (VL_UNLIKELY((vlSelfRef.event_flag_update_i 
                     & 0xfeU))) {
        Verilated::overWidthError("event_flag_update_i");}
    if (VL_UNLIKELY((vlSelfRef.event_flag_i & 0xfcU))) {
        Verilated::overWidthError("event_flag_i");}
}
#endif  // VL_DEBUG
