// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcessor.h for the primary calling header

#include "VProcessor__pch.h"
#include "VProcessor__Syms.h"
#include "VProcessor___024root.h"

void VProcessor___024root___ctor_var_reset(VProcessor___024root* vlSelf);

VProcessor___024root::VProcessor___024root(VProcessor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VProcessor___024root___ctor_var_reset(this);
}

void VProcessor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VProcessor___024root::~VProcessor___024root() {
}
