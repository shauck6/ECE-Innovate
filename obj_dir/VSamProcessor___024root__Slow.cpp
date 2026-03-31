// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSamProcessor.h for the primary calling header

#include "VSamProcessor__pch.h"
#include "VSamProcessor__Syms.h"
#include "VSamProcessor___024root.h"

void VSamProcessor___024root___ctor_var_reset(VSamProcessor___024root* vlSelf);

VSamProcessor___024root::VSamProcessor___024root(VSamProcessor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSamProcessor___024root___ctor_var_reset(this);
}

void VSamProcessor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSamProcessor___024root::~VSamProcessor___024root() {
}
