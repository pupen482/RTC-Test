// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtc_top.h for the primary calling header

#ifndef VERILATED_VRTC_TOP___024ROOT_H_
#define VERILATED_VRTC_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vrtc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtc_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rstn_i,0,0);
        VL_IN8(date_update_i,0,0);
        VL_IN8(clock_update_i,0,0);
        VL_IN8(calibre_update_i,0,0);
        VL_IN8(timer_update_i,0,0);
        VL_IN8(timer_enable_i,0,0);
        VL_IN8(timer_retrig_i,0,0);
        VL_IN8(alarm_enable_i,0,0);
        VL_IN8(alarm_mask_i,5,0);
        VL_IN8(alarm_update_clock_i,0,0);
        VL_IN8(alarm_update_date_i,0,0);
        VL_IN8(event_flag_update_i,0,0);
        VL_IN8(event_flag_i,1,0);
        VL_OUT8(event_flag_o,1,0);
        VL_OUT8(event_o,0,0);
        CData/*0:0*/ rtc_top__DOT__s_rtc_update_day;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__clk_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__rstn_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__date_update_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__clock_update_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__calibre_update_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__timer_update_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__timer_enable_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__timer_retrig_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__alarm_enable_i;
        CData/*5:0*/ rtc_top__DOT____Vtogcov__alarm_mask_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__alarm_update_clock_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__alarm_update_date_i;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__event_flag_update_i;
        CData/*1:0*/ rtc_top__DOT____Vtogcov__event_flag_i;
        CData/*1:0*/ rtc_top__DOT____Vtogcov__event_flag_o;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__event_o;
        CData/*0:0*/ rtc_top__DOT____Vtogcov__s_rtc_update_day;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_seconds;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_minutes;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_hours;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours;
        CData/*4:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_update_hours;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_timer_event;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_timer_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_year;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_month;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_day;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_hours;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
        CData/*1:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_event_flag;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_seconds;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_minutes;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_hours;
    };
    struct {
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_seconds;
        CData/*7:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_minutes;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_hours;
        CData/*4:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_month;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_day;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_mask;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable;
        CData/*4:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_month;
        CData/*5:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_day;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_month;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_day;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en;
        CData/*0:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig;
        CData/*1:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_event_flag;
        CData/*5:0*/ rtc_top__DOT__i_rtc_date__DOT__r_day;
        CData/*4:0*/ rtc_top__DOT__i_rtc_date__DOT__r_month;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT__s_end_of_month;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT__s_end_of_year;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT__s_year_400;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT__s_year_leap;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT__s_year_div_4;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_400;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_leap;
        CData/*0:0*/ rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_div_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rstn_i__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(init_sec_cnt_i,9,0);
        VL_IN16(calibre_sec_cnt_i,15,0);
        VL_OUT16(calibre_sec_cnt_o,15,0);
        SData/*9:0*/ rtc_top__DOT____Vtogcov__init_sec_cnt_i;
        SData/*15:0*/ rtc_top__DOT____Vtogcov__calibre_sec_cnt_i;
        SData/*15:0*/ rtc_top__DOT____Vtogcov__calibre_sec_cnt_o;
        SData/*13:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year;
        SData/*15:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter;
        SData/*15:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre;
        SData/*13:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_year;
        SData/*13:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_year;
        SData/*15:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_counter;
        SData/*15:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_sec_cnt_calibre;
        SData/*13:0*/ rtc_top__DOT__i_rtc_date__DOT__r_year;
        VL_IN(date_i,31,0);
        VL_OUT(date_o,31,0);
        VL_OUT(clock_o,21,0);
        VL_IN(clock_i,21,0);
        VL_IN(timer_target_i,16,0);
        VL_OUT(timer_value_o,16,0);
    };
    struct {
        VL_IN(alarm_clock_i,21,0);
        VL_OUT(alarm_clock_o,21,0);
        VL_IN(alarm_date_i,31,0);
        VL_OUT(alarm_date_o,31,0);
        IData/*31:0*/ rtc_top__DOT____Vtogcov__date_i;
        IData/*31:0*/ rtc_top__DOT____Vtogcov__date_o;
        IData/*21:0*/ rtc_top__DOT____Vtogcov__clock_o;
        IData/*21:0*/ rtc_top__DOT____Vtogcov__clock_i;
        IData/*16:0*/ rtc_top__DOT____Vtogcov__timer_target_i;
        IData/*16:0*/ rtc_top__DOT____Vtogcov__timer_value_o;
        IData/*21:0*/ rtc_top__DOT____Vtogcov__alarm_clock_i;
        IData/*21:0*/ rtc_top__DOT____Vtogcov__alarm_clock_o;
        IData/*31:0*/ rtc_top__DOT____Vtogcov__alarm_date_i;
        IData/*31:0*/ rtc_top__DOT____Vtogcov__alarm_date_o;
        IData/*16:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_timer;
        IData/*16:0*/ rtc_top__DOT__i_rtc_clock__DOT__r_timer_target;
        IData/*16:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer;
        IData/*16:0*/ rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_target;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrtc_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtc_top___024root(Vrtc_top__Syms* symsp, const char* v__name);
    ~Vrtc_top___024root();
    VL_UNCOPYABLE(Vrtc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
