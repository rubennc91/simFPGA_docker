// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdesign_top__Syms.h"


//======================

void Vdesign_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vdesign_top::traceInit, &Vdesign_top::traceFull, &Vdesign_top::traceChg, this);
}
void Vdesign_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vdesign_top* t = (Vdesign_top*)userthis;
    Vdesign_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vdesign_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdesign_top* t = (Vdesign_top*)userthis;
    Vdesign_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vdesign_top::traceInitThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vdesign_top::traceFullThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vdesign_top::traceInitThis__1(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+849,"clk", false,-1);
        vcdp->declBit(c+857,"rst", false,-1);
        vcdp->declBit(c+865,"wea", false,-1);
        vcdp->declBus(c+873,"addrin", false,-1, 14,0);
        vcdp->declBus(c+881,"datain", false,-1, 11,0);
        vcdp->declBus(c+889,"addrout", false,-1, 14,0);
        vcdp->declBus(c+897,"wRgbfilter", false,-1, 2,0);
        vcdp->declBit(c+905,"capture_newframe", false,-1);
        vcdp->declBus(c+913,"dataout", false,-1, 11,0);
        vcdp->declBus(c+921,"leds", false,-1, 7,0);
        vcdp->declBus(c+929,"centroid_nop", false,-1, 7,0);
        vcdp->declBit(c+937,"new_centroid", false,-1);
        vcdp->declBus(c+945,"proximity", false,-1, 2,0);
        vcdp->declBus(c+953,"motor_dps_left_o", false,-1, 15,0);
        vcdp->declBus(c+961,"motor_dps_rght_o", false,-1, 15,0);
        vcdp->declBus(c+969,"design_top c_img_cols", false,-1, 31,0);
        vcdp->declBus(c+977,"design_top c_img_rows", false,-1, 31,0);
        vcdp->declBus(c+985,"design_top c_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top c_nb_img_cols", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top c_nb_img_rows", false,-1, 31,0);
        vcdp->declBus(c+1009,"design_top c_nb_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1017,"design_top c_nb_buf", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top c_nb_leds", false,-1, 31,0);
        vcdp->declBus(c+1025,"design_top c_nb_dps_motor", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top c_nb_cnt", false,-1, 31,0);
        vcdp->declBit(c+849,"design_top clk", false,-1);
        vcdp->declBit(c+857,"design_top rst", false,-1);
        vcdp->declBit(c+865,"design_top wea", false,-1);
        vcdp->declBus(c+873,"design_top addrin", false,-1, 14,0);
        vcdp->declBus(c+881,"design_top datain", false,-1, 11,0);
        vcdp->declBus(c+889,"design_top addrout", false,-1, 14,0);
        vcdp->declBus(c+897,"design_top wRgbfilter", false,-1, 2,0);
        vcdp->declBit(c+905,"design_top capture_newframe", false,-1);
        vcdp->declBus(c+913,"design_top dataout", false,-1, 11,0);
        vcdp->declBus(c+921,"design_top leds", false,-1, 7,0);
        vcdp->declBus(c+929,"design_top centroid_nop", false,-1, 7,0);
        vcdp->declBit(c+937,"design_top new_centroid", false,-1);
        vcdp->declBus(c+945,"design_top proximity", false,-1, 2,0);
        vcdp->declBus(c+953,"design_top motor_dps_left_o", false,-1, 15,0);
        vcdp->declBus(c+961,"design_top motor_dps_rght_o", false,-1, 15,0);
        vcdp->declBus(c+225,"design_top centroid_wire", false,-1, 7,0);
        vcdp->declBus(c+833,"design_top addrImg2Filt", false,-1, 14,0);
        vcdp->declBus(c+785,"design_top doutImg2Filt", false,-1, 11,0);
        vcdp->declBus(c+233,"design_top procAddr", false,-1, 14,0);
        vcdp->declBus(c+777,"design_top procPixel", false,-1, 11,0);
        vcdp->declBit(c+241,"design_top procWe", false,-1);
        vcdp->declBus(c+1041,"design_top pxColRet", false,-1, 6,0);
        vcdp->declBit(c+249,"design_top new_frame_proc", false,-1);
        vcdp->declBit(c+257,"design_top new_centroid_w", false,-1);
        vcdp->declBus(c+265,"design_top proximity_w", false,-1, 2,0);
        vcdp->declBus(c+1025,"design_top c_outframe_cols", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top c_outframe_rows", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top c_inframe_cols", false,-1, 31,0);
        vcdp->declBus(c+1057,"design_top c_inframe_rows", false,-1, 31,0);
        vcdp->declBus(c+1065,"design_top c_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+1073,"design_top c_nb_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top c_nb_inframe_cols", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top c_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top c_nb_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1089,"design_top c_nb_hist_val", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top c_nb_centroid", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top c_nb_prox", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top c_min_colorpxls", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top c_nb_buf_red", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top c_nb_buf_green", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top c_nb_buf_blue", false,-1, 31,0);
        vcdp->declBus(c+273,"design_top colorpxls_bin0", false,-1, 10,0);
        vcdp->declBus(c+281,"design_top colorpxls_bin7", false,-1, 10,0);
        vcdp->declBus(c+289,"design_top colorpxls", false,-1, 13,0);
        vcdp->declBus(c+297,"design_top colorpxls_left", false,-1, 12,0);
        vcdp->declBus(c+305,"design_top colorpxls_rght", false,-1, 12,0);
        vcdp->declBus(c+313,"design_top colorpxls_bin012", false,-1, 12,0);
        vcdp->declBus(c+321,"design_top colorpxls_bin567", false,-1, 12,0);
        vcdp->declBus(c+329,"design_top colorpxls_bin01", false,-1, 12,0);
        vcdp->declBus(c+337,"design_top colorpxls_bin67", false,-1, 12,0);
        vcdp->declBus(c+969,"design_top frame_buff_in c_img_cols", false,-1, 31,0);
        vcdp->declBus(c+977,"design_top frame_buff_in c_img_rows", false,-1, 31,0);
        vcdp->declBus(c+985,"design_top frame_buff_in c_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1009,"design_top frame_buff_in c_nb_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_in c_nb_buf_red", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_in c_nb_buf_green", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_in c_nb_buf_blue", false,-1, 31,0);
        vcdp->declBus(c+1017,"design_top frame_buff_in c_nb_buf", false,-1, 31,0);
        vcdp->declBit(c+849,"design_top frame_buff_in clk", false,-1);
        vcdp->declBit(c+865,"design_top frame_buff_in wea", false,-1);
        vcdp->declBus(c+873,"design_top frame_buff_in addra", false,-1, 14,0);
        vcdp->declBus(c+881,"design_top frame_buff_in dina", false,-1, 11,0);
        vcdp->declBus(c+833,"design_top frame_buff_in addrb", false,-1, 14,0);
        vcdp->declBus(c+785,"design_top frame_buff_in doutb", false,-1, 11,0);
        vcdp->declBus(c+969,"design_top color_filter c_img_cols", false,-1, 31,0);
        vcdp->declBus(c+977,"design_top color_filter c_img_rows", false,-1, 31,0);
        vcdp->declBus(c+985,"design_top color_filter c_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1009,"design_top color_filter c_nb_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top color_filter c_nb_cols", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top color_filter c_nb_rows", false,-1, 31,0);
        vcdp->declBus(c+1025,"design_top color_filter c_outframe_cols", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top color_filter c_outframe_rows", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top color_filter c_inframe_cols", false,-1, 31,0);
        vcdp->declBus(c+1057,"design_top color_filter c_inframe_rows", false,-1, 31,0);
        vcdp->declBus(c+1065,"design_top color_filter c_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+1073,"design_top color_filter c_nb_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top color_filter c_nb_inframe_cols", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top color_filter c_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top color_filter c_nb_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1089,"design_top color_filter c_nb_hist_val", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top color_filter c_min_colorpixels", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top color_filter c_nb_buf_red", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top color_filter c_nb_buf_green", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top color_filter c_nb_buf_blue", false,-1, 31,0);
        vcdp->declBus(c+1017,"design_top color_filter c_nb_buf", false,-1, 31,0);
        vcdp->declBit(c+857,"design_top color_filter rst", false,-1);
        vcdp->declBit(c+849,"design_top color_filter clk", false,-1);
        vcdp->declBus(c+897,"design_top color_filter rgbfilter", false,-1, 2,0);
        vcdp->declBit(c+905,"design_top color_filter new_frame_i", false,-1);
        vcdp->declBus(c+785,"design_top color_filter orig_pxl", false,-1, 11,0);
        vcdp->declBus(c+833,"design_top color_filter orig_addr", false,-1, 14,0);
        vcdp->declBit(c+241,"design_top color_filter proc_we", false,-1);
        vcdp->declBus(c+777,"design_top color_filter proc_pxl", false,-1, 11,0);
        vcdp->declBus(c+233,"design_top color_filter proc_addr", false,-1, 14,0);
        vcdp->declBit(c+249,"design_top color_filter new_frame_proc_o", false,-1);
        vcdp->declBus(c+289,"design_top color_filter colorpxls_o", false,-1, 13,0);
        vcdp->declBus(c+273,"design_top color_filter colorpxls_bin0", false,-1, 10,0);
        vcdp->declBus(c+345,"design_top color_filter colorpxls_bin1", false,-1, 10,0);
        vcdp->declBus(c+353,"design_top color_filter colorpxls_bin2", false,-1, 10,0);
        vcdp->declBus(c+361,"design_top color_filter colorpxls_bin3", false,-1, 10,0);
        vcdp->declBus(c+369,"design_top color_filter colorpxls_bin4", false,-1, 10,0);
        vcdp->declBus(c+377,"design_top color_filter colorpxls_bin5", false,-1, 10,0);
        vcdp->declBus(c+385,"design_top color_filter colorpxls_bin6", false,-1, 10,0);
        vcdp->declBus(c+281,"design_top color_filter colorpxls_bin7", false,-1, 10,0);
        vcdp->declBus(c+297,"design_top color_filter colorpxls_left_o", false,-1, 12,0);
        vcdp->declBus(c+305,"design_top color_filter colorpxls_rght_o", false,-1, 12,0);
        vcdp->declBus(c+313,"design_top color_filter colorpxls_bin012_o", false,-1, 12,0);
        vcdp->declBus(c+321,"design_top color_filter colorpxls_bin567_o", false,-1, 12,0);
        vcdp->declBus(c+329,"design_top color_filter colorpxls_bin01_o", false,-1, 12,0);
        vcdp->declBus(c+337,"design_top color_filter colorpxls_bin67_o", false,-1, 12,0);
        vcdp->declBus(c+1089,"design_top color_filter c_msb_red", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top color_filter c_msb_blu", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top color_filter c_msb_grn", false,-1, 31,0);
        vcdp->declBus(c+833,"design_top color_filter cnt_pxl", false,-1, 14,0);
        vcdp->declBus(c+393,"design_top color_filter cnt_pxl_proc", false,-1, 14,0);
        vcdp->declBus(c+233,"design_top color_filter cnt_pxl_proc_rg", false,-1, 14,0);
        vcdp->declBit(c+841,"design_top color_filter end_pxl_cnt", false,-1);
        vcdp->declBit(c+401,"design_top color_filter end_ln", false,-1);
        vcdp->declBit(c+409,"design_top color_filter inner_frame", false,-1);
        vcdp->declBit(c+417,"design_top color_filter inner_frame_rg", false,-1);
        vcdp->declBus(c+793,"design_top color_filter red", false,-1, 3,0);
        vcdp->declBus(c+801,"design_top color_filter grn", false,-1, 3,0);
        vcdp->declBus(c+809,"design_top color_filter blu", false,-1, 3,0);
        vcdp->declBus(c+817,"design_top color_filter rgb222", false,-1, 5,0);
        vcdp->declBit(c+65,"design_top color_filter red_limit", false,-1);
        vcdp->declBit(c+73,"design_top color_filter grn_limit", false,-1);
        vcdp->declBit(c+81,"design_top color_filter blu_limit", false,-1);
        vcdp->declBit(c+89,"design_top color_filter yel_limit", false,-1);
        vcdp->declBit(c+97,"design_top color_filter cya_limit", false,-1);
        vcdp->declBit(c+105,"design_top color_filter mag_limit", false,-1);
        vcdp->declBit(c+113,"design_top color_filter gra_limit", false,-1);
        vcdp->declBit(c+825,"design_top color_filter color_threshold", false,-1);
        vcdp->declBit(c+121,"design_top color_filter whi_limit", false,-1);
        vcdp->declBit(c+129,"design_top color_filter red_gt_grn", false,-1);
        vcdp->declBit(c+137,"design_top color_filter red_gt_blu", false,-1);
        vcdp->declBit(c+145,"design_top color_filter grn_gt_blu", false,-1);
        vcdp->declBus(c+153,"design_top color_filter red_grn_absdif", false,-1, 3,0);
        vcdp->declBus(c+161,"design_top color_filter red_blu_absdif", false,-1, 3,0);
        vcdp->declBus(c+169,"design_top color_filter grn_blu_absdif", false,-1, 3,0);
        vcdp->declBus(c+1097,"design_top color_filter c_simil_limit", false,-1, 3,0);
        vcdp->declBus(c+1105,"design_top color_filter c_vdif_limit", false,-1, 3,0);
        vcdp->declBit(c+177,"design_top color_filter red_grn_simil", false,-1);
        vcdp->declBit(c+185,"design_top color_filter red_blu_simil", false,-1);
        vcdp->declBit(c+193,"design_top color_filter grn_blu_simil", false,-1);
        vcdp->declBit(c+201,"design_top color_filter red_grn_vdif", false,-1);
        vcdp->declBit(c+209,"design_top color_filter red_blu_vdif", false,-1);
        vcdp->declBit(c+217,"design_top color_filter grn_blu_vdif", false,-1);
        vcdp->declBus(c+1113,"design_top color_filter C_BLACK_PXL", false,-1, 14,0);
        vcdp->declBus(c+1121,"design_top color_filter C_BLACK_PXL_BUF", false,-1, 11,0);
        vcdp->declBus(c+425,"design_top color_filter ind", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+433+i*1,"design_top color_filter histogram_tmp", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+497+i*1,"design_top color_filter histogram", true,(i+0), 10,0);}}
        vcdp->declBus(c+561,"design_top color_filter colorpxls", false,-1, 13,0);
        vcdp->declBus(c+569,"design_top color_filter colorpxls_left", false,-1, 12,0);
        vcdp->declBus(c+577,"design_top color_filter colorpxls_rght", false,-1, 12,0);
        vcdp->declBus(c+585,"design_top color_filter colorpxls_bin012", false,-1, 12,0);
        vcdp->declBus(c+593,"design_top color_filter colorpxls_bin567", false,-1, 12,0);
        vcdp->declBus(c+601,"design_top color_filter colorpxls_bin01", false,-1, 12,0);
        vcdp->declBus(c+609,"design_top color_filter colorpxls_bin67", false,-1, 12,0);
        vcdp->declBus(c+617,"design_top color_filter col", false,-1, 7,0);
        vcdp->declBus(c+625,"design_top color_filter col_rg", false,-1, 7,0);
        vcdp->declBus(c+633,"design_top color_filter col_inframe", false,-1, 7,0);
        vcdp->declBus(c+641,"design_top color_filter hist_bin", false,-1, 2,0);
        vcdp->declBus(c+649,"design_top color_filter hist_bin_rg", false,-1, 2,0);
        vcdp->declBus(c+657,"design_top color_filter row_num", false,-1, 6,0);
        vcdp->declBit(c+665,"design_top color_filter processing", false,-1);
        vcdp->declBus(c+673,"design_top color_filter orig_pxl_rg", false,-1, 11,0);
        vcdp->declBit(c+681,"design_top color_filter proc_we_rg1", false,-1);
        vcdp->declBit(c+241,"design_top color_filter proc_we_rg2", false,-1);
        vcdp->declBus(c+969,"design_top centroid_calc c_img_cols", false,-1, 31,0);
        vcdp->declBus(c+977,"design_top centroid_calc c_img_rows", false,-1, 31,0);
        vcdp->declBus(c+985,"design_top centroid_calc c_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1009,"design_top centroid_calc c_nb_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top centroid_calc c_nb_cols", false,-1, 31,0);
        vcdp->declBus(c+1001,"design_top centroid_calc c_nb_rows", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top centroid_calc c_inframe_cols", false,-1, 31,0);
        vcdp->declBus(c+1057,"design_top centroid_calc c_inframe_rows", false,-1, 31,0);
        vcdp->declBus(c+1065,"design_top centroid_calc c_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+1073,"design_top centroid_calc c_nb_inframe_pxls", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top centroid_calc c_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top centroid_calc c_nb_hist_bins", false,-1, 31,0);
        vcdp->declBus(c+1089,"design_top centroid_calc c_nb_hist_val", false,-1, 31,0);
        vcdp->declBus(c+993,"design_top centroid_calc c_nb_centroid", false,-1, 31,0);
        vcdp->declBus(c+1081,"design_top centroid_calc c_nb_prox", false,-1, 31,0);
        vcdp->declBus(c+1049,"design_top centroid_calc c_min_colorpxls", false,-1, 31,0);
        vcdp->declBit(c+857,"design_top centroid_calc rst", false,-1);
        vcdp->declBit(c+849,"design_top centroid_calc clk", false,-1);
        vcdp->declBit(c+249,"design_top centroid_calc new_frame_proc_i", false,-1);
        vcdp->declBus(c+289,"design_top centroid_calc colorpxls_i", false,-1, 13,0);
        vcdp->declBus(c+273,"design_top centroid_calc colorpxls_bin0_i", false,-1, 10,0);
        vcdp->declBus(c+281,"design_top centroid_calc colorpxls_bin7_i", false,-1, 10,0);
        vcdp->declBus(c+297,"design_top centroid_calc colorpxls_left_i", false,-1, 12,0);
        vcdp->declBus(c+305,"design_top centroid_calc colorpxls_rght_i", false,-1, 12,0);
        vcdp->declBus(c+313,"design_top centroid_calc colorpxls_bin012_i", false,-1, 12,0);
        vcdp->declBus(c+321,"design_top centroid_calc colorpxls_bin567_i", false,-1, 12,0);
        vcdp->declBus(c+329,"design_top centroid_calc colorpxls_bin01_i", false,-1, 12,0);
        vcdp->declBus(c+337,"design_top centroid_calc colorpxls_bin67_i", false,-1, 12,0);
        vcdp->declBus(c+225,"design_top centroid_calc centroid_o", false,-1, 7,0);
        vcdp->declBit(c+257,"design_top centroid_calc new_centroid_o", false,-1);
        vcdp->declBus(c+265,"design_top centroid_calc proximity_o", false,-1, 2,0);
        vcdp->declBus(c+689,"design_top centroid_calc colorpxls_half", false,-1, 12,0);
        vcdp->declBus(c+697,"design_top centroid_calc colorpxls_div", false,-1, 12,0);
        vcdp->declBus(c+1,"design_top centroid_calc centroid_tmp", false,-1, 7,0);
        vcdp->declBus(c+705,"design_top centroid_calc proximity_tmp", false,-1, 2,0);
        vcdp->declBit(c+9,"design_top centroid_calc left", false,-1);
        vcdp->declBus(c+17,"design_top centroid_calc absdif_lft_rght", false,-1, 12,0);
        vcdp->declBus(c+969,"design_top frame_buff_out c_img_cols", false,-1, 31,0);
        vcdp->declBus(c+977,"design_top frame_buff_out c_img_rows", false,-1, 31,0);
        vcdp->declBus(c+985,"design_top frame_buff_out c_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1009,"design_top frame_buff_out c_nb_img_pxls", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_out c_nb_buf_red", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_out c_nb_buf_green", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top frame_buff_out c_nb_buf_blue", false,-1, 31,0);
        vcdp->declBus(c+1017,"design_top frame_buff_out c_nb_buf", false,-1, 31,0);
        vcdp->declBit(c+849,"design_top frame_buff_out clk", false,-1);
        vcdp->declBit(c+241,"design_top frame_buff_out wea", false,-1);
        vcdp->declBus(c+233,"design_top frame_buff_out addra", false,-1, 14,0);
        vcdp->declBus(c+777,"design_top frame_buff_out dina", false,-1, 11,0);
        vcdp->declBus(c+889,"design_top frame_buff_out addrb", false,-1, 14,0);
        vcdp->declBus(c+913,"design_top frame_buff_out doutb", false,-1, 11,0);
        vcdp->declBus(c+1025,"design_top motor_ctrl_spi_out nb_dps_motor", false,-1, 31,0);
        vcdp->declBus(c+1033,"design_top motor_ctrl_spi_out nb_cnt", false,-1, 31,0);
        vcdp->declBit(c+857,"design_top motor_ctrl_spi_out rst", false,-1);
        vcdp->declBit(c+849,"design_top motor_ctrl_spi_out clk", false,-1);
        vcdp->declBit(c+1129,"design_top motor_ctrl_spi_out enable", false,-1);
        vcdp->declBus(c+225,"design_top motor_ctrl_spi_out centroid", false,-1, 7,0);
        vcdp->declBit(c+257,"design_top motor_ctrl_spi_out new_centroid", false,-1);
        vcdp->declBus(c+265,"design_top motor_ctrl_spi_out proximity", false,-1, 2,0);
        vcdp->declBus(c+953,"design_top motor_ctrl_spi_out motor_dps_left_o", false,-1, 15,0);
        vcdp->declBus(c+961,"design_top motor_ctrl_spi_out motor_dps_rght_o", false,-1, 15,0);
        vcdp->declBus(c+713,"design_top motor_ctrl_spi_out motor_dps_left", false,-1, 15,0);
        vcdp->declBus(c+721,"design_top motor_ctrl_spi_out motor_dps_rght", false,-1, 15,0);
        vcdp->declBus(c+25,"design_top motor_ctrl_spi_out vel", false,-1, 15,0);
        vcdp->declBus(c+33,"design_top motor_ctrl_spi_out vel_addside", false,-1, 15,0);
        vcdp->declBus(c+41,"design_top motor_ctrl_spi_out vel_slowside", false,-1, 15,0);
        vcdp->declBit(c+49,"design_top motor_ctrl_spi_out neg_vel", false,-1);
        vcdp->declBit(c+729,"design_top motor_ctrl_spi_out lost_obj", false,-1);
        vcdp->declBus(c+57,"design_top motor_ctrl_spi_out centroid2bit", false,-1, 1,0);
        vcdp->declBus(c+737,"design_top motor_ctrl_spi_out cnt", false,-1, 3,0);
        vcdp->declBus(c+1137,"design_top motor_ctrl_spi_out c_end_cnt", false,-1, 3,0);
        vcdp->declBit(c+745,"design_top motor_ctrl_spi_out cnt_end", false,-1);
        vcdp->declBus(c+753,"design_top motor_ctrl_spi_out last_cent_valid", false,-1, 7,0);
        vcdp->declBit(c+761,"design_top motor_ctrl_spi_out last_seen_left", false,-1);
        vcdp->declBus(c+1145,"design_top motor_ctrl_spi_out c_vel5", false,-1, 15,0);
        vcdp->declBus(c+1153,"design_top motor_ctrl_spi_out c_vel4", false,-1, 15,0);
        vcdp->declBus(c+1161,"design_top motor_ctrl_spi_out c_vel3", false,-1, 15,0);
        vcdp->declBus(c+1169,"design_top motor_ctrl_spi_out c_vel2", false,-1, 15,0);
        vcdp->declBus(c+1177,"design_top motor_ctrl_spi_out c_vel1", false,-1, 15,0);
        vcdp->declBus(c+1185,"design_top motor_ctrl_spi_out c_vel0", false,-1, 15,0);
        vcdp->declBus(c+1193,"design_top motor_ctrl_spi_out c_vel_add0", false,-1, 15,0);
        vcdp->declBus(c+1201,"design_top motor_ctrl_spi_out c_vel_add1", false,-1, 15,0);
        vcdp->declBus(c+1209,"design_top motor_ctrl_spi_out c_vel_add2", false,-1, 15,0);
        vcdp->declBus(c+1217,"design_top motor_ctrl_spi_out c_vel_add3", false,-1, 15,0);
        vcdp->declBus(c+1225,"design_top motor_ctrl_spi_out c_vel_add4", false,-1, 15,0);
        vcdp->declBus(c+1233,"design_top motor_ctrl_spi_out c_vel_sub0", false,-1, 15,0);
        vcdp->declBus(c+1241,"design_top motor_ctrl_spi_out c_vel_sub1", false,-1, 15,0);
        vcdp->declBus(c+1249,"design_top motor_ctrl_spi_out c_vel_sub2", false,-1, 15,0);
        vcdp->declBus(c+1257,"design_top motor_ctrl_spi_out c_vel_sub3", false,-1, 15,0);
        vcdp->declBus(c+1265,"design_top motor_ctrl_spi_out c_vel_sub4", false,-1, 15,0);
        vcdp->declBus(c+1273,"design_top motor_ctrl_spi_out c_vel3_neg", false,-1, 15,0);
        vcdp->declBus(c+1281,"design_top motor_ctrl_spi_out c_vel2_neg", false,-1, 15,0);
        vcdp->declBus(c+1289,"design_top motor_ctrl_spi_out c_vel1_neg", false,-1, 15,0);
        vcdp->declBus(c+1297,"design_top motor_ctrl_spi_out c_vel0_neg", false,-1, 15,0);
        vcdp->declBit(c+769,"design_top motor_ctrl_spi_out tracking", false,-1);
    }
}

void Vdesign_top::traceFullThis__1(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp),8);
        vcdp->fullBit(c+9,(vlTOPp->design_top__DOT__centroid_calc__DOT__left));
        vcdp->fullBus(c+17,((0x1fffU & ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                                         ? ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
                                            - (IData)(vlTOPp->design_top__DOT__colorpxls_rght))
                                         : ((IData)(vlTOPp->design_top__DOT__colorpxls_rght) 
                                            - (IData)(vlTOPp->design_top__DOT__colorpxls_left))))),13);
        vcdp->fullBus(c+25,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel),16);
        vcdp->fullBus(c+33,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside),16);
        vcdp->fullBus(c+41,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside),16);
        vcdp->fullBit(c+49,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel));
        vcdp->fullBus(c+57,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit),2);
        vcdp->fullBit(c+65,(vlTOPp->design_top__DOT__color_filter__DOT__red_limit));
        vcdp->fullBit(c+73,(vlTOPp->design_top__DOT__color_filter__DOT__grn_limit));
        vcdp->fullBit(c+81,(vlTOPp->design_top__DOT__color_filter__DOT__blu_limit));
        vcdp->fullBit(c+89,(vlTOPp->design_top__DOT__color_filter__DOT__yel_limit));
        vcdp->fullBit(c+97,(vlTOPp->design_top__DOT__color_filter__DOT__cya_limit));
        vcdp->fullBit(c+105,(vlTOPp->design_top__DOT__color_filter__DOT__mag_limit));
        vcdp->fullBit(c+113,(vlTOPp->design_top__DOT__color_filter__DOT__gra_limit));
        vcdp->fullBit(c+121,((((((((IData)(vlTOPp->design_top__DOT__color_filter__DOT__gra_limit) 
                                   & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                      >> 0xbU)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                   >> 7U)) 
                                 & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                    >> 3U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                               >> 0xaU)) 
                               & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                  >> 6U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                             >> 2U))));
        vcdp->fullBit(c+129,(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn));
        vcdp->fullBit(c+137,(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu));
        vcdp->fullBit(c+145,(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu));
        vcdp->fullBus(c+153,(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif),4);
        vcdp->fullBus(c+161,(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif),4);
        vcdp->fullBus(c+169,(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif),4);
        vcdp->fullBit(c+177,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))));
        vcdp->fullBit(c+185,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))));
        vcdp->fullBit(c+193,((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))));
        vcdp->fullBit(c+201,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))));
        vcdp->fullBit(c+209,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))));
        vcdp->fullBit(c+217,((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))));
        vcdp->fullBus(c+225,(vlTOPp->design_top__DOT__centroid_wire),8);
        vcdp->fullBus(c+233,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg),15);
        vcdp->fullBit(c+241,(vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg2));
        vcdp->fullBit(c+249,(vlTOPp->design_top__DOT__new_frame_proc));
        vcdp->fullBit(c+257,(vlTOPp->design_top__DOT__new_centroid_w));
        vcdp->fullBus(c+265,(vlTOPp->design_top__DOT__proximity_w),3);
        vcdp->fullBus(c+273,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [0U]),11);
        vcdp->fullBus(c+281,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [7U]),11);
        vcdp->fullBus(c+289,(vlTOPp->design_top__DOT__colorpxls),14);
        vcdp->fullBus(c+297,(vlTOPp->design_top__DOT__colorpxls_left),13);
        vcdp->fullBus(c+305,(vlTOPp->design_top__DOT__colorpxls_rght),13);
        vcdp->fullBus(c+313,(vlTOPp->design_top__DOT__colorpxls_bin012),13);
        vcdp->fullBus(c+321,(vlTOPp->design_top__DOT__colorpxls_bin567),13);
        vcdp->fullBus(c+329,(vlTOPp->design_top__DOT__colorpxls_bin01),13);
        vcdp->fullBus(c+337,(vlTOPp->design_top__DOT__colorpxls_bin67),13);
        vcdp->fullBus(c+345,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [1U]),11);
        vcdp->fullBus(c+353,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [2U]),11);
        vcdp->fullBus(c+361,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [3U]),11);
        vcdp->fullBus(c+369,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [4U]),11);
        vcdp->fullBus(c+377,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [5U]),11);
        vcdp->fullBus(c+385,(vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [6U]),11);
        vcdp->fullBus(c+393,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc),15);
        vcdp->fullBit(c+401,((0x9fU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col))));
        vcdp->fullBit(c+409,(((((0x10U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg)) 
                                & (0x90U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg))) 
                               & (8U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num))) 
                              & (0x70U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num)))));
        vcdp->fullBit(c+417,(vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg));
        vcdp->fullBus(c+425,(vlTOPp->design_top__DOT__color_filter__DOT__ind),32);
        vcdp->fullBus(c+433,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[0]),11);
        vcdp->fullBus(c+434,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[1]),11);
        vcdp->fullBus(c+435,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[2]),11);
        vcdp->fullBus(c+436,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[3]),11);
        vcdp->fullBus(c+437,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[4]),11);
        vcdp->fullBus(c+438,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[5]),11);
        vcdp->fullBus(c+439,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[6]),11);
        vcdp->fullBus(c+440,(vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[7]),11);
        vcdp->fullBus(c+497,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[0]),11);
        vcdp->fullBus(c+498,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[1]),11);
        vcdp->fullBus(c+499,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[2]),11);
        vcdp->fullBus(c+500,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[3]),11);
        vcdp->fullBus(c+501,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[4]),11);
        vcdp->fullBus(c+502,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[5]),11);
        vcdp->fullBus(c+503,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[6]),11);
        vcdp->fullBus(c+504,(vlTOPp->design_top__DOT__color_filter__DOT__histogram[7]),11);
        vcdp->fullBus(c+561,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls),14);
        vcdp->fullBus(c+569,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left),13);
        vcdp->fullBus(c+577,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght),13);
        vcdp->fullBus(c+585,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012),13);
        vcdp->fullBus(c+593,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567),13);
        vcdp->fullBus(c+601,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01),13);
        vcdp->fullBus(c+609,(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67),13);
        vcdp->fullBus(c+617,(vlTOPp->design_top__DOT__color_filter__DOT__col),8);
        vcdp->fullBus(c+625,(vlTOPp->design_top__DOT__color_filter__DOT__col_rg),8);
        vcdp->fullBus(c+633,((0xffU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                       - (IData)(0x10U)))),8);
        vcdp->fullBus(c+641,((7U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                     - (IData)(0x10U)) 
                                    >> 4U))),3);
        vcdp->fullBus(c+649,(vlTOPp->design_top__DOT__color_filter__DOT__hist_bin_rg),3);
        vcdp->fullBus(c+657,(vlTOPp->design_top__DOT__color_filter__DOT__row_num),7);
        vcdp->fullBit(c+665,(vlTOPp->design_top__DOT__color_filter__DOT__processing));
        vcdp->fullBus(c+673,(vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg),12);
        vcdp->fullBit(c+681,(vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg1));
        vcdp->fullBus(c+689,((0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                         >> 1U))),13);
        vcdp->fullBus(c+697,((0x3ffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                        >> 4U))),13);
        vcdp->fullBus(c+705,(((0x1800U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                               ? 7U : ((0x1000U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                        ? 6U : ((0xf00U 
                                                 <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                 ? 5U
                                                 : 
                                                ((0xc00U 
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
        vcdp->fullBus(c+713,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left),16);
        vcdp->fullBus(c+721,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght),16);
        vcdp->fullBit(c+729,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj));
        vcdp->fullBus(c+737,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt),4);
        vcdp->fullBit(c+745,((0xfU == (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt))));
        vcdp->fullBus(c+753,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid),8);
        vcdp->fullBit(c+761,(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left));
        vcdp->fullBit(c+769,((0U != (IData)(vlTOPp->design_top__DOT__centroid_wire))));
        vcdp->fullBus(c+777,(((IData)(vlTOPp->design_top__DOT__color_filter__DOT__color_threshold)
                               ? (IData)(vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg)
                               : 0U)),12);
        vcdp->fullBus(c+785,(vlTOPp->design_top__DOT__doutImg2Filt),12);
        vcdp->fullBus(c+793,((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                      >> 8U))),4);
        vcdp->fullBus(c+801,((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                      >> 4U))),4);
        vcdp->fullBus(c+809,((0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt))),4);
        vcdp->fullBus(c+817,(((0x30U & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                        >> 6U)) | (
                                                   (0xcU 
                                                    & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                       >> 4U)) 
                                                   | (3U 
                                                      & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                         >> 2U))))),6);
        vcdp->fullBit(c+825,(vlTOPp->design_top__DOT__color_filter__DOT__color_threshold));
        vcdp->fullBus(c+833,(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl),15);
        vcdp->fullBit(c+841,((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))));
        vcdp->fullBit(c+849,(vlTOPp->clk));
        vcdp->fullBit(c+857,(vlTOPp->rst));
        vcdp->fullBit(c+865,(vlTOPp->wea));
        vcdp->fullBus(c+873,(vlTOPp->addrin),15);
        vcdp->fullBus(c+881,(vlTOPp->datain),12);
        vcdp->fullBus(c+889,(vlTOPp->addrout),15);
        vcdp->fullBus(c+897,(vlTOPp->wRgbfilter),3);
        vcdp->fullBit(c+905,(vlTOPp->capture_newframe));
        vcdp->fullBus(c+913,(vlTOPp->dataout),12);
        vcdp->fullBus(c+921,(vlTOPp->leds),8);
        vcdp->fullBus(c+929,(vlTOPp->centroid_nop),8);
        vcdp->fullBit(c+937,(vlTOPp->new_centroid));
        vcdp->fullBus(c+945,(vlTOPp->proximity),3);
        vcdp->fullBus(c+953,(vlTOPp->motor_dps_left_o),16);
        vcdp->fullBus(c+961,(vlTOPp->motor_dps_rght_o),16);
        vcdp->fullBus(c+969,(0xa0U),32);
        vcdp->fullBus(c+977,(0x78U),32);
        vcdp->fullBus(c+985,(0x4b00U),32);
        vcdp->fullBus(c+993,(8U),32);
        vcdp->fullBus(c+1001,(7U),32);
        vcdp->fullBus(c+1009,(0xfU),32);
        vcdp->fullBus(c+1017,(0xcU),32);
        vcdp->fullBus(c+1025,(0x10U),32);
        vcdp->fullBus(c+1033,(4U),32);
        vcdp->fullBus(c+1041,(vlTOPp->design_top__DOT__pxColRet),7);
        vcdp->fullBus(c+1049,(0x80U),32);
        vcdp->fullBus(c+1057,(0x68U),32);
        vcdp->fullBus(c+1065,(0x3400U),32);
        vcdp->fullBus(c+1073,(0xeU),32);
        vcdp->fullBus(c+1081,(3U),32);
        vcdp->fullBus(c+1089,(0xbU),32);
        vcdp->fullBus(c+1097,(2U),4);
        vcdp->fullBus(c+1105,(6U),4);
        vcdp->fullBus(c+1113,(0U),15);
        vcdp->fullBus(c+1121,(0U),12);
        vcdp->fullBit(c+1129,(1U));
        vcdp->fullBus(c+1137,(0xfU),4);
        vcdp->fullBus(c+1145,(0x258U),16);
        vcdp->fullBus(c+1153,(0x226U),16);
        vcdp->fullBus(c+1161,(0x1c2U),16);
        vcdp->fullBus(c+1169,(0x15eU),16);
        vcdp->fullBus(c+1177,(0xfaU),16);
        vcdp->fullBus(c+1185,(0x96U),16);
        vcdp->fullBus(c+1193,(0x4bU),16);
        vcdp->fullBus(c+1201,(0x7dU),16);
        vcdp->fullBus(c+1209,(0xafU),16);
        vcdp->fullBus(c+1217,(0xe1U),16);
        vcdp->fullBus(c+1225,(0x113U),16);
        vcdp->fullBus(c+1233,(0xffb5U),16);
        vcdp->fullBus(c+1241,(0xff83U),16);
        vcdp->fullBus(c+1249,(0xff51U),16);
        vcdp->fullBus(c+1257,(0xff1fU),16);
        vcdp->fullBus(c+1265,(0xfeedU),16);
        vcdp->fullBus(c+1273,(0xfe3eU),16);
        vcdp->fullBus(c+1281,(0xfea2U),16);
        vcdp->fullBus(c+1289,(0xff06U),16);
        vcdp->fullBus(c+1297,(0xff6aU),16);
    }
}
