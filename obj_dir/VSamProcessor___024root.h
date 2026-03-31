// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSamProcessor.h for the primary calling header

#ifndef VERILATED_VSAMPROCESSOR___024ROOT_H_
#define VERILATED_VSAMPROCESSOR___024ROOT_H_  // guard

#include "verilated.h"


class VSamProcessor__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSamProcessor___024root final : public VerilatedModule {
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
    VSamProcessor__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSamProcessor___024root(VSamProcessor__Syms* symsp, const char* v__name);
    ~VSamProcessor___024root();
    VL_UNCOPYABLE(VSamProcessor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
