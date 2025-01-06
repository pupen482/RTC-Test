// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtc_top.h for the primary calling header

#include "Vrtc_top__pch.h"
#include "Vrtc_top__Syms.h"
#include "Vrtc_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__ico(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtc_top___024root___eval_triggers__ico(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtc_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vrtc_top___024root___ico_sequent__TOP__0(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___ico_sequent__TOP__0\n"); );
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtc_top___024root___dump_triggers__act(Vrtc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtc_top___024root___eval_triggers__act(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.rstn_i)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rstn_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rstn_i__0 = vlSelfRef.rstn_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtc_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vrtc_top___024root___nba_sequent__TOP__0(Vrtc_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtc_top___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en = 0;
    CData/*0:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig = 0;
    IData/*16:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer = 0;
    SData/*15:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter = 0;
    CData/*7:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds = 0;
    CData/*7:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes = 0;
    CData/*5:0*/ __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours = 0;
    CData/*5:0*/ __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day = 0;
    CData/*4:0*/ __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month = 0;
    SData/*13:0*/ __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year = 0;
    // Body
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month 
        = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day;
    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes;
    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
        = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds;
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.clock_update_i) {
            ++(vlSymsp->__Vcoverage[540]);
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter 
                = ((IData)(vlSelfRef.init_sec_cnt_i) 
                   << 5U);
        } else {
            if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) {
                ++(vlSymsp->__Vcoverage[538]);
                __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter = 0U;
            } else {
                __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter)));
                ++(vlSymsp->__Vcoverage[539]);
            }
            ++(vlSymsp->__Vcoverage[541]);
        }
        ++(vlSymsp->__Vcoverage[543]);
    } else {
        ++(vlSymsp->__Vcoverage[542]);
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter = 0U;
    }
    ++(vlSymsp->__Vcoverage[544]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.date_update_i) {
            ++(vlSymsp->__Vcoverage[601]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month 
                = (0x1fU & (vlSelfRef.date_i >> 8U));
        } else if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                    & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year))) {
            ++(vlSymsp->__Vcoverage[600]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month = 1U;
        } else if ((((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                     & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month)) 
                    & (9U != (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))))) {
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month 
                = ((0x10U & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))));
            ++(vlSymsp->__Vcoverage[599]);
        } else if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                    & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month))) {
            ++(vlSymsp->__Vcoverage[597]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month = 0x10U;
        } else {
            ++(vlSymsp->__Vcoverage[598]);
        }
        ++(vlSymsp->__Vcoverage[603]);
    } else {
        ++(vlSymsp->__Vcoverage[602]);
        __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month = 1U;
    }
    ++(vlSymsp->__Vcoverage[604]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.date_update_i) {
            ++(vlSymsp->__Vcoverage[593]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day 
                = (0x3fU & vlSelfRef.date_i);
        } else if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                    & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month))) {
            ++(vlSymsp->__Vcoverage[592]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day = 1U;
        } else if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                    & (9U != (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day))))) {
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day 
                = ((0x30U & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day))));
            ++(vlSymsp->__Vcoverage[591]);
        } else if (vlSelfRef.rtc_top__DOT__s_rtc_update_day) {
            ++(vlSymsp->__Vcoverage[589]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day 
                = (0x30U & (((IData)(1U) + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day) 
                                            >> 4U)) 
                            << 4U));
        } else {
            ++(vlSymsp->__Vcoverage[590]);
        }
        ++(vlSymsp->__Vcoverage[595]);
    } else {
        ++(vlSymsp->__Vcoverage[594]);
        __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day = 1U;
    }
    ++(vlSymsp->__Vcoverage[596]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.date_update_i) {
            ++(vlSymsp->__Vcoverage[613]);
            __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                = (0x3fffU & (vlSelfRef.date_i >> 0x10U));
        } else if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
                    & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year))) {
            if ((9U != (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)))) {
                __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                    = ((0x3ff0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year)) 
                       | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))));
                ++(vlSymsp->__Vcoverage[609]);
            } else {
                __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                    = (0x3ff0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year));
                if ((9U != (0xfU & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                    >> 4U)))) {
                    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                        = ((0x3f0fU & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year)) 
                           | (0xf0U & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                           >> 4U)) 
                                       << 4U)));
                    ++(vlSymsp->__Vcoverage[607]);
                } else {
                    __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                        = (0x3f0fU & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year));
                    if ((9U != (0xfU & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                        >> 8U)))) {
                        __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                            = ((0x30ffU & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year)) 
                               | (0xf00U & (((IData)(1U) 
                                             + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                                >> 8U)) 
                                            << 8U)));
                        ++(vlSymsp->__Vcoverage[605]);
                    } else {
                        ++(vlSymsp->__Vcoverage[606]);
                        __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year 
                            = ((0xffU & (IData)(__Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year)) 
                               | (0x3000U & (((IData)(1U) 
                                              + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                                                 >> 0xcU)) 
                                             << 0xcU)));
                    }
                    ++(vlSymsp->__Vcoverage[608]);
                }
                ++(vlSymsp->__Vcoverage[610]);
            }
            ++(vlSymsp->__Vcoverage[611]);
        } else {
            ++(vlSymsp->__Vcoverage[612]);
        }
        ++(vlSymsp->__Vcoverage[615]);
    } else {
        ++(vlSymsp->__Vcoverage[614]);
        __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year = 0x2000U;
    }
    ++(vlSymsp->__Vcoverage[616]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.clock_update_i) {
            ++(vlSymsp->__Vcoverage[564]);
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
                = (0xffU & vlSelfRef.clock_i);
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
                = (0xffU & (vlSelfRef.clock_i >> 8U));
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours 
                = (0x3fU & (vlSelfRef.clock_i >> 0x10U));
        } else {
            if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) {
                if ((9U <= (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)))) {
                    ++(vlSymsp->__Vcoverage[545]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
                        = (0xf0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds));
                } else {
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
                        = ((0xf0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds)) 
                           | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds))));
                    ++(vlSymsp->__Vcoverage[546]);
                }
                if ((0x59U <= (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds))) {
                    ++(vlSymsp->__Vcoverage[549]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
                        = (0xfU & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds));
                } else if ((9U <= (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)))) {
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
                        = ((0xfU & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds)) 
                           | (0xf0U & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds) 
                                           >> 4U)) 
                                       << 4U)));
                    ++(vlSymsp->__Vcoverage[547]);
                } else {
                    ++(vlSymsp->__Vcoverage[548]);
                }
                ++(vlSymsp->__Vcoverage[550]);
            } else {
                ++(vlSymsp->__Vcoverage[551]);
            }
            if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes) {
                if ((9U <= (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)))) {
                    ++(vlSymsp->__Vcoverage[552]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
                        = (0xf0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes));
                } else {
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
                        = ((0xf0U & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes)) 
                           | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes))));
                    ++(vlSymsp->__Vcoverage[553]);
                }
                if ((0x59U <= (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes))) {
                    ++(vlSymsp->__Vcoverage[556]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
                        = (0xfU & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes));
                } else if ((9U <= (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)))) {
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
                        = ((0xfU & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes)) 
                           | (0xf0U & (((IData)(1U) 
                                        + ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                                           >> 4U)) 
                                       << 4U)));
                    ++(vlSymsp->__Vcoverage[554]);
                } else {
                    ++(vlSymsp->__Vcoverage[555]);
                }
                ++(vlSymsp->__Vcoverage[557]);
            } else {
                ++(vlSymsp->__Vcoverage[558]);
            }
            if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours) {
                if ((0x23U <= (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours))) {
                    ++(vlSymsp->__Vcoverage[561]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours = 0U;
                } else if ((9U <= (0xfU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)))) {
                    ++(vlSymsp->__Vcoverage[559]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours 
                        = (0x30U & (((IData)(1U) + 
                                     ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
                                      >> 4U)) << 4U));
                } else {
                    ++(vlSymsp->__Vcoverage[560]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours 
                        = ((0x30U & (IData)(__Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours)) 
                           | (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours))));
                }
                ++(vlSymsp->__Vcoverage[562]);
            } else {
                ++(vlSymsp->__Vcoverage[563]);
            }
            ++(vlSymsp->__Vcoverage[565]);
        }
        ++(vlSymsp->__Vcoverage[567]);
    } else {
        ++(vlSymsp->__Vcoverage[566]);
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours = 0U;
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds = 0U;
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes = 0U;
    }
    ++(vlSymsp->__Vcoverage[568]);
    if (vlSelfRef.rstn_i) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match;
    } else {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match = 0U;
    }
    ++(vlSymsp->__Vcoverage[522]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.event_flag_update_i) {
            if ((1U & (IData)(vlSelfRef.event_flag_i))) {
                ++(vlSymsp->__Vcoverage[501]);
                vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag 
                    = (2U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag));
            } else {
                ++(vlSymsp->__Vcoverage[502]);
            }
            if ((2U & (IData)(vlSelfRef.event_flag_i))) {
                ++(vlSymsp->__Vcoverage[503]);
                vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag 
                    = (1U & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag));
            } else {
                ++(vlSymsp->__Vcoverage[504]);
            }
            ++(vlSymsp->__Vcoverage[508]);
        } else if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) {
            ++(vlSymsp->__Vcoverage[507]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag 
                = (1U | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag));
        } else if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event) {
            ++(vlSymsp->__Vcoverage[505]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag 
                = (2U | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag));
        } else {
            ++(vlSymsp->__Vcoverage[506]);
        }
        ++(vlSymsp->__Vcoverage[510]);
    } else {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag = 0U;
    }
    ++(vlSymsp->__Vcoverage[511]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.calibre_update_i) {
            ++(vlSymsp->__Vcoverage[533]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre 
                = vlSelfRef.calibre_sec_cnt_i;
        } else {
            ++(vlSymsp->__Vcoverage[534]);
        }
        ++(vlSymsp->__Vcoverage[536]);
    } else {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre = 0x7fffU;
    }
    ++(vlSymsp->__Vcoverage[537]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.timer_update_i) {
            ++(vlSymsp->__Vcoverage[529]);
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en 
                = vlSelfRef.timer_enable_i;
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target 
                = vlSelfRef.timer_target_i;
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig 
                = vlSelfRef.timer_retrig_i;
            __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer = 0U;
        } else if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en) {
            if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match) {
                if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig) {
                    ++(vlSymsp->__Vcoverage[524]);
                } else {
                    ++(vlSymsp->__Vcoverage[523]);
                    __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en = 0U;
                }
                __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer = 0U;
                ++(vlSymsp->__Vcoverage[525]);
            } else {
                __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer));
                ++(vlSymsp->__Vcoverage[526]);
            }
            ++(vlSymsp->__Vcoverage[527]);
        } else {
            ++(vlSymsp->__Vcoverage[528]);
        }
        ++(vlSymsp->__Vcoverage[531]);
    } else {
        ++(vlSymsp->__Vcoverage[530]);
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target = 0U;
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer = 0U;
        __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig = 0U;
    }
    ++(vlSymsp->__Vcoverage[532]);
    if (vlSelfRef.rstn_i) {
        if (vlSelfRef.alarm_update_clock_i) {
            ++(vlSymsp->__Vcoverage[514]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable 
                = vlSelfRef.alarm_enable_i;
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds 
                = (0xffU & vlSelfRef.alarm_clock_i);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes 
                = (0xffU & (vlSelfRef.alarm_clock_i 
                            >> 8U));
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours 
                = (0x3fU & (vlSelfRef.alarm_clock_i 
                            >> 0x10U));
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask 
                = vlSelfRef.alarm_mask_i;
        } else if (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) {
            ++(vlSymsp->__Vcoverage[512]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[513]);
        }
        if (vlSelfRef.alarm_update_date_i) {
            ++(vlSymsp->__Vcoverage[515]);
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year 
                = (0x3fffU & (vlSelfRef.alarm_date_i 
                              >> 0x10U));
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month 
                = (0x1fU & (vlSelfRef.alarm_date_i 
                            >> 8U));
            vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day 
                = (0x3fU & vlSelfRef.alarm_date_i);
        } else {
            ++(vlSymsp->__Vcoverage[516]);
        }
        ++(vlSymsp->__Vcoverage[518]);
    } else {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month = 0U;
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day = 0U;
    }
    ++(vlSymsp->__Vcoverage[519]);
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter;
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month 
        = __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_month;
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day 
        = __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_day;
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year 
        = __Vdly__rtc_top__DOT__i_rtc_date__DOT__r_year;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_hours;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_minutes;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_seconds;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
        = __Vdly__rtc_top__DOT__i_rtc_clock__DOT__r_timer;
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
    if (((0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_year_century 
            = (0U == (0xffU & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year)));
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
    vlSelfRef.date_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year) 
                         << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month) 
                                       << 8U) | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day)));
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
    vlSelfRef.clock_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours) 
                          << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes) 
                                        << 8U) | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_match;
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
    vlSelfRef.event_flag_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_event_flag;
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre) 
           == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_counter));
    vlSelfRef.calibre_sec_cnt_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_sec_cnt_calibre;
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_retrig 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_retrig;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_timer_en 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en;
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match 
        = (vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer 
           == vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_target);
    vlSelfRef.timer_value_o = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer;
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__r_alarm_enable 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_enable;
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 2U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours))));
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds 
        = (1U & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                 | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds) 
                    == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds))));
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 1U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes))));
    vlSelfRef.alarm_clock_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_hours) 
                                << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_minutes) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_seconds)));
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 4U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month))));
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day 
        = (1U & (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                  >> 3U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day) 
                            == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_day))));
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
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year 
        = (IData)((((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_mask) 
                    >> 5U) | ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                              == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_year))));
    vlSelfRef.alarm_date_o = (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_year) 
                               << 0x10U) | (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_month) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_alarm_day)));
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_seconds 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_seconds) 
           & (0x59U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_seconds)));
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_match 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_timer_en) 
           & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_match));
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_hours 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_seconds 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_minutes 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes;
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_match_year 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_match 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_year) 
           & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_month) 
              & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_day) 
                 & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_hours) 
                    & ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_minutes) 
                       & (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_match_seconds))))));
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_minutes 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_minutes) 
           & (0x59U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_minutes)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_timer_event 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event;
    }
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
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_month 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month;
    }
    vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year 
        = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_month) 
           & (0x12U == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__r_month)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_update_hours 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours;
    }
    vlSelfRef.rtc_top__DOT__s_rtc_update_day = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_update_hours) 
                                                & (0x23U 
                                                   == (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__r_hours)));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT____Vtogcov__s_alarm_event 
            = vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event;
    }
    vlSelfRef.event_o = ((IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_alarm_event) 
                         | (IData)(vlSelfRef.rtc_top__DOT__i_rtc_clock__DOT__s_timer_event));
    if (((IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year) 
         ^ (IData)(vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.rtc_top__DOT__i_rtc_date__DOT____Vtogcov__s_end_of_year 
            = vlSelfRef.rtc_top__DOT__i_rtc_date__DOT__s_end_of_year;
    }
    if (((IData)(vlSelfRef.rtc_top__DOT__s_rtc_update_day) 
         ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__s_rtc_update_day))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.rtc_top__DOT____Vtogcov__s_rtc_update_day 
            = vlSelfRef.rtc_top__DOT__s_rtc_update_day;
    }
    if (((IData)(vlSelfRef.event_o) ^ (IData)(vlSelfRef.rtc_top__DOT____Vtogcov__event_o))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.rtc_top__DOT____Vtogcov__event_o 
            = vlSelfRef.event_o;
    }
}
