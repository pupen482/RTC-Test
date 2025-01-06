// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrtc_top__Syms.h"


VL_ATTR_COLD void Vrtc_top___024root__trace_init_sub__TOP__0(Vrtc_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+43,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"date_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"clock_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+50,0,"clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+51,0,"init_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+52,0,"calibre_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"calibre_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"calibre_sec_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+55,0,"timer_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"timer_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"timer_retrig_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"timer_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+59,0,"timer_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+60,0,"alarm_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"alarm_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+62,0,"alarm_update_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alarm_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+64,0,"alarm_clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+65,0,"alarm_update_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"alarm_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"alarm_date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"event_flag_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"event_flag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"event_flag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"event_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rtc_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"date_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"clock_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+50,0,"clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+51,0,"init_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+52,0,"calibre_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"calibre_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"calibre_sec_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+55,0,"timer_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"timer_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"timer_retrig_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"timer_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+59,0,"timer_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+60,0,"alarm_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"alarm_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+62,0,"alarm_update_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alarm_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+64,0,"alarm_clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+65,0,"alarm_update_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"alarm_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"alarm_date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"event_flag_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"event_flag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"event_flag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"event_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"s_rtc_update_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"s_date",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i_rtc_clock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"clock_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+50,0,"clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+51,0,"init_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+52,0,"calibre_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"calibre_sec_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"calibre_sec_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+55,0,"timer_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"timer_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"timer_retrig_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"timer_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+59,0,"timer_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+60,0,"alarm_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"alarm_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+62,0,"alarm_update_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alarm_clock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+64,0,"alarm_clock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+65,0,"alarm_update_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"alarm_date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"alarm_date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"event_flag_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"event_flag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"event_flag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"event_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"update_day_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"r_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"r_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"r_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"s_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"s_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"s_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"r_alarm_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"r_alarm_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"r_alarm_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"r_alarm_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+9,0,"r_alarm_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"r_alarm_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"r_alarm_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+12,0,"r_alarm_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"s_alarm_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"s_alarm_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"s_alarm_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+78,0,"s_alarm_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+79,0,"s_alarm_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+80,0,"s_alarm_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+13,0,"s_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+14,0,"s_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"s_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16,0,"r_sec_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"r_sec_cnt_calibre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+18,0,"s_update_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"s_update_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"s_update_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s_alarm_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"r_alarm_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s_alarm_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"s_timer_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"s_timer_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"s_match_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"s_match_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"s_match_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s_match_hours",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"s_match_minutes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"s_match_seconds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"r_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"r_timer_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+34,0,"r_timer_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"r_timer_retrig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"r_event_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_rtc_date", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"date_update_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"date_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"date_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"new_day_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"s_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+82,0,"s_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"s_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+15,0,"r_day",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14,0,"r_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"r_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+37,0,"s_end_of_month",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"s_end_of_year",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"s_year_century",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"s_year_400",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"s_year_leap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"s_year_div_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrtc_top___024root__trace_init_top(Vrtc_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrtc_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrtc_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vrtc_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrtc_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrtc_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrtc_top___024root__trace_register(Vrtc_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vrtc_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vrtc_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vrtc_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vrtc_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrtc_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_const_0\n"); );
    // Init
    Vrtc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrtc_top___024root*>(voidSelf);
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vrtc_top___024root__trace_full_0_sub_0(Vrtc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrtc_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_full_0\n"); );
    // Init
    Vrtc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrtc_top___024root*>(voidSelf);
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrtc_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrtc_top___024root__trace_full_0_sub_0(Vrtc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.rtc_top__DOT__s_rtc_update_day));
    bufp->fullCData(oldp+2,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds),8);
    bufp->fullCData(oldp+3,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes),8);
    bufp->fullCData(oldp+4,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours),6);
    bufp->fullCData(oldp+5,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds),8);
    bufp->fullCData(oldp+6,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes),8);
    bufp->fullCData(oldp+7,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours),6);
    bufp->fullSData(oldp+8,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year),14);
    bufp->fullCData(oldp+9,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month),5);
    bufp->fullCData(oldp+10,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day),6);
    bufp->fullCData(oldp+11,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask),6);
    bufp->fullBit(oldp+12,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable));
    bufp->fullSData(oldp+13,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year),14);
    bufp->fullCData(oldp+14,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month),5);
    bufp->fullCData(oldp+15,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day),6);
    bufp->fullSData(oldp+16,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter),16);
    bufp->fullSData(oldp+17,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre),16);
    bufp->fullBit(oldp+18,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds));
    bufp->fullBit(oldp+19,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes));
    bufp->fullBit(oldp+20,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours));
    bufp->fullBit(oldp+21,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match));
    bufp->fullBit(oldp+22,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match));
    bufp->fullBit(oldp+23,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event));
    bufp->fullBit(oldp+24,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event));
    bufp->fullBit(oldp+25,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match));
    bufp->fullBit(oldp+26,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year));
    bufp->fullBit(oldp+27,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month));
    bufp->fullBit(oldp+28,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day));
    bufp->fullBit(oldp+29,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours));
    bufp->fullBit(oldp+30,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes));
    bufp->fullBit(oldp+31,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds));
    bufp->fullIData(oldp+32,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer),17);
    bufp->fullIData(oldp+33,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target),17);
    bufp->fullBit(oldp+34,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en));
    bufp->fullBit(oldp+35,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig));
    bufp->fullCData(oldp+36,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag),2);
    bufp->fullBit(oldp+37,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month));
    bufp->fullBit(oldp+38,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year));
    bufp->fullBit(oldp+39,((0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)))));
    bufp->fullBit(oldp+40,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400));
    bufp->fullBit(oldp+41,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap));
    bufp->fullBit(oldp+42,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4));
    bufp->fullBit(oldp+43,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+44,(vlSelfRef.rstn_i));
    bufp->fullBit(oldp+45,(vlSelfRef.date_update_i));
    bufp->fullIData(oldp+46,(vlSelfRef.date_i),32);
    bufp->fullIData(oldp+47,(vlSelfRef.date_o),32);
    bufp->fullBit(oldp+48,(vlSelfRef.clock_update_i));
    bufp->fullIData(oldp+49,(vlSelfRef.clock_o),22);
    bufp->fullIData(oldp+50,(vlSelfRef.clock_i),22);
    bufp->fullSData(oldp+51,(vlSelfRef.init_sec_cnt_i),10);
    bufp->fullBit(oldp+52,(vlSelfRef.calibre_update_i));
    bufp->fullSData(oldp+53,(vlSelfRef.calibre_sec_cnt_i),16);
    bufp->fullSData(oldp+54,(vlSelfRef.calibre_sec_cnt_o),16);
    bufp->fullBit(oldp+55,(vlSelfRef.timer_update_i));
    bufp->fullBit(oldp+56,(vlSelfRef.timer_enable_i));
    bufp->fullBit(oldp+57,(vlSelfRef.timer_retrig_i));
    bufp->fullIData(oldp+58,(vlSelfRef.timer_target_i),17);
    bufp->fullIData(oldp+59,(vlSelfRef.timer_value_o),17);
    bufp->fullBit(oldp+60,(vlSelfRef.alarm_enable_i));
    bufp->fullCData(oldp+61,(vlSelfRef.alarm_mask_i),6);
    bufp->fullBit(oldp+62,(vlSelfRef.alarm_update_clock_i));
    bufp->fullIData(oldp+63,(vlSelfRef.alarm_clock_i),22);
    bufp->fullIData(oldp+64,(vlSelfRef.alarm_clock_o),22);
    bufp->fullBit(oldp+65,(vlSelfRef.alarm_update_date_i));
    bufp->fullIData(oldp+66,(vlSelfRef.alarm_date_i),32);
    bufp->fullIData(oldp+67,(vlSelfRef.alarm_date_o),32);
    bufp->fullBit(oldp+68,(vlSelfRef.event_flag_update_i));
    bufp->fullCData(oldp+69,(vlSelfRef.event_flag_i),2);
    bufp->fullCData(oldp+70,(vlSelfRef.event_flag_o),2);
    bufp->fullBit(oldp+71,(vlSelfRef.event_o));
    bufp->fullCData(oldp+72,((0xffU & vlSelfRef.clock_i)),8);
    bufp->fullCData(oldp+73,((0xffU & (vlSelfRef.clock_i 
                                       >> 8U))),8);
    bufp->fullCData(oldp+74,((0x3fU & (vlSelfRef.clock_i 
                                       >> 0x10U))),6);
    bufp->fullCData(oldp+75,((0xffU & vlSelfRef.alarm_clock_i)),8);
    bufp->fullCData(oldp+76,((0xffU & (vlSelfRef.alarm_clock_i 
                                       >> 8U))),8);
    bufp->fullCData(oldp+77,((0x3fU & (vlSelfRef.alarm_clock_i 
                                       >> 0x10U))),6);
    bufp->fullSData(oldp+78,((0x3fffU & (vlSelfRef.alarm_date_i 
                                         >> 0x10U))),14);
    bufp->fullCData(oldp+79,((0x1fU & (vlSelfRef.alarm_date_i 
                                       >> 8U))),5);
    bufp->fullCData(oldp+80,((0x3fU & vlSelfRef.alarm_date_i)),6);
    bufp->fullCData(oldp+81,((0x3fU & vlSelfRef.date_i)),6);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelfRef.date_i 
                                       >> 8U))),5);
    bufp->fullSData(oldp+83,((0x3fffU & (vlSelfRef.date_i 
                                         >> 0x10U))),14);
}
