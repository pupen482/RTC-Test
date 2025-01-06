// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrtc_top__Syms.h"


void Vrtc_top___024root__trace_chg_0_sub_0(Vrtc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrtc_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_chg_0\n"); );
    // Init
    Vrtc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrtc_top___024root*>(voidSelf);
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrtc_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrtc_top___024root__trace_chg_0_sub_0(Vrtc_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.rtc_top__DOT__s_rtc_update_day));
        bufp->chgCData(oldp+1,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds),8);
        bufp->chgCData(oldp+2,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes),8);
        bufp->chgCData(oldp+3,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours),6);
        bufp->chgCData(oldp+4,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds),8);
        bufp->chgCData(oldp+5,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes),8);
        bufp->chgCData(oldp+6,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours),6);
        bufp->chgSData(oldp+7,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year),14);
        bufp->chgCData(oldp+8,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month),5);
        bufp->chgCData(oldp+9,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day),6);
        bufp->chgCData(oldp+10,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask),6);
        bufp->chgBit(oldp+11,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable));
        bufp->chgSData(oldp+12,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year),14);
        bufp->chgCData(oldp+13,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month),5);
        bufp->chgCData(oldp+14,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day),6);
        bufp->chgSData(oldp+15,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter),16);
        bufp->chgSData(oldp+16,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre),16);
        bufp->chgBit(oldp+17,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds));
        bufp->chgBit(oldp+18,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes));
        bufp->chgBit(oldp+19,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours));
        bufp->chgBit(oldp+20,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match));
        bufp->chgBit(oldp+21,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match));
        bufp->chgBit(oldp+22,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event));
        bufp->chgBit(oldp+23,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event));
        bufp->chgBit(oldp+24,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match));
        bufp->chgBit(oldp+25,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year));
        bufp->chgBit(oldp+26,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month));
        bufp->chgBit(oldp+27,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day));
        bufp->chgBit(oldp+28,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours));
        bufp->chgBit(oldp+29,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes));
        bufp->chgBit(oldp+30,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds));
        bufp->chgIData(oldp+31,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer),17);
        bufp->chgIData(oldp+32,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target),17);
        bufp->chgBit(oldp+33,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en));
        bufp->chgBit(oldp+34,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig));
        bufp->chgCData(oldp+35,(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag),2);
        bufp->chgBit(oldp+36,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month));
        bufp->chgBit(oldp+37,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year));
        bufp->chgBit(oldp+38,((0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)))));
        bufp->chgBit(oldp+39,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_400));
        bufp->chgBit(oldp+40,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_leap));
        bufp->chgBit(oldp+41,(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_year_div_4));
    }
    bufp->chgBit(oldp+42,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+43,(vlSelfRef.rstn_i));
    bufp->chgBit(oldp+44,(vlSelfRef.date_update_i));
    bufp->chgIData(oldp+45,(vlSelfRef.date_i),32);
    bufp->chgIData(oldp+46,(vlSelfRef.date_o),32);
    bufp->chgBit(oldp+47,(vlSelfRef.clock_update_i));
    bufp->chgIData(oldp+48,(vlSelfRef.clock_o),22);
    bufp->chgIData(oldp+49,(vlSelfRef.clock_i),22);
    bufp->chgSData(oldp+50,(vlSelfRef.init_sec_cnt_i),10);
    bufp->chgBit(oldp+51,(vlSelfRef.calibre_update_i));
    bufp->chgSData(oldp+52,(vlSelfRef.calibre_sec_cnt_i),16);
    bufp->chgSData(oldp+53,(vlSelfRef.calibre_sec_cnt_o),16);
    bufp->chgBit(oldp+54,(vlSelfRef.timer_update_i));
    bufp->chgBit(oldp+55,(vlSelfRef.timer_enable_i));
    bufp->chgBit(oldp+56,(vlSelfRef.timer_retrig_i));
    bufp->chgIData(oldp+57,(vlSelfRef.timer_target_i),17);
    bufp->chgIData(oldp+58,(vlSelfRef.timer_value_o),17);
    bufp->chgBit(oldp+59,(vlSelfRef.alarm_enable_i));
    bufp->chgCData(oldp+60,(vlSelfRef.alarm_mask_i),6);
    bufp->chgBit(oldp+61,(vlSelfRef.alarm_update_clock_i));
    bufp->chgIData(oldp+62,(vlSelfRef.alarm_clock_i),22);
    bufp->chgIData(oldp+63,(vlSelfRef.alarm_clock_o),22);
    bufp->chgBit(oldp+64,(vlSelfRef.alarm_update_date_i));
    bufp->chgIData(oldp+65,(vlSelfRef.alarm_date_i),32);
    bufp->chgIData(oldp+66,(vlSelfRef.alarm_date_o),32);
    bufp->chgBit(oldp+67,(vlSelfRef.event_flag_update_i));
    bufp->chgCData(oldp+68,(vlSelfRef.event_flag_i),2);
    bufp->chgCData(oldp+69,(vlSelfRef.event_flag_o),2);
    bufp->chgBit(oldp+70,(vlSelfRef.event_o));
    bufp->chgCData(oldp+71,((0xffU & vlSelfRef.clock_i)),8);
    bufp->chgCData(oldp+72,((0xffU & (vlSelfRef.clock_i 
                                      >> 8U))),8);
    bufp->chgCData(oldp+73,((0x3fU & (vlSelfRef.clock_i 
                                      >> 0x10U))),6);
    bufp->chgCData(oldp+74,((0xffU & vlSelfRef.alarm_clock_i)),8);
    bufp->chgCData(oldp+75,((0xffU & (vlSelfRef.alarm_clock_i 
                                      >> 8U))),8);
    bufp->chgCData(oldp+76,((0x3fU & (vlSelfRef.alarm_clock_i 
                                      >> 0x10U))),6);
    bufp->chgSData(oldp+77,((0x3fffU & (vlSelfRef.alarm_date_i 
                                        >> 0x10U))),14);
    bufp->chgCData(oldp+78,((0x1fU & (vlSelfRef.alarm_date_i 
                                      >> 8U))),5);
    bufp->chgCData(oldp+79,((0x3fU & vlSelfRef.alarm_date_i)),6);
    bufp->chgCData(oldp+80,((0x3fU & vlSelfRef.date_i)),6);
    bufp->chgCData(oldp+81,((0x1fU & (vlSelfRef.date_i 
                                      >> 8U))),5);
    bufp->chgSData(oldp+82,((0x3fffU & (vlSelfRef.date_i 
                                        >> 0x10U))),14);
}

void Vrtc_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root__trace_cleanup\n"); );
    // Init
    Vrtc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrtc_top___024root*>(voidSelf);
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
