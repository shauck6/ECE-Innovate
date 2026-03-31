// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSamProcessor.h for the primary calling header

#include "VSamProcessor__pch.h"
#include "VSamProcessor___024root.h"

VL_ATTR_COLD void VSamProcessor___024root___eval_static(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSamProcessor___024root___eval_initial__TOP(VSamProcessor___024root* vlSelf);

VL_ATTR_COLD void VSamProcessor___024root___eval_initial(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___eval_initial\n"); );
    // Body
    VSamProcessor___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VSamProcessor___024root___eval_initial__TOP(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->Processor__DOT__memory)
                 , 0, ~0ULL);
    vlSelf->Processor__DOT__pc = 0U;
    vlSelf->out_valid = 0U;
}

VL_ATTR_COLD void VSamProcessor___024root___eval_final(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSamProcessor___024root___eval_settle(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSamProcessor___024root___dump_triggers__act(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSamProcessor___024root___dump_triggers__nba(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSamProcessor___024root___ctor_var_reset(VSamProcessor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSamProcessor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSamProcessor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->z = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->Processor__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->Processor__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Processor__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Processor__DOT__pc = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
