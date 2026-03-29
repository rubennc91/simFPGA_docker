// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_top.h for the primary calling header

#include "Vdesign_top.h"
#include "Vdesign_top__Syms.h"

//==========
SData/*15:0*/ Vdesign_top::__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[8];
CData/*0:0*/ Vdesign_top::__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[8];
SData/*15:0*/ Vdesign_top::__Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[256];

VL_CTOR_IMP(Vdesign_top) {
    Vdesign_top__Syms* __restrict vlSymsp = __VlSymsp = new Vdesign_top__Syms(this, name());
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdesign_top::__Vconfigure(Vdesign_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdesign_top::~Vdesign_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vdesign_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign_top::eval\n"); );
    Vdesign_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/rtl/design_top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdesign_top::_eval_initial_loop(Vdesign_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/root/simFPGA_docker/sim_fpga/paper-FPGA_Robotics-sim-FPGA/paper_verilator_ws/rtl/design_top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vdesign_top::_sequent__TOP__1(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_sequent__TOP__1\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__design_top__DOT__frame_buff_out__DOT__ram__v0;
    SData/*14:0*/ __Vdlyvdim0__design_top__DOT__frame_buff_out__DOT__ram__v0;
    SData/*11:0*/ __Vdlyvval__design_top__DOT__frame_buff_out__DOT__ram__v0;
    // Body
    vlTOPp->__Vdlyvset__design_top__DOT__frame_buff_in__DOT__ram__v0 = 0U;
    __Vdlyvset__design_top__DOT__frame_buff_out__DOT__ram__v0 = 0U;
    vlTOPp->dataout = ((0x4affU >= (IData)(vlTOPp->addrout))
                        ? vlTOPp->design_top__DOT__frame_buff_out__DOT__ram
                       [vlTOPp->addrout] : (IData)(vlTOPp->design_top__DOT__frame_buff_out__DOT____Vxrand2));
    if (vlTOPp->wea) {
        vlTOPp->design_top__DOT__frame_buff_in__DOT____Vlvbound1 
            = vlTOPp->datain;
        if ((0x4affU >= (IData)(vlTOPp->addrin))) {
            vlTOPp->__Vdlyvval__design_top__DOT__frame_buff_in__DOT__ram__v0 
                = vlTOPp->design_top__DOT__frame_buff_in__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__design_top__DOT__frame_buff_in__DOT__ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__design_top__DOT__frame_buff_in__DOT__ram__v0 
                = vlTOPp->addrin;
        }
    }
    if (vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg2) {
        vlTOPp->design_top__DOT__frame_buff_out__DOT____Vlvbound1 
            = ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__color_threshold)
                ? (IData)(vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg)
                : 0U);
        if ((0x4affU >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg))) {
            __Vdlyvval__design_top__DOT__frame_buff_out__DOT__ram__v0 
                = vlTOPp->design_top__DOT__frame_buff_out__DOT____Vlvbound1;
            __Vdlyvset__design_top__DOT__frame_buff_out__DOT__ram__v0 = 1U;
            __Vdlyvdim0__design_top__DOT__frame_buff_out__DOT__ram__v0 
                = vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg;
        }
    }
    if (__Vdlyvset__design_top__DOT__frame_buff_out__DOT__ram__v0) {
        vlTOPp->design_top__DOT__frame_buff_out__DOT__ram[__Vdlyvdim0__design_top__DOT__frame_buff_out__DOT__ram__v0] 
            = __Vdlyvval__design_top__DOT__frame_buff_out__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vdesign_top::_sequent__TOP__2(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_sequent__TOP__2\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__design_top__DOT__color_filter__DOT__processing;
    CData/*6:0*/ __Vdly__design_top__DOT__color_filter__DOT__row_num;
    CData/*7:0*/ __Vdly__design_top__DOT__color_filter__DOT__col;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v0;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v8;
    CData/*2:0*/ __Vdlyvdim0__design_top__DOT__color_filter__DOT__histogram_tmp__v16;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v16;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v0;
    CData/*0:0*/ __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v8;
    CData/*3:0*/ __Vdly__design_top__DOT__motor_ctrl_spi_out__DOT__cnt;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram_tmp__v16;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012;
    SData/*12:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left;
    SData/*13:0*/ __Vdly__design_top__DOT__color_filter__DOT__colorpxls;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v8;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v9;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v10;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v11;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v12;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v13;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v14;
    SData/*10:0*/ __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v15;
    // Body
    __Vdly__design_top__DOT__color_filter__DOT__col 
        = vlTOPp->design_top__DOT__color_filter__DOT__col;
    __Vdly__design_top__DOT__color_filter__DOT__row_num 
        = vlTOPp->design_top__DOT__color_filter__DOT__row_num;
    __Vdly__design_top__DOT__color_filter__DOT__processing 
        = vlTOPp->design_top__DOT__color_filter__DOT__processing;
    vlTOPp->__Vdly__design_top__DOT__color_filter__DOT__cnt_pxl 
        = vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl;
    __Vdly__design_top__DOT__motor_ctrl_spi_out__DOT__cnt 
        = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt;
    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v0 = 0U;
    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v8 = 0U;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01;
    __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67 
        = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67;
    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v0 = 0U;
    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v8 = 0U;
    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v16 = 0U;
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__color_filter__DOT__ind = 8U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__color_filter__DOT__ind = 8U;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__color_filter__DOT__ind = 8U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__color_filter__DOT__ind = 8U;
        }
    }
    __Vdly__design_top__DOT__color_filter__DOT__col 
        = ((IData)(vlTOPp->rst) ? 0U : ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__processing)
                                         ? ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__end_ln)
                                             ? 0U : 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col))))
                                         : 0U));
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__row_num = 0U;
    } else {
        if (vlTOPp->design_top__DOT__color_filter__DOT__processing) {
            if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
                __Vdly__design_top__DOT__color_filter__DOT__row_num = 0U;
            } else {
                if ((0x9fU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col))) {
                    __Vdly__design_top__DOT__color_filter__DOT__row_num 
                        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num)));
                }
            }
        } else {
            __Vdly__design_top__DOT__color_filter__DOT__row_num = 0U;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_bin012 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_bin012 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_bin67 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_bin67 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_bin567 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_bin567 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_bin01 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_bin01 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01;
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg2 
        = ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg1));
    vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg 
        = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc));
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_left = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_left 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls_rght = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls_rght 
                = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__proximity_w = 0U;
    } else {
        if (vlTOPp->design_top__DOT__new_frame_proc) {
            vlTOPp->design_top__DOT__proximity_w = 
                ((0x1800U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                  ? 7U : ((0x1000U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                           ? 6U : ((0xf00U <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                    ? 5U : ((0xc00U 
                                             <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                             ? 4U : 
                                            ((0x700U 
                                              <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                              ? 3U : 
                                             ((0x300U 
                                               <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                               ? 3U
                                               : ((0x80U 
                                                   <= (IData)(vlTOPp->design_top__DOT__colorpxls))
                                                   ? 3U
                                                   : 0U)))))));
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__motor_ctrl_spi_out__DOT__cnt = 0U;
    } else {
        if (vlTOPp->design_top__DOT__new_centroid_w) {
            __Vdly__design_top__DOT__motor_ctrl_spi_out__DOT__cnt 
                = ((0U != (IData)(vlTOPp->design_top__DOT__centroid_wire))
                    ? 0U : (0xfU & ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt_end)
                                     ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt)
                                     : ((IData)(1U) 
                                        + (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt)))));
        }
    }
    if (vlTOPp->rst) {
        __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v0 = 1U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v8 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [0U];
            __Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v8 = 1U;
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v9 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [1U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v10 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [2U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v11 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [3U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v12 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [4U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v13 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [5U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v14 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [6U];
            __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v15 
                = vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                [7U];
        }
    }
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left 
        = ((IData)(vlTOPp->rst) ? 0U : ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj)
                                         ? ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left)
                                             ? 0xfaU
                                             : 0xff06U)
                                         : ((3U == 
                                             (3U & 
                                              ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid) 
                                               >> 3U)))
                                             ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel)
                                             : ((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid)))
                                                 ? 
                                                ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                                                  ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel)
                                                  : (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside))
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid) 
                                                      >> 4U)))
                                                  ? 
                                                 ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                                                   ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside)
                                                   : (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel))
                                                  : 0U)))));
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght 
        = ((IData)(vlTOPp->rst) ? 0U : ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj)
                                         ? ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left)
                                             ? 0xff06U
                                             : 0xfaU)
                                         : ((3U == 
                                             (3U & 
                                              ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid) 
                                               >> 3U)))
                                             ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel)
                                             : ((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid)))
                                                 ? 
                                                ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                                                  ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside)
                                                  : (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel))
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid) 
                                                      >> 4U)))
                                                  ? 
                                                 ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                                                   ? (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel)
                                                   : (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside))
                                                  : 0U)))));
    vlTOPp->design_top__DOT__color_filter__DOT__orig_pxl_rg 
        = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->design_top__DOT__doutImg2Filt));
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    __Vdly__design_top__DOT__color_filter__DOT__colorpxls 
                        = (0x3fffU & ((IData)(1U) + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls)));
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((1U & (~ (3U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                         - (IData)(0x10U)) 
                                        >> 6U))))) {
                        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left 
                            = (0x1fffU & ((0x20U & 
                                           ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                            - (IData)(0x10U)))
                                           ? ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left)))
                                           : ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left)))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012 = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((1U & (~ (3U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                         - (IData)(0x10U)) 
                                        >> 6U))))) {
                        if ((0x20U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                      - (IData)(0x10U)))) {
                            if ((1U & (~ (0xfU & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                   - (IData)(0x10U)) 
                                                  >> 4U))))) {
                                __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012 
                                    = (0x1fffU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012)));
                            }
                        } else {
                            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012 
                                = (0x1fffU & ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012))));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((0x40U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                  - (IData)(0x10U)))) {
                        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght 
                            = (0x1fffU & ((0x20U & 
                                           ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                            - (IData)(0x10U)))
                                           ? ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght)))
                                           : ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght)))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567 = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((0x40U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                  - (IData)(0x10U)))) {
                        if ((0x20U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                      - (IData)(0x10U)))) {
                            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567 
                                = (0x1fffU & ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567))));
                        } else {
                            if ((0x10U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                          - (IData)(0x10U)))) {
                                __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567 
                                    = (0x1fffU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567)));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01 = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((1U & (~ (3U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                         - (IData)(0x10U)) 
                                        >> 6U))))) {
                        if ((1U & (~ (7U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                             - (IData)(0x10U)) 
                                            >> 5U))))) {
                            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01 
                                = (0x1fffU & ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01))));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67 = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67 = 0U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    if ((0x40U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                  - (IData)(0x10U)))) {
                        if ((0x20U & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                      - (IData)(0x10U)))) {
                            __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67 
                                = (0x1fffU & ((0x10U 
                                               & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                                  - (IData)(0x10U)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67))
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67))));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v0 = 1U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v8 = 1U;
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg) {
                if (vlTOPp->design_top__DOT__color_filter__DOT__color_threshold) {
                    __Vdlyvval__design_top__DOT__color_filter__DOT__histogram_tmp__v16 
                        = (0x7ffU & ((IData)(1U) + 
                                     vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp
                                     [vlTOPp->design_top__DOT__color_filter__DOT__hist_bin_rg]));
                    __Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v16 = 1U;
                    __Vdlyvdim0__design_top__DOT__color_filter__DOT__histogram_tmp__v16 
                        = vlTOPp->design_top__DOT__color_filter__DOT__hist_bin_rg;
                }
            }
        }
    }
    if (__Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v0) {
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[0U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[1U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[2U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[3U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[4U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[5U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[6U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[7U] = 0U;
    }
    if (__Vdlyvset__design_top__DOT__color_filter__DOT__histogram__v8) {
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[0U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v8;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[1U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v9;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[2U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v10;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[3U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v11;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[4U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v12;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[5U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v13;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[6U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v14;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram[7U] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram__v15;
    }
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_left 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_left;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin012 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin012;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_rght 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_rght;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin567 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin567;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin01 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin01;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls_bin67 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls_bin67;
    if (__Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v0) {
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[0U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[1U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[2U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[3U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[4U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[5U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[6U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[7U] = 0U;
    }
    if (__Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v8) {
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[0U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[1U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[2U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[3U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[4U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[5U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[6U] = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[7U] = 0U;
    }
    if (__Vdlyvset__design_top__DOT__color_filter__DOT__histogram_tmp__v16) {
        vlTOPp->design_top__DOT__color_filter__DOT__histogram_tmp[__Vdlyvdim0__design_top__DOT__color_filter__DOT__histogram_tmp__v16] 
            = __Vdlyvval__design_top__DOT__color_filter__DOT__histogram_tmp__v16;
    }
    if (vlTOPp->rst) {
        vlTOPp->__Vdly__design_top__DOT__color_filter__DOT__cnt_pxl = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc = 0U;
        __Vdly__design_top__DOT__color_filter__DOT__processing = 0U;
        vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg1 = 0U;
    } else {
        vlTOPp->design_top__DOT__color_filter__DOT__proc_we_rg1 
            = vlTOPp->design_top__DOT__color_filter__DOT__processing;
        if (vlTOPp->design_top__DOT__color_filter__DOT__processing) {
            vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl_proc 
                = vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl;
            if (vlTOPp->design_top__DOT__color_filter__DOT__end_pxl_cnt) {
                vlTOPp->__Vdly__design_top__DOT__color_filter__DOT__cnt_pxl = 0U;
                __Vdly__design_top__DOT__color_filter__DOT__processing = 0U;
            } else {
                vlTOPp->__Vdly__design_top__DOT__color_filter__DOT__cnt_pxl 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl)));
            }
        } else {
            if (vlTOPp->capture_newframe) {
                __Vdly__design_top__DOT__color_filter__DOT__processing = 1U;
            }
        }
    }
    vlTOPp->design_top__DOT__centroid_calc__DOT__left 
        = ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
           > (IData)(vlTOPp->design_top__DOT__colorpxls_rght));
    vlTOPp->proximity = vlTOPp->design_top__DOT__proximity_w;
    vlTOPp->__Vtableidx1 = vlTOPp->design_top__DOT__proximity_w;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel 
        = vlTOPp->__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel
        [vlTOPp->__Vtableidx1];
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel 
        = vlTOPp->__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel
        [vlTOPp->__Vtableidx1];
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__colorpxls = 0U;
    } else {
        if ((0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))) {
            vlTOPp->design_top__DOT__colorpxls = vlTOPp->design_top__DOT__color_filter__DOT__colorpxls;
        }
    }
    vlTOPp->motor_dps_left_o = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left;
    vlTOPp->motor_dps_rght_o = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj 
        = ((IData)(vlTOPp->rst) | (0xfU == (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt)));
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left = 0U;
    } else {
        if (vlTOPp->design_top__DOT__new_centroid_w) {
            if ((2U & (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit))) {
                vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit))) {
                    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left = 0U;
                }
            }
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid = 0U;
    } else {
        if (vlTOPp->design_top__DOT__new_centroid_w) {
            if ((0U != (IData)(vlTOPp->design_top__DOT__centroid_wire))) {
                vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid 
                    = vlTOPp->design_top__DOT__centroid_wire;
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__hist_bin_rg 
        = ((IData)(vlTOPp->rst) ? 0U : (7U & (((IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg) 
                                               - (IData)(0x10U)) 
                                              >> 4U)));
    vlTOPp->design_top__DOT__color_filter__DOT__inner_frame_rg 
        = ((~ (IData)(vlTOPp->rst)) & ((((0x10U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg)) 
                                         & (0x90U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col_rg))) 
                                        & (8U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num))) 
                                       & (0x70U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__row_num))));
    vlTOPp->design_top__DOT__color_filter__DOT__processing 
        = __Vdly__design_top__DOT__color_filter__DOT__processing;
    vlTOPp->design_top__DOT__color_filter__DOT__colorpxls 
        = __Vdly__design_top__DOT__color_filter__DOT__colorpxls;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt 
        = __Vdly__design_top__DOT__motor_ctrl_spi_out__DOT__cnt;
    vlTOPp->design_top__DOT__color_filter__DOT__row_num 
        = __Vdly__design_top__DOT__color_filter__DOT__row_num;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt_end 
        = (0xfU == (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt));
    vlTOPp->__Vtableidx2 = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside 
        = vlTOPp->__Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside
        [vlTOPp->__Vtableidx2];
    vlTOPp->design_top__DOT__new_centroid_w = ((~ (IData)(vlTOPp->rst)) 
                                               & (IData)(vlTOPp->design_top__DOT__new_frame_proc));
    if (vlTOPp->rst) {
        vlTOPp->design_top__DOT__centroid_wire = 0U;
    } else {
        if (vlTOPp->design_top__DOT__new_frame_proc) {
            vlTOPp->design_top__DOT__centroid_wire 
                = vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp;
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__col_rg 
        = ((IData)(vlTOPp->rst) ? 0U : (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col));
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside 
        = (0xffffU & ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                       ? ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel) 
                          - (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside))
                       : ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel) 
                          + (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside))));
    vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp = 0U;
    vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp 
        = ((0x80U >= (IData)(vlTOPp->design_top__DOT__colorpxls))
            ? 0U : (((0x1fffU & ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                                  ? ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
                                     - (IData)(vlTOPp->design_top__DOT__colorpxls_rght))
                                  : ((IData)(vlTOPp->design_top__DOT__colorpxls_rght) 
                                     - (IData)(vlTOPp->design_top__DOT__colorpxls_left)))) 
                     < (0x3ffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                  >> 4U))) ? (0x18U 
                                              | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                     : ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                         ? ((vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [0U] >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                 >> 1U)))
                             ? (1U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                             : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin01) 
                                 >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                >> 1U)))
                                 ? (2U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                 : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin012) 
                                     >= (0x1fffU & 
                                         ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                          >> 1U))) ? 
                                    (4U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                     : (8U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp)))))
                         : ((vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [7U] >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                 >> 1U)))
                             ? (0x80U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                             : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin67) 
                                 >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                >> 1U)))
                                 ? (0x40U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                 : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin567) 
                                     >= (0x1fffU & 
                                         ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                          >> 1U))) ? 
                                    (0x20U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                     : (0x10U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))))))));
    vlTOPp->design_top__DOT__color_filter__DOT__col 
        = __Vdly__design_top__DOT__color_filter__DOT__col;
    vlTOPp->new_centroid = vlTOPp->design_top__DOT__new_centroid_w;
    vlTOPp->centroid_nop = vlTOPp->design_top__DOT__centroid_wire;
    vlTOPp->leds = vlTOPp->design_top__DOT__centroid_wire;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit 
        = ((2U & ((((0x3fffffeU & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                   >> 6U)) | (0x7fffffeU 
                                              & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                                 >> 5U))) 
                   | (0xffffffeU & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                    >> 4U))) | (0x1ffffffeU 
                                                & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                                   >> 3U)))) 
           | (1U & (((((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                       >> 3U) | ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                 >> 2U)) | ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                            >> 1U)) 
                    | (IData)(vlTOPp->design_top__DOT__centroid_wire))));
    vlTOPp->design_top__DOT__new_frame_proc = ((~ (IData)(vlTOPp->rst)) 
                                               & (0x4affU 
                                                  == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl)));
    vlTOPp->design_top__DOT__color_filter__DOT__end_ln 
        = (0x9fU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col));
}

void Vdesign_top::_initial__TOP__3(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_initial__TOP__3\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->design_top__DOT__frame_buff_out__DOT____Vxrand2 
        = VL_RAND_RESET_I(12);
    vlTOPp->design_top__DOT__frame_buff_in__DOT____Vxrand2 
        = VL_RAND_RESET_I(12);
}

void Vdesign_top::_settle__TOP__4(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_settle__TOP__4\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->proximity = vlTOPp->design_top__DOT__proximity_w;
    vlTOPp->motor_dps_left_o = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left;
    vlTOPp->motor_dps_rght_o = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght;
    vlTOPp->design_top__DOT__centroid_calc__DOT__left 
        = ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
           > (IData)(vlTOPp->design_top__DOT__colorpxls_rght));
    vlTOPp->__Vtableidx1 = vlTOPp->design_top__DOT__proximity_w;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel 
        = vlTOPp->__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel
        [vlTOPp->__Vtableidx1];
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel 
        = vlTOPp->__Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel
        [vlTOPp->__Vtableidx1];
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt_end 
        = (0xfU == (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__cnt));
    vlTOPp->__Vtableidx2 = vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid;
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside 
        = vlTOPp->__Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside
        [vlTOPp->__Vtableidx2];
    vlTOPp->centroid_nop = vlTOPp->design_top__DOT__centroid_wire;
    vlTOPp->leds = vlTOPp->design_top__DOT__centroid_wire;
    vlTOPp->new_centroid = vlTOPp->design_top__DOT__new_centroid_w;
    vlTOPp->design_top__DOT__color_filter__DOT__end_ln 
        = (0x9fU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__col));
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit 
        = ((2U & ((((0x3fffffeU & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                   >> 6U)) | (0x7fffffeU 
                                              & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                                 >> 5U))) 
                   | (0xffffffeU & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                    >> 4U))) | (0x1ffffffeU 
                                                & ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                                   >> 3U)))) 
           | (1U & (((((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                       >> 3U) | ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                 >> 2U)) | ((IData)(vlTOPp->design_top__DOT__centroid_wire) 
                                            >> 1U)) 
                    | (IData)(vlTOPp->design_top__DOT__centroid_wire))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 8U)) > (0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                       >> 4U)));
    vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 8U)) > (0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt)));
    vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 4U)) > (0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt)));
    vlTOPp->design_top__DOT__color_filter__DOT__end_pxl_cnt 
        = (0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl));
    vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp = 0U;
    vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp 
        = ((0x80U >= (IData)(vlTOPp->design_top__DOT__colorpxls))
            ? 0U : (((0x1fffU & ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                                  ? ((IData)(vlTOPp->design_top__DOT__colorpxls_left) 
                                     - (IData)(vlTOPp->design_top__DOT__colorpxls_rght))
                                  : ((IData)(vlTOPp->design_top__DOT__colorpxls_rght) 
                                     - (IData)(vlTOPp->design_top__DOT__colorpxls_left)))) 
                     < (0x3ffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                  >> 4U))) ? (0x18U 
                                              | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                     : ((IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__left)
                         ? ((vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [0U] >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                 >> 1U)))
                             ? (1U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                             : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin01) 
                                 >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                >> 1U)))
                                 ? (2U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                 : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin012) 
                                     >= (0x1fffU & 
                                         ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                          >> 1U))) ? 
                                    (4U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                     : (8U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp)))))
                         : ((vlTOPp->design_top__DOT__color_filter__DOT__histogram
                             [7U] >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                 >> 1U)))
                             ? (0x80U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                             : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin67) 
                                 >= (0x1fffU & ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                                >> 1U)))
                                 ? (0x40U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                 : (((IData)(vlTOPp->design_top__DOT__colorpxls_bin567) 
                                     >= (0x1fffU & 
                                         ((IData)(vlTOPp->design_top__DOT__colorpxls) 
                                          >> 1U))) ? 
                                    (0x20U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))
                                     : (0x10U | (IData)(vlTOPp->design_top__DOT__centroid_calc__DOT__centroid_tmp))))))));
    vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside 
        = (0xffffU & ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel)
                       ? ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel) 
                          - (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside))
                       : ((IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel) 
                          + (IData)(vlTOPp->design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 8U) - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                  >> 4U)) : (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                              >> 4U) 
                                             - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                >> 8U))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 8U) - (IData)(vlTOPp->design_top__DOT__doutImg2Filt))
                    : ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                       - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                          >> 8U))));
    vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 4U) - (IData)(vlTOPp->design_top__DOT__doutImg2Filt))
                    : ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                       - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                          >> 4U))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 1U;
                }
            } else {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)))) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 0U;
    if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)))) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 1U;
            }
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 0U;
    if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)))) {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 1U;
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)))) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        } else {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vdesign_top::_sequent__TOP__5(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_sequent__TOP__5\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->design_top__DOT__color_filter__DOT__color_threshold = 1U;
    vlTOPp->design_top__DOT__color_filter__DOT__color_threshold 
        = (1U & ((4U & (IData)(vlTOPp->wRgbfilter))
                  ? ((2U & (IData)(vlTOPp->wRgbfilter))
                      ? ((1U & (IData)(vlTOPp->wRgbfilter))
                          ? (((((((IData)(vlTOPp->design_top__DOT__color_filter__DOT__gra_limit) 
                                  & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                     >> 0xbU)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                  >> 7U)) 
                                & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                   >> 3U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                              >> 0xaU)) 
                              & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                 >> 6U)) & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                            >> 2U))
                          : (IData)(vlTOPp->design_top__DOT__color_filter__DOT__yel_limit))
                      : ((1U & (IData)(vlTOPp->wRgbfilter))
                          ? (IData)(vlTOPp->design_top__DOT__color_filter__DOT__mag_limit)
                          : (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_limit)))
                  : ((2U & (IData)(vlTOPp->wRgbfilter))
                      ? ((1U & (IData)(vlTOPp->wRgbfilter))
                          ? (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cya_limit)
                          : (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_limit))
                      : ((~ (IData)(vlTOPp->wRgbfilter)) 
                         | (IData)(vlTOPp->design_top__DOT__color_filter__DOT__blu_limit)))));
    vlTOPp->design_top__DOT__doutImg2Filt = ((0x4affU 
                                              >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl))
                                              ? vlTOPp->design_top__DOT__frame_buff_in__DOT__ram
                                             [vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl]
                                              : (IData)(vlTOPp->design_top__DOT__frame_buff_in__DOT____Vxrand2));
    if (vlTOPp->__Vdlyvset__design_top__DOT__frame_buff_in__DOT__ram__v0) {
        vlTOPp->design_top__DOT__frame_buff_in__DOT__ram[vlTOPp->__Vdlyvdim0__design_top__DOT__frame_buff_in__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__design_top__DOT__frame_buff_in__DOT__ram__v0;
    }
    vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 8U)) > (0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                       >> 4U)));
    vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 8U)) > (0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt)));
    vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu 
        = ((0xfU & ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                    >> 4U)) > (0xfU & (IData)(vlTOPp->design_top__DOT__doutImg2Filt)));
    vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 8U) - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                  >> 4U)) : (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                              >> 4U) 
                                             - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                                                >> 8U))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 8U) - (IData)(vlTOPp->design_top__DOT__doutImg2Filt))
                    : ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                       - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                          >> 8U))));
    vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif 
        = (0xfU & ((IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)
                    ? (((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                        >> 4U) - (IData)(vlTOPp->design_top__DOT__doutImg2Filt))
                    : ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                       - ((IData)(vlTOPp->design_top__DOT__doutImg2Filt) 
                          >> 4U))));
    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 1U;
                }
            } else {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__red_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)))) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__blu_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 0U;
    if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)))) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 1U;
            }
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    vlTOPp->design_top__DOT__color_filter__DOT__grn_limit = 1U;
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 0U;
    if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn)))) {
        if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu)))) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 1U;
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__cya_limit = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        vlTOPp->design_top__DOT__color_filter__DOT__yel_limit = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((1U & (~ (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu)))) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U < (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U <= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__mag_limit = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 0U;
    if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_grn) {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        } else {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->design_top__DOT__color_filter__DOT__red_gt_blu) {
            if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                    if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->design_top__DOT__color_filter__DOT__grn_gt_blu) {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_grn_absdif))) {
                                vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((6U > (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                    if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__grn_blu_absdif))) {
                        if ((2U >= (IData)(vlTOPp->design_top__DOT__color_filter__DOT__red_blu_absdif))) {
                            vlTOPp->design_top__DOT__color_filter__DOT__gra_limit = 1U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vdesign_top::_sequent__TOP__6(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_sequent__TOP__6\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl 
        = vlTOPp->__Vdly__design_top__DOT__color_filter__DOT__cnt_pxl;
    vlTOPp->design_top__DOT__color_filter__DOT__end_pxl_cnt 
        = (0x4affU == (IData)(vlTOPp->design_top__DOT__color_filter__DOT__cnt_pxl));
}

void Vdesign_top::_eval(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_eval\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vdesign_top::_eval_initial(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_eval_initial\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vdesign_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::final\n"); );
    // Variables
    Vdesign_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdesign_top::_eval_settle(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_eval_settle\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vdesign_top::_change_request(Vdesign_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_change_request\n"); );
    Vdesign_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdesign_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((wea & 0xfeU))) {
        Verilated::overWidthError("wea");}
    if (VL_UNLIKELY((addrin & 0x8000U))) {
        Verilated::overWidthError("addrin");}
    if (VL_UNLIKELY((datain & 0xf000U))) {
        Verilated::overWidthError("datain");}
    if (VL_UNLIKELY((addrout & 0x8000U))) {
        Verilated::overWidthError("addrout");}
    if (VL_UNLIKELY((wRgbfilter & 0xf8U))) {
        Verilated::overWidthError("wRgbfilter");}
    if (VL_UNLIKELY((capture_newframe & 0xfeU))) {
        Verilated::overWidthError("capture_newframe");}
}
#endif  // VL_DEBUG

void Vdesign_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    wea = VL_RAND_RESET_I(1);
    addrin = VL_RAND_RESET_I(15);
    datain = VL_RAND_RESET_I(12);
    addrout = VL_RAND_RESET_I(15);
    wRgbfilter = VL_RAND_RESET_I(3);
    capture_newframe = VL_RAND_RESET_I(1);
    dataout = VL_RAND_RESET_I(12);
    leds = VL_RAND_RESET_I(8);
    centroid_nop = VL_RAND_RESET_I(8);
    new_centroid = VL_RAND_RESET_I(1);
    proximity = VL_RAND_RESET_I(3);
    motor_dps_left_o = VL_RAND_RESET_I(16);
    motor_dps_rght_o = VL_RAND_RESET_I(16);
    design_top__DOT__centroid_wire = VL_RAND_RESET_I(8);
    design_top__DOT__doutImg2Filt = VL_RAND_RESET_I(12);
    design_top__DOT__pxColRet = VL_RAND_RESET_I(7);
    design_top__DOT__new_frame_proc = VL_RAND_RESET_I(1);
    design_top__DOT__new_centroid_w = VL_RAND_RESET_I(1);
    design_top__DOT__proximity_w = VL_RAND_RESET_I(3);
    design_top__DOT__colorpxls = VL_RAND_RESET_I(14);
    design_top__DOT__colorpxls_left = VL_RAND_RESET_I(13);
    design_top__DOT__colorpxls_rght = VL_RAND_RESET_I(13);
    design_top__DOT__colorpxls_bin012 = VL_RAND_RESET_I(13);
    design_top__DOT__colorpxls_bin567 = VL_RAND_RESET_I(13);
    design_top__DOT__colorpxls_bin01 = VL_RAND_RESET_I(13);
    design_top__DOT__colorpxls_bin67 = VL_RAND_RESET_I(13);
    design_top__DOT__frame_buff_in__DOT____Vxrand2 = VL_RAND_RESET_I(12);
    { int __Vi0=0; for (; __Vi0<19200; ++__Vi0) {
            design_top__DOT__frame_buff_in__DOT__ram[__Vi0] = VL_RAND_RESET_I(12);
    }}
    design_top__DOT__frame_buff_in__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    design_top__DOT__color_filter__DOT__cnt_pxl = VL_RAND_RESET_I(15);
    design_top__DOT__color_filter__DOT__cnt_pxl_proc = VL_RAND_RESET_I(15);
    design_top__DOT__color_filter__DOT__cnt_pxl_proc_rg = VL_RAND_RESET_I(15);
    design_top__DOT__color_filter__DOT__end_pxl_cnt = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__end_ln = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__inner_frame_rg = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__red_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__grn_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__blu_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__yel_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__cya_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__mag_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__gra_limit = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__color_threshold = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__red_gt_grn = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__red_gt_blu = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__grn_gt_blu = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__red_grn_absdif = VL_RAND_RESET_I(4);
    design_top__DOT__color_filter__DOT__red_blu_absdif = VL_RAND_RESET_I(4);
    design_top__DOT__color_filter__DOT__grn_blu_absdif = VL_RAND_RESET_I(4);
    design_top__DOT__color_filter__DOT__ind = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            design_top__DOT__color_filter__DOT__histogram_tmp[__Vi0] = VL_RAND_RESET_I(11);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            design_top__DOT__color_filter__DOT__histogram[__Vi0] = VL_RAND_RESET_I(11);
    }}
    design_top__DOT__color_filter__DOT__colorpxls = VL_RAND_RESET_I(14);
    design_top__DOT__color_filter__DOT__colorpxls_left = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__colorpxls_rght = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__colorpxls_bin012 = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__colorpxls_bin567 = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__colorpxls_bin01 = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__colorpxls_bin67 = VL_RAND_RESET_I(13);
    design_top__DOT__color_filter__DOT__col = VL_RAND_RESET_I(8);
    design_top__DOT__color_filter__DOT__col_rg = VL_RAND_RESET_I(8);
    design_top__DOT__color_filter__DOT__hist_bin_rg = VL_RAND_RESET_I(3);
    design_top__DOT__color_filter__DOT__row_num = VL_RAND_RESET_I(7);
    design_top__DOT__color_filter__DOT__processing = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__orig_pxl_rg = VL_RAND_RESET_I(12);
    design_top__DOT__color_filter__DOT__proc_we_rg1 = VL_RAND_RESET_I(1);
    design_top__DOT__color_filter__DOT__proc_we_rg2 = VL_RAND_RESET_I(1);
    design_top__DOT__centroid_calc__DOT__centroid_tmp = VL_RAND_RESET_I(8);
    design_top__DOT__centroid_calc__DOT__left = VL_RAND_RESET_I(1);
    design_top__DOT__frame_buff_out__DOT____Vxrand2 = VL_RAND_RESET_I(12);
    { int __Vi0=0; for (; __Vi0<19200; ++__Vi0) {
            design_top__DOT__frame_buff_out__DOT__ram[__Vi0] = VL_RAND_RESET_I(12);
    }}
    design_top__DOT__frame_buff_out__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_left = VL_RAND_RESET_I(16);
    design_top__DOT__motor_ctrl_spi_out__DOT__motor_dps_rght = VL_RAND_RESET_I(16);
    design_top__DOT__motor_ctrl_spi_out__DOT__vel = VL_RAND_RESET_I(16);
    design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside = VL_RAND_RESET_I(16);
    design_top__DOT__motor_ctrl_spi_out__DOT__vel_slowside = VL_RAND_RESET_I(16);
    design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel = VL_RAND_RESET_I(1);
    design_top__DOT__motor_ctrl_spi_out__DOT__lost_obj = VL_RAND_RESET_I(1);
    design_top__DOT__motor_ctrl_spi_out__DOT__centroid2bit = VL_RAND_RESET_I(2);
    design_top__DOT__motor_ctrl_spi_out__DOT__cnt = VL_RAND_RESET_I(4);
    design_top__DOT__motor_ctrl_spi_out__DOT__cnt_end = VL_RAND_RESET_I(1);
    design_top__DOT__motor_ctrl_spi_out__DOT__last_cent_valid = VL_RAND_RESET_I(8);
    design_top__DOT__motor_ctrl_spi_out__DOT__last_seen_left = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[0] = 0x258U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[1] = 0x226U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[2] = 0x1c2U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[3] = 0x15eU;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[4] = 0xfaU;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[5] = 0x96U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[6] = 0xff06U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__vel[7] = 0xfe3eU;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[0] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[1] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[2] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[3] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[4] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[5] = 0U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[6] = 1U;
    __Vtable1_design_top__DOT__motor_ctrl_spi_out__DOT__neg_vel[7] = 1U;
    __Vtableidx2 = 0;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[0] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[1] = 0xfeedU;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[2] = 0xff1fU;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[3] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[4] = 0xff51U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[5] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[6] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[7] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[8] = 0xff83U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[9] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[10] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[11] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[12] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[13] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[14] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[15] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[16] = 0xff83U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[17] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[18] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[19] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[20] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[21] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[22] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[23] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[24] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[25] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[26] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[27] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[28] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[29] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[30] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[31] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[32] = 0xff51U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[33] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[34] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[35] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[36] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[37] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[38] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[39] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[40] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[41] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[42] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[43] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[44] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[45] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[46] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[47] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[48] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[49] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[50] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[51] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[52] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[53] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[54] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[55] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[56] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[57] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[58] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[59] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[60] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[61] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[62] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[63] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[64] = 0xff1fU;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[65] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[66] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[67] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[68] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[69] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[70] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[71] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[72] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[73] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[74] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[75] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[76] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[77] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[78] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[79] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[80] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[81] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[82] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[83] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[84] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[85] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[86] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[87] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[88] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[89] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[90] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[91] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[92] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[93] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[94] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[95] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[96] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[97] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[98] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[99] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[100] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[101] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[102] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[103] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[104] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[105] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[106] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[107] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[108] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[109] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[110] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[111] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[112] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[113] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[114] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[115] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[116] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[117] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[118] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[119] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[120] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[121] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[122] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[123] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[124] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[125] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[126] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[127] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[128] = 0xfeedU;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[129] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[130] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[131] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[132] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[133] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[134] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[135] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[136] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[137] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[138] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[139] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[140] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[141] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[142] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[143] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[144] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[145] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[146] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[147] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[148] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[149] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[150] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[151] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[152] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[153] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[154] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[155] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[156] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[157] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[158] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[159] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[160] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[161] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[162] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[163] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[164] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[165] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[166] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[167] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[168] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[169] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[170] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[171] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[172] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[173] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[174] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[175] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[176] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[177] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[178] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[179] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[180] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[181] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[182] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[183] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[184] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[185] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[186] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[187] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[188] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[189] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[190] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[191] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[192] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[193] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[194] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[195] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[196] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[197] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[198] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[199] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[200] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[201] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[202] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[203] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[204] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[205] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[206] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[207] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[208] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[209] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[210] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[211] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[212] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[213] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[214] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[215] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[216] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[217] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[218] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[219] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[220] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[221] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[222] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[223] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[224] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[225] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[226] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[227] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[228] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[229] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[230] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[231] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[232] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[233] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[234] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[235] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[236] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[237] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[238] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[239] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[240] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[241] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[242] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[243] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[244] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[245] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[246] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[247] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[248] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[249] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[250] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[251] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[252] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[253] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[254] = 0U;
    __Vtable2_design_top__DOT__motor_ctrl_spi_out__DOT__vel_addside[255] = 0U;
    __Vdlyvdim0__design_top__DOT__frame_buff_in__DOT__ram__v0 = 0;
    __Vdlyvval__design_top__DOT__frame_buff_in__DOT__ram__v0 = VL_RAND_RESET_I(12);
    __Vdlyvset__design_top__DOT__frame_buff_in__DOT__ram__v0 = 0;
    __Vdly__design_top__DOT__color_filter__DOT__cnt_pxl = VL_RAND_RESET_I(15);
    __Vm_traceActivity = 0;
}
