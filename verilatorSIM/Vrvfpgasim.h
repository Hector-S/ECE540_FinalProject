// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRVFPGASIM_H_
#define _VRVFPGASIM_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_VerilatedVcd;
class Vrvfpgasim_rvfpgasim;


//----------

VL_MODULE(Vrvfpgasim) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vrvfpgasim_rvfpgasim* rvfpgasim;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(o_gpio,0,0);
    VL_IN8(i_pb,4,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_tck;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_trst_n;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__4__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__5__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__6__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__7__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
    };
    struct {
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
    };
    struct {
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__rptc_ctrl;
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        CData/*0:0*/ __Vm_traceActivity[27];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrvfpgasim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrvfpgasim();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vrvfpgasim__Syms* __restrict vlSymsp);
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrvfpgasim__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgSub3(void* userp, VerilatedVcd* tracep);
    static void traceChgSub4(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub4(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
