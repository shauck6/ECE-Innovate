// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSAMPROCESSOR__SYMS_H_
#define VERILATED_VSAMPROCESSOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSamProcessor.h"

// INCLUDE MODULE CLASSES
#include "VSamProcessor___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSamProcessor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSamProcessor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSamProcessor___024root        TOP;

    // CONSTRUCTORS
    VSamProcessor__Syms(VerilatedContext* contextp, const char* namep, VSamProcessor* modelp);
    ~VSamProcessor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
