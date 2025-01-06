// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtc_top.h for the primary calling header

#include "Vrtc_top__pch.h"
#include "Vrtc_top___024root.h"

VL_ATTR_COLD void Vrtc_top___024root___eval_static(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrtc_top___024root___eval_initial(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rstn_i__0 = vlSelfRef.rstn_i;
}

VL_ATTR_COLD void Vrtc_top___024root___eval_final(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__stl(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrtc_top___024root___eval_phase__stl(Vrtc_top___024root* vlSelf);

VL_ATTR_COLD void Vrtc_top___024root___eval_settle(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vrtc_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtc/rtl/rtc_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrtc_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__stl(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtc_top___024root___stl_sequent__TOP__0(Vrtc_top___024root* vlSelf);
VL_ATTR_COLD void Vrtc_top___024root____Vm_traceActivitySetAll(Vrtc_top___024root* vlSelf);

VL_ATTR_COLD void Vrtc_top___024root___eval_stl(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vrtc_top___024root___stl_sequent__TOP__0(vlSelf);
        Vrtc_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vrtc_top___024root___eval_triggers__stl(Vrtc_top___024root* vlSelf);

VL_ATTR_COLD bool Vrtc_top___024root___eval_phase__stl(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrtc_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrtc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__ico(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__act(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rstn_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__nba(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rstn_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtc_top___024root____Vm_traceActivitySetAll(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vrtc_top___024root___ctor_var_reset(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rstn_i = VL_RAND_RESET_I(1);
    vlSelf->date_update_i = VL_RAND_RESET_I(1);
    vlSelf->date_i = VL_RAND_RESET_I(32);
    vlSelf->date_o = VL_RAND_RESET_I(32);
    vlSelf->clock_update_i = VL_RAND_RESET_I(1);
    vlSelf->clock_o = VL_RAND_RESET_I(22);
    vlSelf->clock_i = VL_RAND_RESET_I(22);
    vlSelf->init_sec_cnt_i = VL_RAND_RESET_I(10);
    vlSelf->calibre_update_i = VL_RAND_RESET_I(1);
    vlSelf->calibre_sec_cnt_i = VL_RAND_RESET_I(16);
    vlSelf->calibre_sec_cnt_o = VL_RAND_RESET_I(16);
    vlSelf->timer_update_i = VL_RAND_RESET_I(1);
    vlSelf->timer_enable_i = VL_RAND_RESET_I(1);
    vlSelf->timer_retrig_i = VL_RAND_RESET_I(1);
    vlSelf->timer_target_i = VL_RAND_RESET_I(17);
    vlSelf->timer_value_o = VL_RAND_RESET_I(17);
    vlSelf->alarm_enable_i = VL_RAND_RESET_I(1);
    vlSelf->alarm_mask_i = VL_RAND_RESET_I(6);
    vlSelf->alarm_update_clock_i = VL_RAND_RESET_I(1);
    vlSelf->alarm_clock_i = VL_RAND_RESET_I(22);
    vlSelf->alarm_clock_o = VL_RAND_RESET_I(22);
    vlSelf->alarm_update_date_i = VL_RAND_RESET_I(1);
    vlSelf->alarm_date_i = VL_RAND_RESET_I(32);
    vlSelf->alarm_date_o = VL_RAND_RESET_I(32);
    vlSelf->event_flag_update_i = VL_RAND_RESET_I(1);
    vlSelf->event_flag_i = VL_RAND_RESET_I(2);
    vlSelf->event_flag_o = VL_RAND_RESET_I(2);
    vlSelf->event_o = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__s_rtc_update_day = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__rstn_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__date_update_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__date_i = VL_RAND_RESET_I(32);
    vlSelf->rtc_top__DOT____Vtogcov__date_o = VL_RAND_RESET_I(32);
    vlSelf->rtc_top__DOT____Vtogcov__clock_update_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__clock_o = VL_RAND_RESET_I(22);
    vlSelf->rtc_top__DOT____Vtogcov__clock_i = VL_RAND_RESET_I(22);
    vlSelf->rtc_top__DOT____Vtogcov__init_sec_cnt_i = VL_RAND_RESET_I(10);
    vlSelf->rtc_top__DOT____Vtogcov__calibre_update_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__calibre_sec_cnt_i = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT____Vtogcov__calibre_sec_cnt_o = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT____Vtogcov__timer_update_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__timer_enable_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__timer_retrig_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__timer_target_i = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT____Vtogcov__timer_value_o = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_enable_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_mask_i = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_update_clock_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_clock_i = VL_RAND_RESET_I(22);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_clock_o = VL_RAND_RESET_I(22);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_update_date_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_date_i = VL_RAND_RESET_I(32);
    vlSelf->rtc_top__DOT____Vtogcov__alarm_date_o = VL_RAND_RESET_I(32);
    vlSelf->rtc_top__DOT____Vtogcov__event_flag_update_i = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__event_flag_i = VL_RAND_RESET_I(2);
    vlSelf->rtc_top__DOT____Vtogcov__event_flag_o = VL_RAND_RESET_I(2);
    vlSelf->rtc_top__DOT____Vtogcov__event_o = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT____Vtogcov__s_rtc_update_day = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_seconds = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_minutes = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_hours = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year = VL_RAND_RESET_I(14);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month = VL_RAND_RESET_I(5);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_update_hours = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_timer_event = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_timer_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_year = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_month = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_day = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_hours = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_timer = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_timer_target = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_timer_en = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT__r_event_flag = VL_RAND_RESET_I(2);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes = VL_RAND_RESET_I(8);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year = VL_RAND_RESET_I(14);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month = VL_RAND_RESET_I(5);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year = VL_RAND_RESET_I(14);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month = VL_RAND_RESET_I(5);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre = VL_RAND_RESET_I(16);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_month = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_day = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target = VL_RAND_RESET_I(17);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag = VL_RAND_RESET_I(2);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__r_day = VL_RAND_RESET_I(6);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__r_month = VL_RAND_RESET_I(5);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__r_year = VL_RAND_RESET_I(14);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__s_end_of_year = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__s_year_400 = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__s_year_leap = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT__s_year_div_4 = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_400 = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_leap = VL_RAND_RESET_I(1);
    vlSelf->rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_div_4 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rstn_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
