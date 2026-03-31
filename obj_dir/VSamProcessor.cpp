// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSamProcessor__pch.h"

//============================================================
// Constructors

VSamProcessor::VSamProcessor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSamProcessor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , out_valid{vlSymsp->TOP.out_valid}
    , z{vlSymsp->TOP.z}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSamProcessor::VSamProcessor(const char* _vcname__)
    : VSamProcessor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSamProcessor::~VSamProcessor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSamProcessor___024root___eval_debug_assertions(VSamProcessor___024root* vlSelf);
#endif  // VL_DEBUG
void VSamProcessor___024root___eval_static(VSamProcessor___024root* vlSelf);
void VSamProcessor___024root___eval_initial(VSamProcessor___024root* vlSelf);
void VSamProcessor___024root___eval_settle(VSamProcessor___024root* vlSelf);
void VSamProcessor___024root___eval(VSamProcessor___024root* vlSelf);

void VSamProcessor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSamProcessor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSamProcessor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSamProcessor___024root___eval_static(&(vlSymsp->TOP));
        VSamProcessor___024root___eval_initial(&(vlSymsp->TOP));
        VSamProcessor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSamProcessor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSamProcessor::eventsPending() { return false; }

uint64_t VSamProcessor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSamProcessor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSamProcessor___024root___eval_final(VSamProcessor___024root* vlSelf);

VL_ATTR_COLD void VSamProcessor::final() {
    VSamProcessor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSamProcessor::hierName() const { return vlSymsp->name(); }
const char* VSamProcessor::modelName() const { return "VSamProcessor"; }
unsigned VSamProcessor::threads() const { return 1; }
void VSamProcessor::prepareClone() const { contextp()->prepareClone(); }
void VSamProcessor::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VSamProcessor::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VSamProcessor::trace()' called on model that was Verilated without --trace option");
}
