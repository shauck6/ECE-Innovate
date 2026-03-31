// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcessor.h for the primary calling header

#include "VProcessor__pch.h"
#include "VProcessor___024root.h"

void VProcessor___024root___eval_act(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval_act\n"); );
}

VL_INLINE_OPT void VProcessor___024root___nba_sequent__TOP__0(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__Processor__DOT__pc;
    __Vdly__Processor__DOT__pc = 0;
    SData/*8:0*/ __Vdlyvdim0__Processor__DOT__regs__v0;
    __Vdlyvdim0__Processor__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__Processor__DOT__regs__v0;
    __Vdlyvval__Processor__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Processor__DOT__regs__v0;
    __Vdlyvset__Processor__DOT__regs__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__Processor__DOT__regs__v1;
    __Vdlyvdim0__Processor__DOT__regs__v1 = 0;
    IData/*31:0*/ __Vdlyvval__Processor__DOT__regs__v1;
    __Vdlyvval__Processor__DOT__regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Processor__DOT__regs__v1;
    __Vdlyvset__Processor__DOT__regs__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__Processor__DOT__regs__v2;
    __Vdlyvdim0__Processor__DOT__regs__v2 = 0;
    IData/*31:0*/ __Vdlyvval__Processor__DOT__regs__v2;
    __Vdlyvval__Processor__DOT__regs__v2 = 0;
    CData/*0:0*/ __Vdlyvset__Processor__DOT__regs__v2;
    __Vdlyvset__Processor__DOT__regs__v2 = 0;
    // Body
    __Vdly__Processor__DOT__pc = vlSelf->Processor__DOT__pc;
    __Vdlyvset__Processor__DOT__regs__v0 = 0U;
    __Vdlyvset__Processor__DOT__regs__v1 = 0U;
    __Vdlyvset__Processor__DOT__regs__v2 = 0U;
    vlSelf->out_valid = 0U;
    if ((6U != (vlSelf->Processor__DOT__inst >> 0x1cU))) {
        if ((0xfU != (vlSelf->Processor__DOT__inst 
                      >> 0x1cU))) {
            if ((3U != (vlSelf->Processor__DOT__inst 
                        >> 0x1cU))) {
                if ((1U != (vlSelf->Processor__DOT__inst 
                            >> 0x1cU))) {
                    __Vdly__Processor__DOT__pc = (0xffU 
                                                  & ((IData)(vlSelf->Processor__DOT__pc) 
                                                     - (IData)(1U)));
                }
                if ((1U == (vlSelf->Processor__DOT__inst 
                            >> 0x1cU))) {
                    vlSelf->out_valid = 1U;
                }
            }
        }
    }
    if ((6U == (vlSelf->Processor__DOT__inst >> 0x1cU))) {
        __Vdlyvval__Processor__DOT__regs__v0 = (0x3fffU 
                                                & vlSelf->Processor__DOT__inst);
        __Vdlyvset__Processor__DOT__regs__v0 = 1U;
        __Vdlyvdim0__Processor__DOT__regs__v0 = (0x1ffU 
                                                 & (vlSelf->Processor__DOT__inst 
                                                    >> 0x12U));
    } else if ((0xfU == (vlSelf->Processor__DOT__inst 
                         >> 0x1cU))) {
        __Vdlyvval__Processor__DOT__regs__v1 = vlSelf->Processor__DOT__regs
            [(0x1ffU & vlSelf->Processor__DOT__inst)];
        __Vdlyvset__Processor__DOT__regs__v1 = 1U;
        __Vdlyvdim0__Processor__DOT__regs__v1 = (0x1ffU 
                                                 & (vlSelf->Processor__DOT__inst 
                                                    >> 0x12U));
    } else if ((3U == (vlSelf->Processor__DOT__inst 
                       >> 0x1cU))) {
        __Vdlyvval__Processor__DOT__regs__v2 = (vlSelf->Processor__DOT__regs
                                                [(0x1ffU 
                                                  & vlSelf->Processor__DOT__inst)] 
                                                + vlSelf->Processor__DOT__regs
                                                [(0x1ffU 
                                                  & (vlSelf->Processor__DOT__inst 
                                                     >> 9U))]);
        __Vdlyvset__Processor__DOT__regs__v2 = 1U;
        __Vdlyvdim0__Processor__DOT__regs__v2 = (0x1ffU 
                                                 & (vlSelf->Processor__DOT__inst 
                                                    >> 0x12U));
    } else if ((1U == (vlSelf->Processor__DOT__inst 
                       >> 0x1cU))) {
        vlSelf->z = vlSelf->Processor__DOT__regs[(0x1ffU 
                                                  & (vlSelf->Processor__DOT__inst 
                                                     >> 0x12U))];
    }
    if (__Vdlyvset__Processor__DOT__regs__v0) {
        vlSelf->Processor__DOT__regs[__Vdlyvdim0__Processor__DOT__regs__v0] 
            = __Vdlyvval__Processor__DOT__regs__v0;
    }
    if (__Vdlyvset__Processor__DOT__regs__v1) {
        vlSelf->Processor__DOT__regs[__Vdlyvdim0__Processor__DOT__regs__v1] 
            = __Vdlyvval__Processor__DOT__regs__v1;
    }
    if (__Vdlyvset__Processor__DOT__regs__v2) {
        vlSelf->Processor__DOT__regs[__Vdlyvdim0__Processor__DOT__regs__v2] 
            = __Vdlyvval__Processor__DOT__regs__v2;
    }
    vlSelf->Processor__DOT__inst = vlSelf->Processor__DOT__memory
        [vlSelf->Processor__DOT__pc];
    __Vdly__Processor__DOT__pc = (0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->Processor__DOT__pc)));
    vlSelf->Processor__DOT__pc = __Vdly__Processor__DOT__pc;
}

void VProcessor___024root___eval_nba(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VProcessor___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VProcessor___024root___eval_triggers__act(VProcessor___024root* vlSelf);

bool VProcessor___024root___eval_phase__act(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VProcessor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VProcessor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VProcessor___024root___eval_phase__nba(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VProcessor___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessor___024root___dump_triggers__nba(VProcessor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessor___024root___dump_triggers__act(VProcessor___024root* vlSelf);
#endif  // VL_DEBUG

void VProcessor___024root___eval(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VProcessor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Processor.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VProcessor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Processor.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VProcessor___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VProcessor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VProcessor___024root___eval_debug_assertions(VProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
