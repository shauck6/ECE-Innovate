// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcessor__pch.h"

//============================================================
// Constructors

VProcessor::VProcessor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcessor__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , z{vlSymsp->TOP.z}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VProcessor::VProcessor(const char* _vcname__)
    : VProcessor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcessor::~VProcessor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcessor___024root___eval_debug_assertions(VProcessor___024root* vlSelf);
#endif  // VL_DEBUG
void VProcessor___024root___eval_static(VProcessor___024root* vlSelf);
void VProcessor___024root___eval_initial(VProcessor___024root* vlSelf);
void VProcessor___024root___eval_settle(VProcessor___024root* vlSelf);
void VProcessor___024root___eval(VProcessor___024root* vlSelf);

void VProcessor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcessor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProcessor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VProcessor___024root___eval_static(&(vlSymsp->TOP));
        VProcessor___024root___eval_initial(&(vlSymsp->TOP));
        VProcessor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VProcessor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VProcessor::eventsPending() { return false; }

uint64_t VProcessor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VProcessor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VProcessor___024root___eval_final(VProcessor___024root* vlSelf);

VL_ATTR_COLD void VProcessor::final() {
    VProcessor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcessor::hierName() const { return vlSymsp->name(); }
const char* VProcessor::modelName() const { return "VProcessor"; }
unsigned VProcessor::threads() const { return 1; }
void VProcessor::prepareClone() const { contextp()->prepareClone(); }
void VProcessor::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VProcessor::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VProcessor::trace()' called on model that was Verilated without --trace option");
}
