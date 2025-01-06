// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtc_top.h for the primary calling header

#include "Vrtc_top__pch.h"
#include "Vrtc_top__Syms.h"
#include "Vrtc_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__stl(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtc_top___024root___eval_triggers__stl(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtc_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vrtc_top___024root___stl_sequent__TOP__0(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clk_i = vlSelfRef.clk_i;
    }
    if (((IData)(vlSelfRef.rstn_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__rstn_i))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.rtc_top__DOT____Vtogcov__rstn_i = vlSelfRef.rstn_i;
    }
    if (((IData)(vlSelfRef.date_update_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__date_update_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_update_i 
            = vlSelfRef.date_update_i;
    }
    if (((IData)(vlSelfRef.clock_update_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__clock_update_i))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_update_i 
            = vlSelfRef.clock_update_i;
    }
    if (((IData)(vlSelfRef.calibre_update_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_update_i))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_update_i 
            = vlSelfRef.calibre_update_i;
    }
    if (((IData)(vlSelfRef.timer_update_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__timer_update_i))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_update_i 
            = vlSelfRef.timer_update_i;
    }
    if (((IData)(vlSelfRef.timer_enable_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__timer_enable_i))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_enable_i 
            = vlSelfRef.timer_enable_i;
    }
    if (((IData)(vlSelfRef.timer_retrig_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__timer_retrig_i))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_retrig_i 
            = vlSelfRef.timer_retrig_i;
    }
    if (((IData)(vlSelfRef.alarm_enable_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_enable_i))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_enable_i 
            = vlSelfRef.alarm_enable_i;
    }
    if (((IData)(vlSelfRef.alarm_update_clock_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_update_clock_i))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_update_clock_i 
            = vlSelfRef.alarm_update_clock_i;
    }
    if (((IData)(vlSelfRef.alarm_update_date_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_update_date_i))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_update_date_i 
            = vlSelfRef.alarm_update_date_i;
    }
    if (((IData)(vlSelfRef.event_flag_update_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_update_i))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_update_i 
            = vlSelfRef.event_flag_update_i;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
    }
    if (((0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century 
            = (0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((1U & ((IData)(vlSelfRef.event_flag_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i 
            = ((2U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i)) 
               | (1U & (IData)(vlSelfRef.event_flag_i)));
    }
    if ((2U & ((IData)(vlSelfRef.event_flag_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i 
            = ((1U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_i)) 
               | (2U & (IData)(vlSelfRef.event_flag_i)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag)))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag 
            = ((2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag)))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag 
            = ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month 
            = ((0x1eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month 
            = ((0x1dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month 
            = ((0x1bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month 
            = ((0x17U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month 
            = ((0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month 
            = ((0x1eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month 
            = ((0x1dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month 
            = ((0x1bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month 
            = ((0x17U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month 
            = ((0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    }
    if ((1U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (1U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((2U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (2U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((4U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (4U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((8U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (8U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (0x10U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.alarm_mask_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__alarm_mask_i)) 
               | (0x20U & (IData)(vlSelfRef.alarm_mask_i)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x3eU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x3dU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x3bU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x37U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x2fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day 
            = ((0x1fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xfeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xfdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xfbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xf7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0xbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds 
            = ((0x7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xfeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xfdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xfbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xf7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0xbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes 
            = ((0x7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xfeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xfdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xfbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xf7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0xbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds 
            = ((0x7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xfeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xfdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xfbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xf7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0xbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes 
            = ((0x7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes)));
    }
    vlSelfRef.event_flag_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag;
    if ((1U & ((IData)(vlSelfRef.init_sec_cnt_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3feU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (1U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((2U & ((IData)(vlSelfRef.init_sec_cnt_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3fdU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (2U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((4U & ((IData)(vlSelfRef.init_sec_cnt_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3fbU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (4U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((8U & ((IData)(vlSelfRef.init_sec_cnt_i) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3f7U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (8U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3efU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x10U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3dfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x20U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x3bfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x40U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x37fU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x80U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x100U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x2ffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x100U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((0x200U & ((IData)(vlSelfRef.init_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i 
            = ((0x1ffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__init_sec_cnt_i)) 
               | (0x200U & (IData)(vlSelfRef.init_sec_cnt_i)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3ffeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3ffdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3ffbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3ff7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3fefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3fdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3fbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3f7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x100U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3effU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x100U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x200U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3dffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x200U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x400U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x3bffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x400U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x800U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x37ffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x800U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x2fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x1000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year 
            = ((0x1fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year)) 
               | (0x2000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3ffeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3ffdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3ffbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3ff7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3fefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3fdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3fbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3f7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x100U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3effU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x100U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x200U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3dffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x200U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x400U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x3bffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x400U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x800U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x37ffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x800U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x2fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x1000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year 
            = ((0x1fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year)) 
               | (0x2000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
    }
    if ((1U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfffeU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (1U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((2U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfffdU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (2U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((4U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfffbU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (4U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((8U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfff7U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (8U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x10U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xffefU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x10U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x20U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xffdfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x20U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x40U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xffbfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x40U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x80U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xff7fU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x80U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x100U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfeffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x100U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x200U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfdffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x200U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x400U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xfbffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x400U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x800U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xf7ffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x800U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xefffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x1000U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xdfffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x2000U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0xbfffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x4000U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.calibre_sec_cnt_i) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i 
            = ((0x7fffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_i)) 
               | (0x8000U & (IData)(vlSelfRef.calibre_sec_cnt_i)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfffeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfffdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfffbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfff7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xffefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xffdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xffbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xff7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x100U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfeffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x100U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x200U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfdffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x200U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x400U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xfbffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x400U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x800U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xf7ffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x800U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xefffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x1000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xdfffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x2000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0xbfffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x4000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter 
            = ((0x7fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter)) 
               | (0x8000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
    }
    if ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfffeU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((2U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfffdU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((4U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfffbU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((8U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
               ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfff7U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x10U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xffefU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x20U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xffdfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x20U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x40U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xffbfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x40U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x80U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xff7fU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x80U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x100U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfeffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x100U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x200U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfdffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x200U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x400U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xfbffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x400U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x800U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xf7ffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x800U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xefffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x1000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xdfffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x2000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0xbfffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x4000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre 
            = ((0x7fffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre)) 
               | (0x8000U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre)));
    }
    if ((1U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fffeU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (1U & vlSelfRef.timer_target_i));
    }
    if ((2U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fffdU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (2U & vlSelfRef.timer_target_i));
    }
    if ((4U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fffbU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (4U & vlSelfRef.timer_target_i));
    }
    if ((8U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fff7U & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (8U & vlSelfRef.timer_target_i));
    }
    if ((0x10U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1ffefU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x10U & vlSelfRef.timer_target_i));
    }
    if ((0x20U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1ffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x20U & vlSelfRef.timer_target_i));
    }
    if ((0x40U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1ffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x40U & vlSelfRef.timer_target_i));
    }
    if ((0x80U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1ff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x80U & vlSelfRef.timer_target_i));
    }
    if ((0x100U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1feffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x100U & vlSelfRef.timer_target_i));
    }
    if ((0x200U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fdffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x200U & vlSelfRef.timer_target_i));
    }
    if ((0x400U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1fbffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x400U & vlSelfRef.timer_target_i));
    }
    if ((0x800U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1f7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x800U & vlSelfRef.timer_target_i));
    }
    if ((0x1000U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1efffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x1000U & vlSelfRef.timer_target_i));
    }
    if ((0x2000U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1dfffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x2000U & vlSelfRef.timer_target_i));
    }
    if ((0x4000U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x1bfffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x4000U & vlSelfRef.timer_target_i));
    }
    if ((0x8000U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0x17fffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x8000U & vlSelfRef.timer_target_i));
    }
    if ((0x10000U & (vlSelfRef.timer_target_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i 
            = ((0xffffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_target_i) 
               | (0x10000U & vlSelfRef.timer_target_i));
    }
    if ((1U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fffeU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (1U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((2U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fffdU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (2U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((4U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fffbU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (4U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((8U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fff7U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (8U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x10U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1ffefU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x10U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x20U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1ffdfU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x20U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x40U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1ffbfU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x40U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x80U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1ff7fU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x80U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x100U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1feffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x100U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x200U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fdffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x200U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x400U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1fbffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x400U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x800U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1f7ffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x800U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x1000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1efffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x1000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x2000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1dfffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x2000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x4000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x1bfffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x4000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x8000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0x17fffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x8000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((0x10000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                     ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer 
            = ((0xffffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer) 
               | (0x10000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
    }
    if ((1U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fffeU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (1U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((2U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fffdU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (2U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((4U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fffbU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (4U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((8U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
               ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fff7U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (8U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x10U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1ffefU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x10U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x20U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1ffdfU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x20U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x40U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1ffbfU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x40U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x80U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                  ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1ff7fU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x80U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x100U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1feffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x100U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x200U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fdffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x200U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x400U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1fbffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x400U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x800U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                   ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1f7ffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x800U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x1000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1efffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x1000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x2000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1dfffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x2000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x4000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x1bfffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x4000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x8000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                    ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0x17fffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x8000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    if ((0x10000U & (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                     ^ vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target 
            = ((0xffffU & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target) 
               | (0x10000U & vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target));
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match 
        = (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
           == vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target);
    if ((1U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (1U & vlSelfRef.clock_i));
    }
    if ((2U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (2U & vlSelfRef.clock_i));
    }
    if ((4U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (4U & vlSelfRef.clock_i));
    }
    if ((8U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (8U & vlSelfRef.clock_i));
    }
    if ((0x10U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fffefU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x10U & vlSelfRef.clock_i));
    }
    if ((0x20U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x20U & vlSelfRef.clock_i));
    }
    if ((0x40U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x40U & vlSelfRef.clock_i));
    }
    if ((0x80U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x80U & vlSelfRef.clock_i));
    }
    if ((0x100U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x100U & vlSelfRef.clock_i));
    }
    if ((0x200U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x200U & vlSelfRef.clock_i));
    }
    if ((0x400U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x400U & vlSelfRef.clock_i));
    }
    if ((0x800U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3ff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x800U & vlSelfRef.clock_i));
    }
    if ((0x1000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fefffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x1000U & vlSelfRef.clock_i));
    }
    if ((0x2000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x2000U & vlSelfRef.clock_i));
    }
    if ((0x4000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3fbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x4000U & vlSelfRef.clock_i));
    }
    if ((0x8000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3f7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x8000U & vlSelfRef.clock_i));
    }
    if ((0x10000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3effffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x10000U & vlSelfRef.clock_i));
    }
    if ((0x20000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3dffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x20000U & vlSelfRef.clock_i));
    }
    if ((0x40000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x3bffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x40000U & vlSelfRef.clock_i));
    }
    if ((0x80000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x37ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x80000U & vlSelfRef.clock_i));
    }
    if ((0x100000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x2fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x100000U & vlSelfRef.clock_i));
    }
    if ((0x200000U & (vlSelfRef.clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_i))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_i 
            = ((0x1fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_i) 
               | (0x200000U & vlSelfRef.clock_i));
    }
    if ((1U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (1U & vlSelfRef.alarm_clock_i));
    }
    if ((2U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (2U & vlSelfRef.alarm_clock_i));
    }
    if ((4U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (4U & vlSelfRef.alarm_clock_i));
    }
    if ((8U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (8U & vlSelfRef.alarm_clock_i));
    }
    if ((0x10U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fffefU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x10U & vlSelfRef.alarm_clock_i));
    }
    if ((0x20U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x20U & vlSelfRef.alarm_clock_i));
    }
    if ((0x40U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x40U & vlSelfRef.alarm_clock_i));
    }
    if ((0x80U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x80U & vlSelfRef.alarm_clock_i));
    }
    if ((0x100U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x100U & vlSelfRef.alarm_clock_i));
    }
    if ((0x200U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x200U & vlSelfRef.alarm_clock_i));
    }
    if ((0x400U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x400U & vlSelfRef.alarm_clock_i));
    }
    if ((0x800U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3ff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x800U & vlSelfRef.alarm_clock_i));
    }
    if ((0x1000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fefffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x1000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x2000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x2000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x4000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3fbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x4000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x8000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3f7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x8000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x10000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3effffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x10000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x20000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3dffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x20000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x40000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x3bffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x40000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x80000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x37ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x80000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x100000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x2fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x100000U & vlSelfRef.alarm_clock_i));
    }
    if ((0x200000U & (vlSelfRef.alarm_clock_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i 
            = ((0x1fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_i) 
               | (0x200000U & vlSelfRef.alarm_clock_i));
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
           == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter));
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400 
        = ((~ ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
               >> 8U)) & ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                 >> 0xcU)) == (1U & 
                                               ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                                >> 9U))));
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4 
        = ((~ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)) 
           & ((1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                     >> 4U)) == (1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                       >> 1U))));
    if ((1U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (1U & vlSelfRef.date_i));
    }
    if ((2U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (2U & vlSelfRef.date_i));
    }
    if ((4U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (4U & vlSelfRef.date_i));
    }
    if ((8U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (8U & vlSelfRef.date_i));
    }
    if ((0x10U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffffefU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x10U & vlSelfRef.date_i));
    }
    if ((0x20U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x20U & vlSelfRef.date_i));
    }
    if ((0x40U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x40U & vlSelfRef.date_i));
    }
    if ((0x80U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x80U & vlSelfRef.date_i));
    }
    if ((0x100U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x100U & vlSelfRef.date_i));
    }
    if ((0x200U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x200U & vlSelfRef.date_i));
    }
    if ((0x400U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x400U & vlSelfRef.date_i));
    }
    if ((0x800U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x800U & vlSelfRef.date_i));
    }
    if ((0x1000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffefffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x1000U & vlSelfRef.date_i));
    }
    if ((0x2000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x2000U & vlSelfRef.date_i));
    }
    if ((0x4000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffffbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x4000U & vlSelfRef.date_i));
    }
    if ((0x8000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffff7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x8000U & vlSelfRef.date_i));
    }
    if ((0x10000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffeffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x10000U & vlSelfRef.date_i));
    }
    if ((0x20000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffdffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x20000U & vlSelfRef.date_i));
    }
    if ((0x40000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfffbffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x40000U & vlSelfRef.date_i));
    }
    if ((0x80000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfff7ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x80000U & vlSelfRef.date_i));
    }
    if ((0x100000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffefffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x100000U & vlSelfRef.date_i));
    }
    if ((0x200000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffdfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x200000U & vlSelfRef.date_i));
    }
    if ((0x400000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xffbfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x400000U & vlSelfRef.date_i));
    }
    if ((0x800000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xff7fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x800000U & vlSelfRef.date_i));
    }
    if ((0x1000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfeffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x1000000U & vlSelfRef.date_i));
    }
    if ((0x2000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfdffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x2000000U & vlSelfRef.date_i));
    }
    if ((0x4000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xfbffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x4000000U & vlSelfRef.date_i));
    }
    if ((0x8000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xf7ffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x8000000U & vlSelfRef.date_i));
    }
    if ((0x10000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xefffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x10000000U & vlSelfRef.date_i));
    }
    if ((0x20000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xdfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x20000000U & vlSelfRef.date_i));
    }
    if ((0x40000000U & (vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0xbfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x40000000U & vlSelfRef.date_i));
    }
    if (((vlSelfRef.date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_i = 
            ((0x7fffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_i) 
             | (0x80000000U & vlSelfRef.date_i));
    }
    if ((1U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (1U & vlSelfRef.alarm_date_i));
    }
    if ((2U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (2U & vlSelfRef.alarm_date_i));
    }
    if ((4U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (4U & vlSelfRef.alarm_date_i));
    }
    if ((8U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (8U & vlSelfRef.alarm_date_i));
    }
    if ((0x10U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffffefU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x10U & vlSelfRef.alarm_date_i));
    }
    if ((0x20U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x20U & vlSelfRef.alarm_date_i));
    }
    if ((0x40U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x40U & vlSelfRef.alarm_date_i));
    }
    if ((0x80U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x80U & vlSelfRef.alarm_date_i));
    }
    if ((0x100U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x100U & vlSelfRef.alarm_date_i));
    }
    if ((0x200U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x200U & vlSelfRef.alarm_date_i));
    }
    if ((0x400U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x400U & vlSelfRef.alarm_date_i));
    }
    if ((0x800U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x800U & vlSelfRef.alarm_date_i));
    }
    if ((0x1000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffefffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x1000U & vlSelfRef.alarm_date_i));
    }
    if ((0x2000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x2000U & vlSelfRef.alarm_date_i));
    }
    if ((0x4000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffffbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x4000U & vlSelfRef.alarm_date_i));
    }
    if ((0x8000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffff7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x8000U & vlSelfRef.alarm_date_i));
    }
    if ((0x10000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffeffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x10000U & vlSelfRef.alarm_date_i));
    }
    if ((0x20000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffdffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x20000U & vlSelfRef.alarm_date_i));
    }
    if ((0x40000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfffbffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x40000U & vlSelfRef.alarm_date_i));
    }
    if ((0x80000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfff7ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x80000U & vlSelfRef.alarm_date_i));
    }
    if ((0x100000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffefffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x100000U & vlSelfRef.alarm_date_i));
    }
    if ((0x200000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffdfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x200000U & vlSelfRef.alarm_date_i));
    }
    if ((0x400000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xffbfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x400000U & vlSelfRef.alarm_date_i));
    }
    if ((0x800000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xff7fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x800000U & vlSelfRef.alarm_date_i));
    }
    if ((0x1000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfeffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x1000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x2000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfdffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x2000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x4000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xfbffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x4000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x8000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xf7ffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x8000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x10000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xefffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x10000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x20000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xdfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x20000000U & vlSelfRef.alarm_date_i));
    }
    if ((0x40000000U & (vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0xbfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x40000000U & vlSelfRef.alarm_date_i));
    }
    if (((vlSelfRef.alarm_date_i ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i 
            = ((0x7fffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_i) 
               | (0x80000000U & vlSelfRef.alarm_date_i));
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year 
        = (IData)((((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                    >> 5U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                              == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))));
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 4U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))));
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 3U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day))));
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 2U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours))));
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 1U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes))));
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds 
        = (1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                 | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                    == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds))));
    vlSelfRef.calibre_sec_cnt_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre;
    vlSelfRef.timer_value_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer;
    vlSelfRef.clock_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
                          << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                                        << 8U) | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    vlSelfRef.alarm_clock_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                                << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
    vlSelfRef.date_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                         << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
                                       << 8U) | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
    vlSelfRef.alarm_date_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                               << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
    if ((1U & ((IData)(vlSelfRef.event_flag_o) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o 
            = ((2U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o)) 
               | (1U & (IData)(vlSelfRef.event_flag_o)));
    }
    if ((2U & ((IData)(vlSelfRef.event_flag_o) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o 
            = ((1U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_flag_o)) 
               | (2U & (IData)(vlSelfRef.event_flag_o)));
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en) 
           & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) 
           & (0x59U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_400))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_400 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_div_4))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_div_4 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4) 
           & ((0U != (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))) 
              | ((0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))) 
                 & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400))));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_month))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_month 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_day))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_day 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year) 
           & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month) 
              & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day) 
                 & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours) 
                    & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes) 
                       & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds))))));
    if ((1U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfffeU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (1U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((2U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfffdU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (2U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((4U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfffbU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (4U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((8U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
               ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfff7U & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (8U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x10U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xffefU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x10U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x20U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xffdfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x20U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x40U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xffbfU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x40U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x80U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                  ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xff7fU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x80U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x100U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfeffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x100U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x200U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfdffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x200U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x400U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xfbffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x400U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x800U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                   ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xf7ffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x800U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xefffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x1000U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xdfffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x2000U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0xbfffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x4000U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.calibre_sec_cnt_o) 
                    ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o 
            = ((0x7fffU & (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__calibre_sec_cnt_o)) 
               | (0x8000U & (IData)(vlSelfRef.calibre_sec_cnt_o)));
    }
    if ((1U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fffeU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (1U & vlSelfRef.timer_value_o));
    }
    if ((2U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fffdU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (2U & vlSelfRef.timer_value_o));
    }
    if ((4U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fffbU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (4U & vlSelfRef.timer_value_o));
    }
    if ((8U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fff7U & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (8U & vlSelfRef.timer_value_o));
    }
    if ((0x10U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1ffefU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x10U & vlSelfRef.timer_value_o));
    }
    if ((0x20U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1ffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x20U & vlSelfRef.timer_value_o));
    }
    if ((0x40U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1ffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x40U & vlSelfRef.timer_value_o));
    }
    if ((0x80U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1ff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x80U & vlSelfRef.timer_value_o));
    }
    if ((0x100U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1feffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x100U & vlSelfRef.timer_value_o));
    }
    if ((0x200U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fdffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x200U & vlSelfRef.timer_value_o));
    }
    if ((0x400U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1fbffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x400U & vlSelfRef.timer_value_o));
    }
    if ((0x800U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1f7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x800U & vlSelfRef.timer_value_o));
    }
    if ((0x1000U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1efffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x1000U & vlSelfRef.timer_value_o));
    }
    if ((0x2000U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1dfffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x2000U & vlSelfRef.timer_value_o));
    }
    if ((0x4000U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x1bfffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x4000U & vlSelfRef.timer_value_o));
    }
    if ((0x8000U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0x17fffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x8000U & vlSelfRef.timer_value_o));
    }
    if ((0x10000U & (vlSelfRef.timer_value_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o 
            = ((0xffffU & vlSelfRef.rtc_top__DOT____Vtogcov__timer_value_o) 
               | (0x10000U & vlSelfRef.timer_value_o));
    }
    if ((1U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (1U & vlSelfRef.clock_o));
    }
    if ((2U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (2U & vlSelfRef.clock_o));
    }
    if ((4U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (4U & vlSelfRef.clock_o));
    }
    if ((8U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (8U & vlSelfRef.clock_o));
    }
    if ((0x10U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fffefU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x10U & vlSelfRef.clock_o));
    }
    if ((0x20U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x20U & vlSelfRef.clock_o));
    }
    if ((0x40U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x40U & vlSelfRef.clock_o));
    }
    if ((0x80U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x80U & vlSelfRef.clock_o));
    }
    if ((0x100U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x100U & vlSelfRef.clock_o));
    }
    if ((0x200U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x200U & vlSelfRef.clock_o));
    }
    if ((0x400U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x400U & vlSelfRef.clock_o));
    }
    if ((0x800U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3ff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x800U & vlSelfRef.clock_o));
    }
    if ((0x1000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fefffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x1000U & vlSelfRef.clock_o));
    }
    if ((0x2000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x2000U & vlSelfRef.clock_o));
    }
    if ((0x4000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3fbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x4000U & vlSelfRef.clock_o));
    }
    if ((0x8000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3f7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x8000U & vlSelfRef.clock_o));
    }
    if ((0x10000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3effffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x10000U & vlSelfRef.clock_o));
    }
    if ((0x20000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3dffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x20000U & vlSelfRef.clock_o));
    }
    if ((0x40000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x3bffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x40000U & vlSelfRef.clock_o));
    }
    if ((0x80000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x37ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x80000U & vlSelfRef.clock_o));
    }
    if ((0x100000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x2fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x100000U & vlSelfRef.clock_o));
    }
    if ((0x200000U & (vlSelfRef.clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__clock_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.rtc_top__DOT____Vtogcov__clock_o 
            = ((0x1fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__clock_o) 
               | (0x200000U & vlSelfRef.clock_o));
    }
    if ((1U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (1U & vlSelfRef.alarm_clock_o));
    }
    if ((2U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (2U & vlSelfRef.alarm_clock_o));
    }
    if ((4U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (4U & vlSelfRef.alarm_clock_o));
    }
    if ((8U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (8U & vlSelfRef.alarm_clock_o));
    }
    if ((0x10U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fffefU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x10U & vlSelfRef.alarm_clock_o));
    }
    if ((0x20U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x20U & vlSelfRef.alarm_clock_o));
    }
    if ((0x40U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x40U & vlSelfRef.alarm_clock_o));
    }
    if ((0x80U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x80U & vlSelfRef.alarm_clock_o));
    }
    if ((0x100U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x100U & vlSelfRef.alarm_clock_o));
    }
    if ((0x200U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x200U & vlSelfRef.alarm_clock_o));
    }
    if ((0x400U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x400U & vlSelfRef.alarm_clock_o));
    }
    if ((0x800U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3ff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x800U & vlSelfRef.alarm_clock_o));
    }
    if ((0x1000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fefffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x1000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x2000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x2000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x4000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3fbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x4000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x8000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3f7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x8000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x10000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3effffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x10000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x20000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3dffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x20000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x40000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x3bffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x40000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x80000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x37ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x80000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x100000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x2fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x100000U & vlSelfRef.alarm_clock_o));
    }
    if ((0x200000U & (vlSelfRef.alarm_clock_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o 
            = ((0x1fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_clock_o) 
               | (0x200000U & vlSelfRef.alarm_clock_o));
    }
    if ((1U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (1U & vlSelfRef.date_o));
    }
    if ((2U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (2U & vlSelfRef.date_o));
    }
    if ((4U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (4U & vlSelfRef.date_o));
    }
    if ((8U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (8U & vlSelfRef.date_o));
    }
    if ((0x10U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffffefU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x10U & vlSelfRef.date_o));
    }
    if ((0x20U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x20U & vlSelfRef.date_o));
    }
    if ((0x40U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x40U & vlSelfRef.date_o));
    }
    if ((0x80U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x80U & vlSelfRef.date_o));
    }
    if ((0x100U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x100U & vlSelfRef.date_o));
    }
    if ((0x200U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x200U & vlSelfRef.date_o));
    }
    if ((0x400U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x400U & vlSelfRef.date_o));
    }
    if ((0x800U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x800U & vlSelfRef.date_o));
    }
    if ((0x1000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffefffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x1000U & vlSelfRef.date_o));
    }
    if ((0x2000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x2000U & vlSelfRef.date_o));
    }
    if ((0x4000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffffbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x4000U & vlSelfRef.date_o));
    }
    if ((0x8000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffff7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x8000U & vlSelfRef.date_o));
    }
    if ((0x10000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffeffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x10000U & vlSelfRef.date_o));
    }
    if ((0x20000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffdffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x20000U & vlSelfRef.date_o));
    }
    if ((0x40000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfffbffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x40000U & vlSelfRef.date_o));
    }
    if ((0x80000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfff7ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x80000U & vlSelfRef.date_o));
    }
    if ((0x100000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffefffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x100000U & vlSelfRef.date_o));
    }
    if ((0x200000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffdfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x200000U & vlSelfRef.date_o));
    }
    if ((0x400000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xffbfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x400000U & vlSelfRef.date_o));
    }
    if ((0x800000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xff7fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x800000U & vlSelfRef.date_o));
    }
    if ((0x1000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfeffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x1000000U & vlSelfRef.date_o));
    }
    if ((0x2000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfdffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x2000000U & vlSelfRef.date_o));
    }
    if ((0x4000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xfbffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x4000000U & vlSelfRef.date_o));
    }
    if ((0x8000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xf7ffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x8000000U & vlSelfRef.date_o));
    }
    if ((0x10000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xefffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x10000000U & vlSelfRef.date_o));
    }
    if ((0x20000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xdfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x20000000U & vlSelfRef.date_o));
    }
    if ((0x40000000U & (vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0xbfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x40000000U & vlSelfRef.date_o));
    }
    if (((vlSelfRef.date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.rtc_top__DOT____Vtogcov__date_o = 
            ((0x7fffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__date_o) 
             | (0x80000000U & vlSelfRef.date_o));
    }
    if ((1U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffffeU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (1U & vlSelfRef.alarm_date_o));
    }
    if ((2U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffffdU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (2U & vlSelfRef.alarm_date_o));
    }
    if ((4U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffffbU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (4U & vlSelfRef.alarm_date_o));
    }
    if ((8U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffff7U & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (8U & vlSelfRef.alarm_date_o));
    }
    if ((0x10U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffffefU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x10U & vlSelfRef.alarm_date_o));
    }
    if ((0x20U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffffdfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x20U & vlSelfRef.alarm_date_o));
    }
    if ((0x40U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffffbfU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x40U & vlSelfRef.alarm_date_o));
    }
    if ((0x80U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffff7fU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x80U & vlSelfRef.alarm_date_o));
    }
    if ((0x100U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffeffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x100U & vlSelfRef.alarm_date_o));
    }
    if ((0x200U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffdffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x200U & vlSelfRef.alarm_date_o));
    }
    if ((0x400U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffffbffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x400U & vlSelfRef.alarm_date_o));
    }
    if ((0x800U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffff7ffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x800U & vlSelfRef.alarm_date_o));
    }
    if ((0x1000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffefffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x1000U & vlSelfRef.alarm_date_o));
    }
    if ((0x2000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffdfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x2000U & vlSelfRef.alarm_date_o));
    }
    if ((0x4000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffffbfffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x4000U & vlSelfRef.alarm_date_o));
    }
    if ((0x8000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffff7fffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x8000U & vlSelfRef.alarm_date_o));
    }
    if ((0x10000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffeffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x10000U & vlSelfRef.alarm_date_o));
    }
    if ((0x20000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffdffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x20000U & vlSelfRef.alarm_date_o));
    }
    if ((0x40000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfffbffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x40000U & vlSelfRef.alarm_date_o));
    }
    if ((0x80000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfff7ffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x80000U & vlSelfRef.alarm_date_o));
    }
    if ((0x100000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffefffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x100000U & vlSelfRef.alarm_date_o));
    }
    if ((0x200000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffdfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x200000U & vlSelfRef.alarm_date_o));
    }
    if ((0x400000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xffbfffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x400000U & vlSelfRef.alarm_date_o));
    }
    if ((0x800000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xff7fffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x800000U & vlSelfRef.alarm_date_o));
    }
    if ((0x1000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfeffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x1000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x2000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfdffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x2000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x4000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xfbffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x4000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x8000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xf7ffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x8000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x10000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xefffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x10000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x20000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xdfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x20000000U & vlSelfRef.alarm_date_o));
    }
    if ((0x40000000U & (vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0xbfffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x40000000U & vlSelfRef.alarm_date_o));
    }
    if (((vlSelfRef.alarm_date_o ^ vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o 
            = ((0x7fffffffU & vlSelfRef.rtc_top__DOT____Vtogcov__alarm_date_o) 
               | (0x80000000U & vlSelfRef.alarm_date_o));
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes) 
           & (0x59U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_leap))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_leap 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap;
    }
    if ((0x10U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
        if ((8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
            ++(vlSymsp->__Vcoverage[587]);
        } else if ((4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[587]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
        } else if ((2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
                ++(vlSymsp->__Vcoverage[587]);
                vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[586]);
                vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                    = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
            }
        } else if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[585]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x30U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        } else {
            ++(vlSymsp->__Vcoverage[584]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        }
    } else if ((8U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
        if ((4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[587]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
        } else if ((2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[587]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
        } else if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[583]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x30U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        } else {
            ++(vlSymsp->__Vcoverage[582]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        }
    } else if ((4U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
        if ((2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
                ++(vlSymsp->__Vcoverage[581]);
                vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                    = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
            } else {
                ++(vlSymsp->__Vcoverage[580]);
                vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                    = (0x30U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
            }
        } else if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[579]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        } else {
            ++(vlSymsp->__Vcoverage[578]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x30U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        }
    } else if ((2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
        if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
            ++(vlSymsp->__Vcoverage[577]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
        } else {
            ++(vlSymsp->__Vcoverage[576]);
            vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
                = ((0x29U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)) 
                   | ((~ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap)) 
                      & (0x28U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day))));
        }
    } else if ((1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month 
            = (0x31U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day));
    } else {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month = 0U;
    }
    ++(vlSymsp->__Vcoverage[588]);
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_match))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable) 
           & ((~ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match)) 
              & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours;
    }
    vlSelfRef.rtc_top__DOT__s_rtc_update_day = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours) 
                                                & (0x23U 
                                                   == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month) 
           & (0x12U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event;
    }
    vlSelfRef.event_o = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) 
                         | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event));
    if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
         ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__s_rtc_update_day))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.rtc_top__DOT____Vtogcov__s_rtc_update_day 
            = vlSelfRef.rtc_top__DOT__s_rtc_update_day;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year;
    }
    if (((IData)(vlSelfRef.event_o) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_o))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_o 
            = vlSelfRef.event_o;
    }
}

VL_ATTR_COLD void Vrtc_top___024root___configure_coverage(Vrtc_top___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtc/rtl/rtc_top.sv", 2, 37, ".rtc_top", "v_toggle/rtc_top", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtc/rtl/rtc_top.sv", 3, 37, ".rtc_top", "v_toggle/rtc_top", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../rtc/rtl/rtc_top.sv", 5, 37, ".rtc_top", "v_toggle/rtc_top", "date_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtc/rtl/rtc_top.sv", 6, 37, ".rtc_top", "v_toggle/rtc_top", "date_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtc/rtl/rtc_top.sv", 7, 37, ".rtc_top", "v_toggle/rtc_top", "date_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtc/rtl/rtc_top.sv", 9, 37, ".rtc_top", "v_toggle/rtc_top", "clock_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtc/rtl/rtc_top.sv", 10, 37, ".rtc_top", "v_toggle/rtc_top", "clock_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../rtc/rtl/rtc_top.sv", 11, 37, ".rtc_top", "v_toggle/rtc_top", "clock_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../rtc/rtl/rtc_top.sv", 13, 37, ".rtc_top", "v_toggle/rtc_top", "init_sec_cnt_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../rtc/rtl/rtc_top.sv", 15, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../rtc/rtl/rtc_top.sv", 16, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../rtc/rtl/rtc_top.sv", 17, 37, ".rtc_top", "v_toggle/rtc_top", "calibre_sec_cnt_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../rtc/rtl/rtc_top.sv", 19, 37, ".rtc_top", "v_toggle/rtc_top", "timer_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../rtc/rtl/rtc_top.sv", 20, 37, ".rtc_top", "v_toggle/rtc_top", "timer_enable_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../rtc/rtl/rtc_top.sv", 21, 37, ".rtc_top", "v_toggle/rtc_top", "timer_retrig_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../rtc/rtl/rtc_top.sv", 22, 37, ".rtc_top", "v_toggle/rtc_top", "timer_target_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtc/rtl/rtc_top.sv", 23, 37, ".rtc_top", "v_toggle/rtc_top", "timer_value_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtc/rtl/rtc_top.sv", 25, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_enable_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtc/rtl/rtc_top.sv", 26, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_mask_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtc/rtl/rtc_top.sv", 28, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_update_clock_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../rtc/rtl/rtc_top.sv", 29, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../rtc/rtl/rtc_top.sv", 30, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_clock_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../rtc/rtl/rtc_top.sv", 31, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_update_date_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../rtc/rtl/rtc_top.sv", 32, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../rtc/rtl/rtc_top.sv", 33, 37, ".rtc_top", "v_toggle/rtc_top", "alarm_date_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../rtc/rtl/rtc_top.sv", 35, 37, ".rtc_top", "v_toggle/rtc_top", "event_flag_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../rtc/rtl/rtc_top.sv", 36, 37, ".rtc_top", "v_toggle/rtc_top", "event_flag_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../rtc/rtl/rtc_top.sv", 36, 37, ".rtc_top", "v_toggle/rtc_top", "event_flag_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../rtc/rtl/rtc_top.sv", 37, 37, ".rtc_top", "v_toggle/rtc_top", "event_flag_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../rtc/rtl/rtc_top.sv", 37, 37, ".rtc_top", "v_toggle/rtc_top", "event_flag_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../rtc/rtl/rtc_top.sv", 39, 37, ".rtc_top", "v_toggle/rtc_top", "event_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../rtc/rtl/rtc_top.sv", 42, 37, ".rtc_top", "v_toggle/rtc_top", "s_rtc_update_day", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtc/rtl/rtc_top.sv", 43, 37, ".rtc_top", "v_toggle/rtc_top", "s_date[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtc/rtl/rtc_clock.sv", 2, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtc/rtl/rtc_clock.sv", 3, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtc/rtl/rtc_clock.sv", 5, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtc/rtl/rtc_clock.sv", 6, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../rtc/rtl/rtc_clock.sv", 7, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "clock_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../rtc/rtl/rtc_clock.sv", 9, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "init_sec_cnt_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../rtc/rtl/rtc_clock.sv", 11, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../rtc/rtl/rtc_clock.sv", 12, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../rtc/rtl/rtc_clock.sv", 13, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "calibre_sec_cnt_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../rtc/rtl/rtc_clock.sv", 15, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../rtc/rtl/rtc_clock.sv", 16, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_enable_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../rtc/rtl/rtc_clock.sv", 17, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_retrig_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../rtc/rtl/rtc_clock.sv", 18, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_target_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtc/rtl/rtc_clock.sv", 19, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "timer_value_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtc/rtl/rtc_clock.sv", 21, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_enable_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtc/rtl/rtc_clock.sv", 22, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_mask_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtc/rtl/rtc_clock.sv", 23, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_update_clock_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../rtc/rtl/rtc_clock.sv", 24, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../rtc/rtl/rtc_clock.sv", 25, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_clock_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../rtc/rtl/rtc_clock.sv", 27, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_update_date_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../rtc/rtl/rtc_clock.sv", 29, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../rtc/rtl/rtc_clock.sv", 30, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "alarm_date_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtc/rtl/rtc_clock.sv", 32, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "date_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../rtc/rtl/rtc_clock.sv", 34, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_flag_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../rtc/rtl/rtc_clock.sv", 35, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_flag_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../rtc/rtl/rtc_clock.sv", 35, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_flag_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../rtc/rtl/rtc_clock.sv", 36, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_flag_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../rtc/rtl/rtc_clock.sv", 36, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_flag_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../rtc/rtl/rtc_clock.sv", 37, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "event_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../rtc/rtl/rtc_clock.sv", 39, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "update_day_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../rtc/rtl/rtc_clock.sv", 42, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_seconds[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../rtc/rtl/rtc_clock.sv", 43, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_minutes[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../rtc/rtl/rtc_clock.sv", 44, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_hours[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtc/rtl/rtc_clock.sv", 46, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_seconds[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtc/rtl/rtc_clock.sv", 47, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_minutes[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../rtc/rtl/rtc_clock.sv", 48, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_hours[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../rtc/rtl/rtc_clock.sv", 50, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_seconds[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../rtc/rtl/rtc_clock.sv", 51, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_minutes[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../rtc/rtl/rtc_clock.sv", 52, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_hours[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../rtc/rtl/rtc_clock.sv", 53, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_year[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../rtc/rtl/rtc_clock.sv", 54, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_month[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../rtc/rtl/rtc_clock.sv", 54, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_month[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../rtc/rtl/rtc_clock.sv", 54, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_month[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../rtc/rtl/rtc_clock.sv", 54, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_month[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../rtc/rtl/rtc_clock.sv", 54, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_month[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../rtc/rtl/rtc_clock.sv", 55, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_day[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../rtc/rtl/rtc_clock.sv", 57, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_mask[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../rtc/rtl/rtc_clock.sv", 58, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtc/rtl/rtc_clock.sv", 60, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_seconds[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../rtc/rtl/rtc_clock.sv", 61, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_minutes[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../rtc/rtl/rtc_clock.sv", 62, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_hours[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../rtc/rtl/rtc_clock.sv", 64, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_year[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../rtc/rtl/rtc_clock.sv", 65, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_month[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../rtc/rtl/rtc_clock.sv", 65, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_month[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../rtc/rtl/rtc_clock.sv", 65, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_month[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../rtc/rtl/rtc_clock.sv", 65, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_month[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../rtc/rtl/rtc_clock.sv", 65, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_month[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../rtc/rtl/rtc_clock.sv", 66, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_day[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../rtc/rtl/rtc_clock.sv", 68, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_year[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../rtc/rtl/rtc_clock.sv", 69, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_month[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../rtc/rtl/rtc_clock.sv", 69, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_month[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../rtc/rtl/rtc_clock.sv", 69, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_month[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../rtc/rtl/rtc_clock.sv", 69, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_month[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../rtc/rtl/rtc_clock.sv", 69, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_month[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../rtc/rtl/rtc_clock.sv", 70, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_day[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "../rtc/rtl/rtc_clock.sv", 72, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_counter[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "../rtc/rtl/rtc_clock.sv", 73, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_sec_cnt_calibre[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "../rtc/rtl/rtc_clock.sv", 75, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_update_seconds", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "../rtc/rtl/rtc_clock.sv", 76, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_update_minutes", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "../rtc/rtl/rtc_clock.sv", 77, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_update_hours", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "../rtc/rtl/rtc_clock.sv", 78, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_match", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "../rtc/rtl/rtc_clock.sv", 79, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_alarm_match", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "../rtc/rtl/rtc_clock.sv", 80, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_alarm_event", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "../rtc/rtl/rtc_clock.sv", 81, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_timer_event", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "../rtc/rtl/rtc_clock.sv", 82, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_timer_match", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "../rtc/rtl/rtc_clock.sv", 84, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_year", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "../rtc/rtl/rtc_clock.sv", 85, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_month", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "../rtc/rtl/rtc_clock.sv", 86, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_day", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "../rtc/rtl/rtc_clock.sv", 87, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_hours", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "../rtc/rtl/rtc_clock.sv", 88, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_minutes", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "../rtc/rtl/rtc_clock.sv", 89, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "s_match_seconds", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "../rtc/rtl/rtc_clock.sv", 91, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "../rtc/rtl/rtc_clock.sv", 92, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_target[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "../rtc/rtl/rtc_clock.sv", 93, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "../rtc/rtl/rtc_clock.sv", 94, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_timer_retrig", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "../rtc/rtl/rtc_clock.sv", 96, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_event_flag[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "../rtc/rtl/rtc_clock.sv", 96, 39, ".rtc_top.i_rtc_clock", "v_toggle/rtc_clock", "r_event_flag[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "../rtc/rtl/rtc_clock.sv", 152, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "../rtc/rtl/rtc_clock.sv", 152, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "../rtc/rtl/rtc_clock.sv", 155, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "../rtc/rtl/rtc_clock.sv", 155, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "../rtc/rtl/rtc_clock.sv", 162, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "162-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "../rtc/rtl/rtc_clock.sv", 162, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "../rtc/rtl/rtc_clock.sv", 158, 19, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "158-160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "../rtc/rtl/rtc_clock.sv", 150, 14, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "../rtc/rtl/rtc_clock.sv", 146, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "../rtc/rtl/rtc_clock.sv", 146, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../rtc/rtl/rtc_clock.sv", 144, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "144-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "../rtc/rtl/rtc_clock.sv", 192, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "192-193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "../rtc/rtl/rtc_clock.sv", 192, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "../rtc/rtl/rtc_clock.sv", 184, 14, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "184-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "../rtc/rtl/rtc_clock.sv", 194, 14, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "194-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "../rtc/rtl/rtc_clock.sv", 194, 15, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "../rtc/rtl/rtc_clock.sv", 171, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "171-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "../rtc/rtl/rtc_clock.sv", 171, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "../rtc/rtl/rtc_clock.sv", 169, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../rtc/rtl/rtc_clock.sv", 205, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "205-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "../rtc/rtl/rtc_clock.sv", 205, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "../rtc/rtl/rtc_clock.sv", 203, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "203-204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "../rtc/rtl/rtc_clock.sv", 233, 24, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "233-234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "../rtc/rtl/rtc_clock.sv", 233, 25, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "../rtc/rtl/rtc_clock.sv", 231, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "231-232,235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "../rtc/rtl/rtc_clock.sv", 231, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "../rtc/rtl/rtc_clock.sv", 229, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "229-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "../rtc/rtl/rtc_clock.sv", 229, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "../rtc/rtl/rtc_clock.sv", 222, 14, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "222-227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "../rtc/rtl/rtc_clock.sv", 213, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "213-218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "../rtc/rtl/rtc_clock.sv", 213, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "../rtc/rtl/rtc_clock.sv", 211, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "211-212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "../rtc/rtl/rtc_clock.sv", 249, 14, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "249-250");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "../rtc/rtl/rtc_clock.sv", 249, 15, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "../rtc/rtl/rtc_clock.sv", 245, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "245-246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "../rtc/rtl/rtc_clock.sv", 245, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "../rtc/rtl/rtc_clock.sv", 243, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "243-244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "../rtc/rtl/rtc_clock.sv", 264, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "264-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "../rtc/rtl/rtc_clock.sv", 264, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "267");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "../rtc/rtl/rtc_clock.sv", 260, 14, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "260-261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "../rtc/rtl/rtc_clock.sv", 260, 15, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "../rtc/rtl/rtc_clock.sv", 256, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "256-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "../rtc/rtl/rtc_clock.sv", 256, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "../rtc/rtl/rtc_clock.sv", 254, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "254-255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "../rtc/rtl/rtc_clock.sv", 292, 24, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "292-293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "../rtc/rtl/rtc_clock.sv", 292, 25, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "295");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "../rtc/rtl/rtc_clock.sv", 298, 29, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "../rtc/rtl/rtc_clock.sv", 298, 30, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "../rtc/rtl/rtc_clock.sv", 296, 24, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "296-297");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "../rtc/rtl/rtc_clock.sv", 290, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "290-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "../rtc/rtl/rtc_clock.sv", 290, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "../rtc/rtl/rtc_clock.sv", 304, 24, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "304-305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "../rtc/rtl/rtc_clock.sv", 304, 25, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "../rtc/rtl/rtc_clock.sv", 310, 29, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "310-311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "../rtc/rtl/rtc_clock.sv", 310, 30, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "../rtc/rtl/rtc_clock.sv", 308, 24, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "308-309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "../rtc/rtl/rtc_clock.sv", 302, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "302-303");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "../rtc/rtl/rtc_clock.sv", 302, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "../rtc/rtl/rtc_clock.sv", 319, 35, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "if", "319-322");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "../rtc/rtl/rtc_clock.sv", 319, 36, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "else", "323-324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "../rtc/rtl/rtc_clock.sv", 316, 24, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "elsif", "316-318");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "../rtc/rtl/rtc_clock.sv", 314, 19, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "314-315");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "../rtc/rtl/rtc_clock.sv", 314, 20, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "../rtc/rtl/rtc_clock.sv", 282, 14, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "282-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "../rtc/rtl/rtc_clock.sv", 282, 15, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "../rtc/rtl/rtc_clock.sv", 274, 9, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "if", "274-278");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "../rtc/rtl/rtc_clock.sv", 274, 10, ".rtc_top.i_rtc_clock", "v_branch/rtc_clock", "else", "281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "../rtc/rtl/rtc_clock.sv", 272, 4, ".rtc_top.i_rtc_clock", "v_line/rtc_clock", "block", "272-273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtc/rtl/rtc_date.sv", 2, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtc/rtl/rtc_date.sv", 3, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../rtc/rtl/rtc_date.sv", 5, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_update_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtc/rtl/rtc_date.sv", 7, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtc/rtl/rtc_date.sv", 8, 22, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "date_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../rtc/rtl/rtc_date.sv", 10, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "new_day_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtc/rtl/rtc_date.sv", 12, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_day[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtc/rtl/rtc_date.sv", 13, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_month[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtc/rtl/rtc_date.sv", 13, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_month[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtc/rtl/rtc_date.sv", 13, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_month[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtc/rtl/rtc_date.sv", 13, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_month[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtc/rtl/rtc_date.sv", 13, 14, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_month[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtc/rtl/rtc_date.sv", 14, 15, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "../rtc/rtl/rtc_date.sv", 15, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_day[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../rtc/rtl/rtc_date.sv", 16, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_month[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../rtc/rtl/rtc_date.sv", 16, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_month[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../rtc/rtl/rtc_date.sv", 16, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_month[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../rtc/rtl/rtc_date.sv", 16, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_month[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../rtc/rtl/rtc_date.sv", 16, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_month[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../rtc/rtl/rtc_date.sv", 17, 18, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "r_year[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "../rtc/rtl/rtc_date.sv", 19, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_end_of_month", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "../rtc/rtl/rtc_date.sv", 20, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_end_of_year", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "../rtc/rtl/rtc_date.sv", 21, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year_century", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "../rtc/rtl/rtc_date.sv", 22, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year_400", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "../rtc/rtl/rtc_date.sv", 23, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year_leap", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "../rtc/rtl/rtc_date.sv", 24, 8, ".rtc_top.i_rtc_date", "v_toggle/rtc_date", "s_year_div_4", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "../rtc/rtl/rtc_date.sv", 37, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "../rtc/rtl/rtc_date.sv", 38, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "../rtc/rtl/rtc_date.sv", 39, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "../rtc/rtl/rtc_date.sv", 40, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "../rtc/rtl/rtc_date.sv", 41, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "../rtc/rtl/rtc_date.sv", 42, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "../rtc/rtl/rtc_date.sv", 43, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "../rtc/rtl/rtc_date.sv", 44, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "../rtc/rtl/rtc_date.sv", 45, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "../rtc/rtl/rtc_date.sv", 46, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "../rtc/rtl/rtc_date.sv", 47, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "../rtc/rtl/rtc_date.sv", 48, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../rtc/rtl/rtc_date.sv", 49, 3, ".rtc_top.i_rtc_date", "v_line/rtc_date", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "../rtc/rtl/rtc_date.sv", 34, 2, ".rtc_top.i_rtc_date", "v_line/rtc_date", "block", "34-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "../rtc/rtl/rtc_date.sv", 70, 8, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "70-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "../rtc/rtl/rtc_date.sv", 70, 9, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "../rtc/rtl/rtc_date.sv", 68, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "../rtc/rtl/rtc_date.sv", 66, 8, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "../rtc/rtl/rtc_date.sv", 64, 3, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "../rtc/rtl/rtc_date.sv", 61, 3, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "61-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "../rtc/rtl/rtc_date.sv", 61, 4, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "../rtc/rtl/rtc_date.sv", 60, 2, ".rtc_top.i_rtc_date", "v_line/rtc_date", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "../rtc/rtl/rtc_date.sv", 89, 9, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "89-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "../rtc/rtl/rtc_date.sv", 89, 10, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "../rtc/rtl/rtc_date.sv", 87, 9, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "../rtc/rtl/rtc_date.sv", 85, 9, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "85-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "../rtc/rtl/rtc_date.sv", 83, 4, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "../rtc/rtl/rtc_date.sv", 80, 3, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "80-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "../rtc/rtl/rtc_date.sv", 80, 4, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "../rtc/rtl/rtc_date.sv", 79, 2, ".rtc_top.i_rtc_date", "v_line/rtc_date", "block", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "../rtc/rtl/rtc_date.sv", 113, 7, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "../rtc/rtl/rtc_date.sv", 113, 8, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "115-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "../rtc/rtl/rtc_date.sv", 109, 6, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "109-110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "../rtc/rtl/rtc_date.sv", 109, 7, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "../rtc/rtl/rtc_date.sv", 105, 5, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "../rtc/rtl/rtc_date.sv", 105, 6, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "../rtc/rtl/rtc_date.sv", 103, 10, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "../rtc/rtl/rtc_date.sv", 103, 11, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "../rtc/rtl/rtc_date.sv", 101, 5, ".rtc_top.i_rtc_date", "v_line/rtc_date", "elsif", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "../rtc/rtl/rtc_date.sv", 98, 4, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "if", "98-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "../rtc/rtl/rtc_date.sv", 98, 5, ".rtc_top.i_rtc_date", "v_branch/rtc_date", "else", "100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "../rtc/rtl/rtc_date.sv", 97, 2, ".rtc_top.i_rtc_date", "v_line/rtc_date", "block", "97");
}
