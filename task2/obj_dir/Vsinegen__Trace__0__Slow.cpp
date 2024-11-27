// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsinegen__Syms.h"


VL_ATTR_COLD void Vsinegen___024root__trace_init_sub__TOP__0(Vsinegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinegen___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"incr", false,-1, 7,0);
    tracep->declBus(c+2,"offset", false,-1, 7,0);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"doutOffset", false,-1, 7,0);
    tracep->pushNamePrefix("sinegen ");
    tracep->declBus(c+10,"INCR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"incr", false,-1, 7,0);
    tracep->declBus(c+2,"offset", false,-1, 7,0);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"doutOffset", false,-1, 7,0);
    tracep->declBus(c+8,"address1", false,-1, 7,0);
    tracep->declBus(c+9,"addressOffset", false,-1, 7,0);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+10,"INCR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"incr", false,-1, 7,0);
    tracep->declBus(c+2,"offset", false,-1, 7,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+8,"countIncr", false,-1, 7,0);
    tracep->declBus(c+9,"countOffset", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRom ");
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBus(c+8,"addr1", false,-1, 7,0);
    tracep->declBus(c+9,"addr2", false,-1, 7,0);
    tracep->declBus(c+6,"dout1", false,-1, 7,0);
    tracep->declBus(c+7,"dout2", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsinegen___024root__trace_init_top(Vsinegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinegen___024root__trace_init_top\n"); );
    // Body
    Vsinegen___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsinegen___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsinegen___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsinegen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsinegen___024root__trace_register(Vsinegen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinegen___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsinegen___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsinegen___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsinegen___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsinegen___024root__trace_full_sub_0(Vsinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsinegen___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinegen___024root__trace_full_top_0\n"); );
    // Init
    Vsinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsinegen___024root*>(voidSelf);
    Vsinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsinegen___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsinegen___024root__trace_full_sub_0(Vsinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsinegen___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->incr),8);
    bufp->fullCData(oldp+2,(vlSelf->offset),8);
    bufp->fullBit(oldp+3,(vlSelf->rst));
    bufp->fullBit(oldp+4,(vlSelf->en));
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullCData(oldp+6,(vlSelf->dout1),8);
    bufp->fullCData(oldp+7,(vlSelf->doutOffset),8);
    bufp->fullCData(oldp+8,(vlSelf->sinegen__DOT__address1),8);
    bufp->fullCData(oldp+9,(vlSelf->sinegen__DOT__addressOffset),8);
    bufp->fullIData(oldp+10,(8U),32);
}
