// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROCESSOR__SYMS_H_
#define VERILATED_VPROCESSOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VProcessor.h"

// INCLUDE MODULE CLASSES
#include "VProcessor___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VProcessor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VProcessor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VProcessor___024root           TOP;

    // CONSTRUCTORS
    VProcessor__Syms(VerilatedContext* contextp, const char* namep, VProcessor* modelp);
    ~VProcessor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
