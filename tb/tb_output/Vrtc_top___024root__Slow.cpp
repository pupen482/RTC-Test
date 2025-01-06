// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtc_top.h for the primary calling header

#include "Vrtc_top__pch.h"
#include "Vrtc_top__Syms.h"
#include "Vrtc_top___024root.h"

void Vrtc_top___024root___ctor_var_reset(Vrtc_top___024root* vlSelf);

Vrtc_top___024root::Vrtc_top___024root(Vrtc_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrtc_top___024root___ctor_var_reset(this);
}

void Vrtc_top___024root___configure_coverage(Vrtc_top___024root* vlSelf, bool first);

void Vrtc_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vrtc_top___024root___configure_coverage(this, first);
}

Vrtc_top___024root::~Vrtc_top___024root() {
}

// Coverage
void Vrtc_top___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
