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
    VL_IN8(clk,0,0);
    VL_OUT8(out_valid,0,0);
    CData/*7:0*/ Processor__DOT__pc;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(z,31,0);
    IData/*31:0*/ Processor__DOT__inst;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 512> Processor__DOT__regs;
    VlUnpacked<IData/*31:0*/, 256> Processor__DOT__memory;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
