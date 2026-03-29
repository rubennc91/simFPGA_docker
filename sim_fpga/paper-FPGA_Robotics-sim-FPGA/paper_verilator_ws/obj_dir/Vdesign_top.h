// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDESIGN_TOP_H_
#define _VDESIGN_TOP_H_  // guard

#include "verilated.h"

//==========

class Vdesign_top__Syms;
class Vdesign_top_VerilatedVcd;


//----------

VL_MODULE(Vdesign_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(wea,0,0);
    VL_IN8(wRgbfilter,2,0);
    VL_IN8(capture_newframe,0,0);
    VL_OUT8(leds,7,0);
    VL_OUT8(centroid_nop,7,0);
    VL_OUT8(new_centroid,0,0);
    VL_OUT8(proximity,2,0);
    VL_IN16(addrin,14,0);
    VL_IN16(datain,11,0);
    VL_IN16(addrout,14,0);
    VL_OUT16(dataout,11,0);
    VL_OUT16(motor_dps_left_o,15,0);
    VL_OUT16(motor_dps_rght_o,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ design_top__DOT__centroid_wire;
        CData/*6:0*/ design_top__DOT__pxColRet;
        CData/*0:0*/ design_top__DOT__new_frame_proc;
        CData/*0:0*/ design_top__DOT__new_centroid_w;
        CData/*2:0*/ design_top__DOT__proximity_w;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__end_pxl_cnt;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__end_ln;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__inner_frame_rg;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__red_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__grn_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__blu_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__yel_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__cya_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__mag_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__gra_limit;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__color_threshold;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__red_gt_grn;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__red_gt_blu;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__grn_gt_blu;
        CData/*3:0*/ design_top__DOT__color_filter__DOT__red_grn_absdif;
        CData/*3:0*/ design_top__DOT__color_filter__DOT__red_blu_absdif;
        CData/*3:0*/ design_top__DOT__color_filter__DOT__grn_blu_absdif;
        CData/*7:0*/ design_top__DOT__color_filter__DOT__col;
        CData/*7:0*/ design_top__DOT__color_filter__DOT__col_rg;
        CData/*2:0*/ design_top__DOT__color_filter__DOT__hist_bin_rg;
        CData/*6:0*/ design_top__DOT__color_filter__DOT__row_num;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__processing;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__proc_we_rg1;
        CData/*0:0*/ design_top__DOT__color_filter__DOT__proc_we_rg2;
        CData/*7:0*/ design_top__DOT__centroid_calc__DOT__centroid_tmp;
        CData/*0:0*/ design_top__DOT__centroid_calc__DOT__left;
        CData/*0:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel;
        CData/*0:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj;
        CData/*1:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit;
        CData/*3:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__cnt;
        CData/*0:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__cnt_end;
        CData/*7:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid;
        CData/*0:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left;
        SData/*11:0*/ design_top__DOT__doutImg2Filt;
        SData/*13:0*/ design_top__DOT__colorpxls;
        SData/*12:0*/ design_top__DOT__colorpxls_left;
        SData/*12:0*/ design_top__DOT__colorpxls_rght;
        SData/*12:0*/ design_top__DOT__colorpxls_bin012;
        SData/*12:0*/ design_top__DOT__colorpxls_bin567;
        SData/*12:0*/ design_top__DOT__colorpxls_bin01;
        SData/*12:0*/ design_top__DOT__colorpxls_bin67;
        SData/*14:0*/ design_top__DOT__color_filter__DOT__cnt_pxl;
        SData/*14:0*/ design_top__DOT__color_filter__DOT__cnt_pxl_proc;
        SData/*14:0*/ design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg;
        SData/*13:0*/ design_top__DOT__color_filter__DOT__colorpxls;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_left;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_rght;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_bin012;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_bin567;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_bin01;
        SData/*12:0*/ design_top__DOT__color_filter__DOT__colorpxls_bin67;
        SData/*11:0*/ design_top__DOT__color_filter__DOT__orig_pxl_rg;
        SData/*15:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left;
        SData/*15:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght;
        SData/*15:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__vel;
        SData/*15:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside;
        SData/*15:0*/ design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside;
        IData/*31:0*/ design_top__DOT__color_filter__DOT__ind;
        SData/*11:0*/ design_top__DOT__frame_buff_in__DOT__ram[19200];
    };
    struct {
        SData/*10:0*/ design_top__DOT__color_filter__DOT__histogram_tmp[8];
        SData/*10:0*/ design_top__DOT__color_filter__DOT__histogram[8];
        SData/*11:0*/ design_top__DOT__frame_buff_out__DOT__ram[19200];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__frame_buff_in__DOT__ram__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*11:0*/ design_top__DOT__frame_buff_in__DOT____Vxrand2;
    SData/*11:0*/ design_top__DOT__frame_buff_in__DOT____Vlvbound1;
    SData/*11:0*/ design_top__DOT__frame_buff_out__DOT____Vxrand2;
    SData/*11:0*/ design_top__DOT__frame_buff_out__DOT____Vlvbound1;
    SData/*14:0*/ __Vdlyvdim0__design_top__DOT__frame_buff_in__DOT__ram__v0;
    SData/*11:0*/ __Vdlyvval__design_top__DOT__frame_buff_in__DOT__ram__v0;
    SData/*14:0*/ __Vdly__design_top__DOT__color_filter__DOT__cnt_pxl;
    IData/*31:0*/ __Vm_traceActivity;
    static SData/*15:0*/ __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[8];
    static CData/*0:0*/ __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[8];
    static SData/*15:0*/ __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[256];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vdesign_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vdesign_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vdesign_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vdesign_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vdesign_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vdesign_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vdesign_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vdesign_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vdesign_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vdesign_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vdesign_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vdesign_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vdesign_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vdesign_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vdesign_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vdesign_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
