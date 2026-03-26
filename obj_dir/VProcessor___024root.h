// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcessor.h for the primary calling header

#ifndef VERILATED_VPROCESSOR___024ROOT_H_
#define VERILATED_VPROCESSOR___024ROOT_H_  // guard

#include "verilated.h"


class VProcessor__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcessor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(x,31,0);
    VL_IN(y,31,0);
    VL_OUT(z,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VProcessor__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcessor___024root(VProcessor__Syms* symsp, const char* v__name);
    ~VProcessor___024root();
    VL_UNCOPYABLE(VProcessor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
