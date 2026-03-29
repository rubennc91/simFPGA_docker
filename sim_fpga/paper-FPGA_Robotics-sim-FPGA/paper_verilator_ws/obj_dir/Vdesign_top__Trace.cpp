// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdesign_top__Syms.h"


//======================

void Vdesign_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdesign_top* t = (Vdesign_top*)userthis;
    Vdesign_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vdesign_top::traceChgThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vdesign_top::traceChgThis__2(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp),8);
        vcdp->chgBit(c+9,(vlTOPp->design_top__DOT__centroid_calc__DOT__left));
        vcdp->chgBus(c+17,((0x1fffU & ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                                        ? ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
                                           - (IData)(vlTOPp->design_top__DOT__colorpxls_rght))
                                        : ((IData)(vlTOPp->design_top__DOT__colorpxls_rght) 
                                           - (IData)(vlTOPp->design_top__DOT__colorpxls_left))))),13);
        vcdp->chgBus(c+25,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel),16);
        vcdp->chgBus(c+33,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside),16);
        vcdp->chgBus(c+41,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside),16);
        vcdp->chgBit(c+49,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel));
        vcdp->chgBus(c+57,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit),2);
    }
}

void Vdesign_top::traceChgThis__3(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->design_top__DOT__color_filter__DOT__red_limit));
        vcdp->chgBit(c+73,(vlTOPp->design_top__DOT__color_filter__DOT__grn_limit));
        vcdp->chgBit(c+81,(vlTOPp->design_top__DOT__color_filter__DOT__blu_limit));
        vcdp->chgBit(c+89,(vlTOPp->design_top__DOT__color_filter__DOT__yel_limit));
        vcdp->chgBit(c+97,(vlTOPp->design_top__DOT__color_filter__DOT__cya_limit));
        vcdp->chgBit(c+105,(vlTOPp->design_top__DOT__color_filter__DOT__mag_limit));
        vcdp->chgBit(c+113,(vlTOPp->design_top__DOT__color_filter__DOT__gra_limit));
        vcdp->chgBit(c+121,((((((((IData)(vlTOPp->design_top__DOT__color_filter__DOT__gra_limit) 
                                  & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                     >> 0xbU)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                  >> 7U)) 
                                & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                   >> 3U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                              >> 0xaU)) 
                              & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                 >> 6U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                            >> 2U))));
        vcdp->chgBit(c+129,(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn));
        vcdp->chgBit(c+137,(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu));
        vcdp->chgBit(c+145,(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu));
        vcdp->chgBus(c+153,(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif),4);
        vcdp->chgBus(c+161,(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif),4);
        vcdp->chgBus(c+169,(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif),4);
        vcdp->chgBit(c+177,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))));
        vcdp->chgBit(c+185,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))));
        vcdp->chgBit(c+193,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))));
        vcdp->chgBit(c+201,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))));
        vcdp->chgBit(c+209,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))));
        vcdp->chgBit(c+217,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))));
    }
}

void Vdesign_top::traceChgThis__4(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+225,(vlTOPp->design_top__DOT__centroid_wire),8);
        vcdp->chgBus(c+233,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg),15);
        vcdp->chgBit(c+241,(vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg2));
        vcdp->chgBit(c+249,(vlTOPp->design_top__DOT__new_frame_proc));
        vcdp->chgBit(c+257,(vlTOPp->design_top__DOT__new_centroid_w));
        vcdp->chgBus(c+265,(vlTOPp->design_top__DOT__proximity_w),3);
        vcdp->chgBus(c+273,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [0U]),11);
        vcdp->chgBus(c+281,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [7U]),11);
        vcdp->chgBus(c+289,(vlTOPp->design_top__DOT__colorpxls),14);
        vcdp->chgBus(c+297,(vlTOPp->design_top__DOT__colorpxls_left),13);
        vcdp->chgBus(c+305,(vlTOPp->design_top__DOT__colorpxls_rght),13);
        vcdp->chgBus(c+313,(vlTOPp->design_top__DOT__colorpxls_bin012),13);
        vcdp->chgBus(c+321,(vlTOPp->design_top__DOT__colorpxls_bin567),13);
        vcdp->chgBus(c+329,(vlTOPp->design_top__DOT__colorpxls_bin01),13);
        vcdp->chgBus(c+337,(vlTOPp->design_top__DOT__colorpxls_bin67),13);
        vcdp->chgBus(c+345,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [1U]),11);
        vcdp->chgBus(c+353,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [2U]),11);
        vcdp->chgBus(c+361,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [3U]),11);
        vcdp->chgBus(c+369,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [4U]),11);
        vcdp->chgBus(c+377,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [5U]),11);
        vcdp->chgBus(c+385,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                            [6U]),11);
        vcdp->chgBus(c+393,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc),15);
        vcdp->chgBit(c+401,((0x9fU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col))));
        vcdp->chgBit(c+409,(((((0x10U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg)) 
                               & (0x90U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg))) 
                              & (8U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num))) 
                             & (0x70U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num)))));
        vcdp->chgBit(c+417,(vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg));
        vcdp->chgBus(c+425,(vlTOPp->design_top__DOT__color_filter__DOT__ind),32);
        vcdp->chgBus(c+433,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[0]),11);
        vcdp->chgBus(c+434,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[1]),11);
        vcdp->chgBus(c+435,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[2]),11);
        vcdp->chgBus(c+436,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[3]),11);
        vcdp->chgBus(c+437,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[4]),11);
        vcdp->chgBus(c+438,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[5]),11);
        vcdp->chgBus(c+439,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[6]),11);
        vcdp->chgBus(c+440,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[7]),11);
        vcdp->chgBus(c+497,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[0]),11);
        vcdp->chgBus(c+498,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[1]),11);
        vcdp->chgBus(c+499,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[2]),11);
        vcdp->chgBus(c+500,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[3]),11);
        vcdp->chgBus(c+501,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[4]),11);
        vcdp->chgBus(c+502,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[5]),11);
        vcdp->chgBus(c+503,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[6]),11);
        vcdp->chgBus(c+504,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[7]),11);
        vcdp->chgBus(c+561,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls),14);
        vcdp->chgBus(c+569,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left),13);
        vcdp->chgBus(c+577,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght),13);
        vcdp->chgBus(c+585,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012),13);
        vcdp->chgBus(c+593,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567),13);
        vcdp->chgBus(c+601,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01),13);
        vcdp->chgBus(c+609,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67),13);
        vcdp->chgBus(c+617,(vlTOPp->design_top__DOT__color_filter__DOT__col),8);
        vcdp->chgBus(c+625,(vlTOPp->design_top__DOT__color_filter__DOT__col_rg),8);
        vcdp->chgBus(c+633,((0xffU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                      - (IData)(0x10U)))),8);
        vcdp->chgBus(c+641,((7U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                    - (IData)(0x10U)) 
                                   >> 4U))),3);
        vcdp->chgBus(c+649,(vlTOPp->design_top__DOT__color_filter__DOT__hist_bin_rg),3);
        vcdp->chgBus(c+657,(vlTOPp->design_top__DOT__color_filter__DOT__row_num),7);
        vcdp->chgBit(c+665,(vlTOPp->design_top__DOT__color_filter__DOT__processing));
        vcdp->chgBus(c+673,(vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg),12);
        vcdp->chgBit(c+681,(vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg1));
        vcdp->chgBus(c+689,((0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                        >> 1U))),13);
        vcdp->chgBus(c+697,((0x3ffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                       >> 4U))),13);
        vcdp->chgBus(c+705,(((0x1800U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                              ? 7U : ((0x1000U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                       ? 6U : ((0xf00U 
                                                <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                ? 5U
                                                : (
                                                   (0xc00U 
                                                    <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                    ? 4U
                                                    : 
                                                   ((0x700U 
                                                     <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                     ? 3U
                                                     : 
                                                    ((0x300U 
                                                      <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                      ? 3U
                                                      : 
                                                     ((0x80U 
                                                       <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                       ? 3U
                                                       : 0U)))))))),3);
        vcdp->chgBus(c+713,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left),16);
        vcdp->chgBus(c+721,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght),16);
        vcdp->chgBit(c+729,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj));
        vcdp->chgBus(c+737,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt),4);
        vcdp->chgBit(c+745,((0xfU == (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt))));
        vcdp->chgBus(c+753,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid),8);
        vcdp->chgBit(c+761,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left));
        vcdp->chgBit(c+769,((0U != (IData)(vlTOPp->design_top__DOT__centroid_wire))));
    }
}

void Vdesign_top::traceChgThis__5(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+777,(((IData)(vlTOPp->design_top__DOT__color_filter__DOT__color_threshold)
                              ? (IData)(vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg)
                              : 0U)),12);
    }
}

void Vdesign_top::traceChgThis__6(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+785,(vlTOPp->design_top__DOT__doutImg2Filt),12);
        vcdp->chgBus(c+793,((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                     >> 8U))),4);
        vcdp->chgBus(c+801,((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                     >> 4U))),4);
        vcdp->chgBus(c+809,((0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt))),4);
        vcdp->chgBus(c+817,(((0x30U & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                       >> 6U)) | ((0xcU 
                                                   & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                      >> 4U)) 
                                                  | (3U 
                                                     & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                        >> 2U))))),6);
        vcdp->chgBit(c+825,(vlTOPp->design_top__DOT__color_filter__DOT__color_threshold));
    }
}

void Vdesign_top::traceChgThis__7(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+833,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl),15);
        vcdp->chgBit(c+841,((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))));
    }
}

void Vdesign_top::traceChgThis__8(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+849,(vlTOPp->clk));
        vcdp->chgBit(c+857,(vlTOPp->rst));
        vcdp->chgBit(c+865,(vlTOPp->wea));
        vcdp->chgBus(c+873,(vlTOPp->addrin),15);
        vcdp->chgBus(c+881,(vlTOPp->datain),12);
        vcdp->chgBus(c+889,(vlTOPp->addrout),15);
        vcdp->chgBus(c+897,(vlTOPp->wRgbfilter),3);
        vcdp->chgBit(c+905,(vlTOPp->capture_newframe));
        vcdp->chgBus(c+913,(vlTOPp->dataout),12);
        vcdp->chgBus(c+921,(vlTOPp->leds),8);
        vcdp->chgBus(c+929,(vlTOPp->centroid_nop),8);
        vcdp->chgBit(c+937,(vlTOPp->new_centroid));
        vcdp->chgBus(c+945,(vlTOPp->proximity),3);
        vcdp->chgBus(c+953,(vlTOPp->motor_dps_left_o),16);
        vcdp->chgBus(c+961,(vlTOPp->motor_dps_rght_o),16);
    }
}
