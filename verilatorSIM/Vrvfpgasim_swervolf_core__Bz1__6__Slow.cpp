// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_swervolf_core__Bz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

void Vrvfpgasim_swervolf_core__Bz1::_settle__TOP__rvfpgasim__swervolf__8(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_swervolf_core__Bz1::_settle__TOP__rvfpgasim__swervolf__8\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp465[5];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
        = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
    if ((0x800000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
        if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
        } else {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                           << 7U) & (((0xffffff80U 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write)) 
                                      | ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                             >> 7U)) 
                                         << 7U)) | 
                                     ((4U == ((0x17U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                          >> 0x15U)))))
                                               ? (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                             >> 0x15U))))))
                                               : 0U)) 
                                      << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)));
            }
        }
    } else {
        if ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write) 
                            & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q))) 
                           << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                      << 7U) & (((7U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q)) 
                                                 << 7U) 
                                                | (0xffffff80U 
                                                   & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                             >> 7U)) 
                                                           << 7U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q) 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag 
                                                              >> 0x15U))) 
                                                         << 7U)))))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_resp_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0xffffff80U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                          & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                                 >> 7U)) 
                                             << 7U)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read) 
                                            << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en)) 
                       | (0xffffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en) 
                                         & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_read_error) 
                                              & (7U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rid_q))) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_rsp_write_error) 
                                                & (7U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_bid_q)))) 
                                            << 7U))));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
                    = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en) 
                               >> 7U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                            >> 7U))))
                        ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[7U])
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q 
                                       >> 0x20U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q))
                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)) 
                       | (((((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge) 
                                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_enQ)) 
                          << 7U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_bus_en)));
            }
        } else {
            if ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = (0x80U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en));
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                       | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3))) 
                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en))) 
                                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                  & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))))) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                              & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                          << 7U));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U] 
                    = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                        & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5);
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en 
                    = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en)) 
                       | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)));
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp_raw;
    if ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                    >> 0x13U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                   | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                              >> 0x21U))) | (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                     >> 0x22U)))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp = 0ULL;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x2000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x1000000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x800000000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x800000000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (1ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
            = (0x2000ULL | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__iccrit_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ic_crit_wd_rdy_mod) 
            << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word) 
                       << 1U) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                       >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2 
        = ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))) 
           & ((0xf0U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half))) 
                        << 4U)) | (0xfU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_w_debug 
        = (7U & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt) 
                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                   >> 0x12U)))) ? (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                           >> 0x17U))
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_q)
                      ? (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))
                      : (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = (((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
            & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1_ns 
        = ((((((- (IData)((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                               >> 9U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
               & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                            << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1))) 
              | ((- (IData)(((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1)) 
                              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U] 
                                    >> 9U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                 & ((0x1cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                              << 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_taken_e1) 
                                          << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1))))) 
             | ((- (IData)(((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                  >> 2U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U] 
                                   >> 0x12U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))) 
                & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1) 
                             << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_taken_e1)))) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                 >> 2U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4))) 
           | ((- (IData)((1U & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                     >> 2U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e1))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_valid_e1)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                       >> 1U)) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 1U) | (0x1fffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xfU)))) 
               & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 1U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 2U) | (0x3fffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 1U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xeU)))) 
               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 3U) | (0x7fff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 2U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xdU)))) 
               & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 3U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
               : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                   << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_bp_mem_mask 
        = (((((((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask)))) 
                  & (1U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                           << 1U))) | ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                                      >> 1U)))) 
                                       & (2U | (0xfcU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 2U))))) 
                | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                     >> 2U)))) & (4U 
                                                  | (0xf8U 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                        << 3U))))) 
               | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                    >> 3U)))) & (8U 
                                                 | (0xf0U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                       << 4U))))) 
              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                   >> 4U)))) & (0x10U 
                                                | (0xe0U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 5U))))) 
             | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                  >> 5U)))) & (0x20U 
                                               | (0xc0U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                     << 6U))))) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                 >> 6U)))) & (0x40U 
                                              | (0x80U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                    << 7U))))) 
           | (0x80U & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_mask) 
                                        >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__Vfuncout 
        = (0xfU & ((((((((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                >> 7U)) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                 >> 6U))) 
                        + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                 >> 5U))) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                   >> 4U))) 
                      + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                               >> 3U))) + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                                                 >> 2U))) 
                    + (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid) 
                             >> 1U))) + (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__countones__3__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2 
        = (((((0x1ffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                              >> 3U)) | (0xffffff8U 
                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                            >> 4U))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                << 3U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                               >> 1U)) << 3U)) | ((
                                                   (((0x3ffffffcU 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                         >> 2U)) 
                                                     | (0x1ffffffcU 
                                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                           >> 3U))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                       << 2U)) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                        >> 1U)) 
                                                      << 2U)) 
                                                  | (((((0x7ffffffeU 
                                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                            >> 1U)) 
                                                        | (0x3ffffffeU 
                                                           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                              >> 2U))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                          << 1U)) 
                                                      & ((~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                           >> 1U)) 
                                                         << 1U)) 
                                                     | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_mask_f2)) 
                                                             >> 1U)) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__rs_addr__offset 
        = ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                  >> 2U)) | (1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                      >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                    >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
             >> 1U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
              >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready 
        = ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns)) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
               >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie_ns) 
                          >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata 
        = (((QData)((IData)((((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                & (3U == (3U & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x20U))))) 
                               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                     >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                                 >> 3U)) 
                             | ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (3U == (3U & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                          >> 0x10U))))) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                       >> 1U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                                   >> 2U))))) 
            << 0x24U) | (((QData)((IData)((((((((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x20U))))) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                      >> 2U)))) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                  & (3U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                 >> 0x20U))))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                    >> 2U))) 
                                             | (((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                 & (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                >> 0x10U))))) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                       >> 1U))))) 
                                            | (((3U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                & (3U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                               >> 0x10U))))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc) 
                                                  >> 1U))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
                          << 0x23U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_sbecc)) 
                                        << 0x22U) | 
                                       (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_perr)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            (((((((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                    & (3U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U))))) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          >> 2U)))) 
                                                                  << 0x1fU) 
                                                                 | (0x80000000U 
                                                                    & ((((3U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                         & (3U 
                                                                            != 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U))))) 
                                                                        << 0x1fU) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                          << 0x1dU)))) 
                                                                | ((((3U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                     & (3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x10U))))) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                           >> 1U)))) 
                                                                   << 0x1fU)) 
                                                               | (0x80000000U 
                                                                  & ((((3U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                       & (3U 
                                                                          != 
                                                                          (3U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x10U))))) 
                                                                      << 0x1fU) 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf) 
                                                                        << 0x1eU)))) 
                                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                                 << 0x1fU)) 
                                                             | ((3U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)))
                                                                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__secondpc
                                                                 : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__thirdpc)))) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (((3U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                               & (3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                              >> 0x10U))))) 
                                                              | ((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                 & (3U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                                >> 0x20U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata 
        = (((QData)((IData)((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__icaf_eff) 
                                >> 1U)))) << 0x24U) 
           | (((QData)((IData)(((((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                  & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc)))) 
                                 | ((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndbecc))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))))) 
               << 0x23U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_sbecc)) 
                             << 0x22U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_perr)) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              ((((((3U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                   & (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf)))) 
                                                                  | ((3U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__alignicaf))) 
                                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                                << 0x1fU) 
                                                               | vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
        = ((0xfe000000U & ((((0xfe000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                 << 0x19U) & ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | (0xe000000U 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                    << 0x15U))))) 
                            | (0x6000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                              << 0x19U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                                << 0x16U)))) 
                           | (0xe000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                             << 0x19U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                               << 0x16U))))) 
           | ((0x1fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
              | ((0xf80U & ((((0xffffff80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbroffset8_1))) 
                                  << 7U) & ((0xf00U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d) 
                                                << 8U)) 
                                            | (0x80U 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__sbr8d))))) 
                             | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6_2))) 
                                           << 7U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswimm6d) 
                                           << 9U)))) 
                            | (0xe00U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7_2))) 
                                          << 7U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__uswspimm7d) 
                                          << 9U))))) 
                 | (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_illegal) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_illegal) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_lockout)))
                       ? (((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal)))
                           ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)
                           : ((((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                & (3U != (3U & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                        >> 0x10U))))) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal)))
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                          >> 0x10U))
                               : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                          >> 0x20U))))
                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_illegal_inst)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
               >> 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                              >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                            >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val 
        = (((((0x7fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                           >> 1U))) | (0x3fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                   >> 2U)))) 
             | (0x1fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                            >> 3U)))) | (0xfU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                    >> 4U)))) 
           | ((- (IData)((1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
              >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                           >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                     >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
               >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                            >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                 >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                              >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                     >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                  & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                          >> 2U)) << 3U) | (0xfffffff8U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                               << 1U))))) 
           | ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                     & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                             >> 2U)) << 2U) | (0x7ffffffcU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                  >> 1U))))) 
              | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                        & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4)) 
                           << 1U))) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_e4) 
                                                   >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_lo_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)
                  : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                     >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac 
                  >> (1U | (0x1eU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                     >> 0x1bU)))) & 
                 (~ ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                       >> 0x1cU))) 
                     | (0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                         >> 0x1cU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_unaligned 
        = ((7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1 
        = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                   >> 0x10U))) & (0xf004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                      >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1 
        = ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                     >> 0xfU))) & (0x1e018U 
                                                   == 
                                                   (0x1ffffU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                       >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1 
        = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                  >> 2U)) != (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xffffffc7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffffff8U & ((0x20U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U)) 
                                       << 5U)) | (0x18U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x28U)) 
                                                     << 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xffe7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x180U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x25U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0x81fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((0x78000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                    >> 0x21U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x1fU)) << 0xeU)) 
                 | (0x2000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x20U)) 
                               << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfff9fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | (0x60U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                >> 0x1dU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfe1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((0x1800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                   >> 0x1aU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 0x18U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x19U)) << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x17U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_case))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja_case))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_case))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff 
        = (1U & ((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                             >> 0x31U))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x30U)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                  >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                    >> 0x2fU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                  >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtrff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)
                  ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3))
                      ? ((IData)(2U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr))
                      : ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
           | (0xfffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_lo) 
                               << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3)) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                                << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                   >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffeU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffffcU & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)) 
           | (0xffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_hi_hi) 
                               << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)) 
           | (0xffffff8U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_ldmatch_lo_hi) 
                               << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_dc3) 
                                         >> 4U)) & 
                             ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
                              << 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3) 
                                         << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
              & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                 | ((0U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((1U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((2U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((3U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((4U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((5U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((6U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_stbuf_reqvld_dc3) 
               & ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)) 
                  | ((7U == (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__WrPtr)))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_dc3)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))
                           ? ((((- (IData)((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb)))) 
                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                   >> 1U)) | ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout)) 
                              | ((- (IData)(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xffU & (((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi)))) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3)) 
                       | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                     >> 0x20U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xff00U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                             >> 1U)))) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                      >> 8U))) | ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                                                 >> 1U)))) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                                             >> 0x28U)))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xff0000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                               >> 2U)))) 
                             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                        >> 0x10U))) 
                            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                                 >> 2U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x30U)))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi) 
           | (0xff000000U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                                                 >> 3U)))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                          >> 0x18U))) 
                              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi) 
                                                   >> 3U)))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__store_data_ext_dc3 
                                            >> 0x38U)))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U]
                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U]
                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xff00U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[2U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                            >> 8U))
                           : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                               ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                            >> 8U))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xff00U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                            >> 8U))
                           : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                               ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                  >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                            >> 8U))) 
                         << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xff0000U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                             ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[2U] 
                                 << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                              >> 0x10U))
                             : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                 ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                             ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                 << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                              >> 0x10U))
                             : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                 ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                    >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                                 >> 0x10U))) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3) 
           | (0xff000000U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                               ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[2U] 
                                   << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                             >> 0x18U))
                               : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_hi_dc3))
                                   ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_hi_dc3 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3) 
           | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_byteen_ext_dc3))
                               ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[1U] 
                                   << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__store_data_ext_dc3[0U] 
                                             >> 0x18U))
                               : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwdbyteen_lo_dc3))
                                   ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3 
                                      >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ecc__DOT__sec_data_lo_dc3 
                                                   >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                 >> 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 3U))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                 >> 0xbU) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 9U))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                 >> 0x11U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                              >> 0xfU))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
        = (((- (IData)((1U & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
           | ((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                 >> 0x17U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                              >> 0x15U))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__store_data_trigger_dc3));
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__fp_enable_ff))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U]
                            : 0U))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U]
                            : 0U))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i0_flush_lower_e4)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U]
                : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_i1_flush_lower_e4)
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U]
                    : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U]
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U]
                            : 0U))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT____Vcellout__predict_mp_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4_ns 
        = (((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                              >> 9U) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                           << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                            >> 8U)))) 
             | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4) 
                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                   >> 9U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
                & ((0x1cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                             << 2U)) | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                               >> 7U)) 
                                        | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                 >> 8U)))))) 
            | ((- (IData)((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                  >> 0x12U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))) 
               & ((0x1eU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4) 
                            << 1U)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                             >> 8U))))) 
           | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_valid_e4)) 
                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pred_valid_e4)))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__bp_wb_ff__din 
        = ((0x30000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                        << 0xcU)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                      << 0xfU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4) 
                                                   << 0xeU) 
                                                  | ((0x3ffe000U 
                                                      & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                            >> 6U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                              << 0xdU)) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                               >> 2U)) 
                                                             << 0xdU)) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                              >> 9U)) 
                                                            << 0xdU))) 
                                                     | ((0x1800U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            << 7U)) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4) 
                                                               << 9U) 
                                                              | ((0x1fff00U 
                                                                  & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                         >> 0xbU) 
                                                                        & ((~ 
                                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                             >> 2U)) 
                                                                           << 8U)) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_i1_valid_e4) 
                                                                          << 8U)) 
                                                                      & ((~ 
                                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                         << 8U)) 
                                                                     & ((~ 
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                          >> 9U)) 
                                                                        << 8U))) 
                                                                 | ((0xc0U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                         << 0x12U) 
                                                                        | (0x3ffc0U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[1U] 
                                                                              >> 0xeU)))) 
                                                                    | ((0x30U 
                                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            << 0x10U) 
                                                                           | (0xfff0U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[1U] 
                                                                                >> 0x10U)))) 
                                                                       | ((8U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[0U] 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[0U] 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((0x7fffffeU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                                >> 5U)) 
                                                                                ^ 
                                                                                (0x3fffffeU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                                >> 6U)))) 
                                                                                | (1U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U) 
                                                                                ^ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 7U))))))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                  & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                          >> 2U)) << 3U) | (0xfffffff8U 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                               << 1U))))) 
           | ((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                     & (((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain) 
                             >> 2U)) << 2U) | (0x7ffffffcU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                  >> 1U))))) 
              | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                        & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4)) 
                           << 1U))) | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_chain)) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_e4) 
                                                   >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                     : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                        >> 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
               : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                            >> 0x11U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                     : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                        >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (2U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfff3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (2U & (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (4U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xffcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (4U & (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (8U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xcU)) << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xff3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (8U & (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                      : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU)) << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x10U & (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xfcffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x10U & (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x20U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xf3ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x20U & (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x40U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0xcfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x40U & (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_dc5)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nb)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_valid_dc5)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)) 
           | (0x80U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xcU)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in 
        = ((0x3fffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz)
                : ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                          >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                             >> 0x11U)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)) 
           | (0x80U & (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)
                         : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                            >> 0xdU)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain))
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_dc5)) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
               : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                  & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual)
                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfffff8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
               : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                   ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                   : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xffffc7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfffe3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfff1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xff8fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xfc7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0xe3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
               : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                   & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                   ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                   : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U] 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xffffff0fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U] 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffff0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U] 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xffff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U] 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfff0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[4U] 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xff0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[5U] 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xf0ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[6U] 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in) 
           | (((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out)
                : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                    & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_hi_dc5)
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[7U] 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drainvec_vld))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5)))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__end_addr_dc5
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[0U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[1U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[2U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[3U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[4U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[5U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[6U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data_in[7U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 9U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0xfU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0x12U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_state_ff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nxtstate 
                     >> 0x15U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 4U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 5U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 5U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 6U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 6U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_errorff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                     >> 7U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error_en) 
                                 >> 7U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_errorff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)(((((4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
                            | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 3U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 1U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 1U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 1U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 6U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 2U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 2U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 2U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 9U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 3U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 3U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 3U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0xcU))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 4U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 4U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 4U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0xfU))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 5U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 5U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 5U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0x12U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 6U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 6U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 6U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0x15U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 7U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 7U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 7U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U] 
           & (- (IData)(((((4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 3U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 1U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 6U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 2U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 9U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 3U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 3U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0xcU))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 4U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0xfU))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 5U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 5U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0x12U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 6U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 6U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U] 
              & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 0x15U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 7U)) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                               >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 1U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 1U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 1U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 2U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 2U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 3U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 3U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 4U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 4U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 4U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 5U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 5U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 5U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 6U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 6U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 7U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 7U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 7U))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error))) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
              | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 1U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 1U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 1U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 1U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 2U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 2U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 2U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 2U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 3U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 3U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 3U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 4U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 4U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 4U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 4U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 5U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 5U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 5U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 5U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 6U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 6U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 6U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 6U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 7U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                   >> 7U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                                 >> 7U))) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 7U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 1U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 1U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 2U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 2U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 3U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 3U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 4U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 4U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 5U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 5U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 6U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 6U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 6U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 7U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 7U)) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi)) 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                & (4U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst)) 
              & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                    >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb)) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual)) 
              | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 1U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 1U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 1U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 2U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 2U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 2U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                >> 3U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 3U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 3U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 4U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 4U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 4U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                  >> 5U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 5U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 5U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 6U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 6U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 6U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_bus_clk_en_q) 
                   & (4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                                   >> 7U)) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_error) 
                                   >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                              >> 7U)) 
              & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                     >> 7U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                   >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (1U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                            >> 3U))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                 >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                            >> 1U)) 
                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                   >> 1U)) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                 >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (2U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 2U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 2U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 2U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 2U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (3U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 3U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 3U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 3U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 3U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (4U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 4U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 4U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 4U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 4U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (5U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 5U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 5U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 5U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 5U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
           | (6U & (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 6U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 6U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 6U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 6U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                 | (- (IData)(((((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U))) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb) 
                                    >> 7U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                                               >> 7U)) 
                               & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                                      >> 7U)) | (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                                                  >> 7U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
            & (2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 1U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 3U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 2U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 6U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 3U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 9U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 4U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xcU)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 5U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0xfU)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 6U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x12U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any) 
                   + ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                        >> 7U) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                               >> 0x15U)))) 
                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                            >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = ((2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 3U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 6U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 9U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xcU))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xfU))) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                   >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x12U))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any) 
                   + ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x15U))) & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = ((1U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
           | ((2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 3U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 6U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 9U))) | ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                     >> 9U))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                    >> 3U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xcU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                       >> 0xcU))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0xfU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                       >> 0xfU))) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                      >> 5U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x12U))) | (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                        >> 0x12U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                       >> 6U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any) 
                   + ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                    >> 0x15U))) | (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                        >> 0x15U))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                       >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffeULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | (IData)((IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ) 
                                    & (~ ((2U == (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffdULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 1U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffffbULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 2U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffff7ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 3U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffefULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 4U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffdfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 5U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffffbfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 6U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffff7fULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 7U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffeffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 8U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffdffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 9U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffffbffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xaU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffff7ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xbU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffefffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xcU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffdfffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xdU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffffbfffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xeU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffff7fffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0xfU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffeffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x10U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffdffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x11U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffffbffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x12U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffff7ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x13U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffefffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x14U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffdfffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x15U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffffbfffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x16U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffff7fffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x17U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffeffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x18U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffdffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x19U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffffbffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1aU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffff7ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1bU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffefffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1cU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffdfffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1dU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffffbfffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1eU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffff7fffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x1fU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffeffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x20U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffdffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x21U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x21U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffffbffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x22U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x22U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffff7ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x23U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x23U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffefffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x24U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x24U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffdfffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x25U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x25U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffffbfffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x26U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x26U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffff7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x27U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x27U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffeffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x28U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffdffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x29U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x29U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffffbffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2aU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x2aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffff7ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2bU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x2bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffefffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2cU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x2cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffdfffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2dU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x2dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffffbfffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2eU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x2eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffff7fffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x2fU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x2fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffeffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x30U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffdffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x31U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x31U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfffbffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x32U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x32U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfff7ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x33U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x33U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffefffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x34U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x34U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffdfffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x35U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x35U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xffbfffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x36U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x36U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xff7fffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x37U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x37U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfeffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x38U)) 
                                     & (~ ((2U == (7U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfdffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x39U)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 1U))))))) 
              << 0x39U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xfbffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3aU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 2U))))))) 
              << 0x3aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xf7ffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3bU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 3U))))))) 
              << 0x3bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xefffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3cU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 4U))))))) 
              << 0x3cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xdfffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3dU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 5U))))))) 
              << 0x3dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0xbfffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3eU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 6U))))))) 
              << 0x3eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
        = ((0x7fffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
           | ((QData)((IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_ageQ 
                                              >> 0x3fU)) 
                                     & (~ ((2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                              >> 7U))))))) 
              << 0x3fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_fence_pending 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 3U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xffe7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x180U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x25U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0x81fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x78000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                    >> 0x21U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1fU)) << 0xeU)) 
                 | (0x2000U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x20U)) 
                               << 0xdU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfff9fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | (0x60U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x1dU)) << 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap 
        = ((0xfe1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_ap) 
           | ((0x1800U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                   >> 0x1aU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x18U)) << 0xaU)) 
                 | (0x200U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x19U)) << 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x17U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x79fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0x4000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x27U)))
                            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x29U)) : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 0x29U))) 
                          << 0xeU)) | (0x2000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U)))
                                                    ? (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 0x28U))) 
                                                  << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | ((0x40000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x27U)))
                             ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x16U)) : (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x16U))) 
                           << 0x12U)) | ((0x20000U 
                                          & (((1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x27U)))
                                               ? (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x15U))
                                               : (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x15U))) 
                                             << 0x11U)) 
                                         | (0x10000U 
                                            & (((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x27U)))
                                                 ? (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x14U))
                                                 : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x14U))) 
                                               << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p 
        = ((0x7efffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p) 
           | (0x1000U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x27U)))
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 0x1dU)) : (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                            >> 0x1dU))) 
                         << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0x17U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pcall_case))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pja_case))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pret_case))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x31U)) & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x29U))) 
                  | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                              >> 0x31U)) & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                    >> 9U)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff 
        = (1U & ((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0x31U))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write 
        = (1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs1_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x30U)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_rs2_en_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x2fU)) & (0U != (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r) 
                                                  >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2 
        = (0xffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2)) 
                    & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))))));
    __Vtemp465[0U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
                                            >> 8U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 2U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                              << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                           >> 0x10U)))) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 3U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                       >> 0x18U))));
    __Vtemp465[1U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U]) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                            >> 8U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 2U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                              << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                           >> 0x10U)))) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 3U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                       >> 0x18U))));
    __Vtemp465[2U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U]) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                            >> 8U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 2U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                              << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                           >> 0x10U)))) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 3U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                       >> 0x18U))));
    __Vtemp465[3U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U]) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                               << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                            >> 8U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 2U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                              << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                           >> 0x10U)))) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 3U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                             << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                       >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U] 
        = __Vtemp465[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
        = __Vtemp465[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
        = __Vtemp465[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
        = __Vtemp465[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
        = (0xffU & (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 1U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                             << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                          >> 8U)))) 
                     | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                            << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                         >> 0x10U)))) 
                    | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                          >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout) 
                   >> 1U)) & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))
                               : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))))
            : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2)))
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                             ? 2U : 0U) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                            ? 5U : 0U))
                     : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                             ? 3U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                      ? 0U : (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                               ? 4U
                                               : ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                                    ? 2U
                                                    : 0U)))))
                         : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)))
                             ? 1U : 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
               & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
              & (~ ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__e1ghrff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__ghr_e1_ns));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 2U))))) & 
                 ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 3U))))) & 
                 ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | (((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
              | (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 1U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 2U)))) << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 4U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 2U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 4U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 3U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 6U)))) << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr_ns 
        = (0x1fU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final))) 
                      & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[1U] 
                          << 0x1fU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                       >> 1U))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout)) 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                                      >> 1U)))))) 
                                                   & ((((((- (IData)(
                                                                     (4U 
                                                                      <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x10U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h))) 
                                                         | ((- (IData)(
                                                                       (3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                            & ((0x18U 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr)) 
                                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                        | ((- (IData)(
                                                                      (2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                           & ((0x1cU 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                  << 2U)) 
                                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                       | ((- (IData)(
                                                                     (1U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                          & ((0x1eU 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr) 
                                                                 << 1U)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__final_h)))) 
                                                      | ((- (IData)(
                                                                    (0U 
                                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__num_valids)))) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))) 
                    | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu_flush_final)) 
                                         & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                   >> 1U)))))))) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b0 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b1 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b2 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_wrlru_b3 
        = (0xfU & (((IData)(1U) << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f2)) 
                   & (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__lru_update_valid_f2) 
                                       >> 3U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__adder_pc_in_f2 
        = (0xfffffffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout) 
                         | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2))))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                               >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_total_branch_offset_f2 
        = (7U & ((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                     >> 3U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc_shift)) 
                  | ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                          >> 3U))))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_f2_enc))) 
                 | (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_fg_crossing_f2)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | (1U & (~ ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push)) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]) 
           | (0x80000000U & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]) 
                              << 0x1fU) | (0x80000000U 
                                           & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                               << 0x1fU) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                 << 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
        = ((0xc0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U]) 
           | (0x3fffffffU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]) 
                              >> 1U) | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                         >> 1U) & (
                                                   (0x7ffffffeU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                      >> 0x1fU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U]) 
           | (0xc0000000U & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                               << 0x1eU) & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                             << 0x1fU) 
                                            | (0x40000000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U] 
                                                  >> 1U)))) 
                             | (0xc0000000U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                                << 0x1eU) 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                                  << 1U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
        = ((0xe0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U]) 
           | (0x1fffffffU & ((0x3fffffffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                                              >> 2U) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                                >> 1U))) 
                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                 >> 2U) & ((0x3ffffffeU 
                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[3U] 
                                               << 1U)) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[2U] 
                                              >> 0x1fU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
            >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i1_instr 
        = (((((- (IData)(((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                          & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                  >> 0x20U))))))) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                         >> 0x20U))) | ((- (IData)(
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                    & (3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                   >> 0x20U))))))) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress2__DOT__l3 
                                           & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__third_legal)))))) 
            | ((- (IData)(((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                           & (3U == (3U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                   >> 0x10U))))))) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                          >> 0x10U)))) | ((- (IData)(
                                                     ((3U 
                                                       != 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))) 
                                                      & (3U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata 
                                                                     >> 0x10U))))))) 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress1__DOT__l3 
                                             & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_legal))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr 
        = (((- (IData)((3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
           | ((- (IData)((3U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__compress0__DOT__l3 
                 & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_legal))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset 
        = ((0x7ffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B) 
                            << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                      >> 1U))) | ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B) 
                                                           << 1U) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
                                                              << 1U) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B) 
                                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                               >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc 
        = (0x7fffffffU & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                             & ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                            | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                               & ((IData)(2U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))) 
                              & ((IData)(3U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                          | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B)))))) 
                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            << 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val 
        = ((((0x7fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                          >> 1U))) | (0x3fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                  >> 2U)))) 
            | (0x1fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                           >> 3U)))) | ((- (IData)(
                                                   (1U 
                                                    & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B)))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc2_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addrcheck__DOT__is_sideeffects_dc1)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_dccm_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_dccm_rden_dc1 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                >> 0xeU) | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                             >> 0xdU) & ((~ ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                              >> 0x10U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                                >> 0xfU))) 
                                         | (0U != (3U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1)))))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = ((((((((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                       >> 0x1cU))) 
                     & (~ ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                   >> 0x10U))) 
                           | (0x1e018U == (0x1ffffU 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 0xfU)))))) 
                    | ((0xfU == (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                         >> 0x1cU))) 
                       & (~ ((0xf004U == (0xffffU & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                           >> 0x10U))) 
                             | (0x1e018U == (0x1ffffU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                >> 0xfU))))))) 
                   | ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                              >> 0x10U))) 
                      & (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                                  >> 0xfU))))) 
                  | ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                               >> 0xfU))) 
                     & (0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                               >> 0x10U))))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1) 
                    & ((0U != (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1)) 
                       | (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                             >> 0x10U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1) 
               & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                     >> 0xbU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_in_pic_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__access_fault_dc2;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__addr_external_dc1 
        = (1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_dccm_dc1) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__picm_rden 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
               >> 0xeU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__picm_mken 
        = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
               >> 0xdU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc1));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any 
        = (0xfU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any) 
                     + (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1) 
                              << ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__isldst_dc1) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc1))))) 
                    + (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2) 
                             << ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc2) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc2))))) 
                   + (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3) 
                            << ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ldst_dc3) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__ldst_dual_dc3))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc2_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & (((((((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                               & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                                     >> 0xbU)))) << 
                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc1))) 
                       + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                          << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc2))) 
                      + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3) 
                         << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc3))) 
                     + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4) 
                        << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc4))) 
                    + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5) 
                       << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                   + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 3U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 9U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0xfU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> 0x15U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap 
        = ((0xfffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_ap) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xfffe0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall) 
                             << 0x11U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xffff8000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja) 
                             << 0xfU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U] 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d[0U]) 
           | (0xffff0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x1cU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pcall)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pja)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pret)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                        & (1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                           >> 0xaU)))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs1_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
                           & (0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i1_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 0xaU)) 
                                      == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                        & (1U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                           >> 5U)))) 
                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (2U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (3U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (4U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[3U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (5U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[4U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (6U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[5U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (7U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[6U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (8U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[7U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (9U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                              >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[8U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xaU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[9U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xbU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xcU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xdU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xeU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0xfU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xeU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x10U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0xfU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x11U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x10U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x12U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x11U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x13U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x12U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x14U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x13U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x15U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x14U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x16U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x15U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x17U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x16U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x18U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x17U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x19U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x18U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1aU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x19U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1bU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1aU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1cU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1bU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1dU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1cU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1eU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1dU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__gpr_i1_rs2_d 
           | ((- (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
                           & (0x1fU == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 5U)))) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_out[0x1eU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
              == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                           >> 0xaU))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                             >> 5U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 9U)) & ((0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0xaU))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x13U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0xaU))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0x14U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                  >> 0x1dU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                             >> 0x14U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 7U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 8U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x11U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 8U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 0x12U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                  >> 0x1bU)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                             >> 0x12U))) 
                                == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                             >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 5U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                  >> 0xfU)) & ((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 6U)) == 
                               (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                         >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 0x19U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                        << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                          >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_e4 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i1_wb 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
               >> 2U)) & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                  >> 6U))) 
                          == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                       >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs1_en_d) 
             & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                        >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                 >> 0xaU)) 
                                       == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                   >> 5U)) 
                                         == (0x1fU 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_rs2_en_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x2dU))) & ((0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r) 
                                                >> 5U)) 
                                      == (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_fn_dc2)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (4U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_fn_dc2)) 
           | (8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_dc2))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_byteenff__dout));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                           << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[0U] 
                                        >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_byteenff__dout));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 8U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_byteenff__dout));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                           << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[1U] 
                                        >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0xcU));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x10U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
                           << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[2U] 
                                        >> 0x10U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x18U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_byteenff__dout));
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                     >> 0xbU));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_addrin[3U] 
                          >> 0x10U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_byteenin 
                       >> 0x1cU));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dma_picff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addr_in_picff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__DOT____Vcellinp__dffs__din 
            = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_byteenff__dout));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en)) 
           | (0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                          >> 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 1U))) | (0x3ffffeU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 0xaU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 2U))) | (0x7ffffcU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 9U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (8U & ((0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                       << 3U))) | (0xfffff8U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 8U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x10U & ((0xfffffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 4U))) 
                       | (0x1fffff0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x20U & ((0xffffffe0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 5U))) 
                       | (0x3ffffe0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 6U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x40U & ((0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 6U))) 
                       | (0x7ffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 5U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en)) 
           | (0x80U & ((0xffffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_or_flush_en) 
                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                                          << 7U))) 
                       | (0xfffff80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                           >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U))) ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                                  ? ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                     | (((((0x40U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xbU) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                                             << 4U)) 
                                           | (0x30U 
                                              & ((- (IData)(
                                                            (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))))) 
                                                 << 4U))) 
                                          | (0x10U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                >> 7U) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                                << 4U))) 
                                         | (0x20U & 
                                            ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                             << 4U))) 
                                        | (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                                      ? ((0x2000U & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U)) 
                                         | ((0x300U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                >> 2U)) 
                                            | ((0x70U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                               | ((2U 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                       << 1U) 
                                                      | (0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                        >> 2U))))))
                                      : ((0x3ffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                         | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                             << 1U) 
                                            | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                            >> 1U)))) 
                          << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                            >> 1U)))) 
                          << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                              >> 2U)))) 
                            << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                              >> 2U)))) 
                            << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                                >> 3U)))) 
                              << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                                >> 3U)))) 
                              << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U] 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U] 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U] 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U] 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[4U] 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[5U] 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[6U] 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[7U] 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__sel_lo))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xffU & ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                            >> 1U)))) 
                          << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff00U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                            >> 1U)))) 
                          << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                              >> 2U)))) 
                            << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff0000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                              >> 2U)))) 
                            << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo) 
                                                >> 3U)))) 
                              << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
           | (0xff000000U & (((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo) 
                                                >> 3U)))) 
                              << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_hi_dc3)) 
            << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__store_ecc_datafn_lo_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U]) 
                 == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 1U)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                           >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                             >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                        >> 6U)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7fffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                              >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                         >> 1U))) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                            >> 0x1aU)))) << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                        >> 0xcU)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x1ffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                             >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                         << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                   << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                            >> 0x14U)))) << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4 
        = ((~ ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                 >> 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 0x11U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                         >> 6U))) & 
           (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__flush_dc3) 
           | ((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 6U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 1U) & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 2U) & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 3U) & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 4U) & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 5U) & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 6U) & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_rst) 
                 >> 7U) & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtr))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__FreezePtrEn))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_dualff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_dualff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_samedwff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_samedwff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_nbff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nb_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_nbff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_sideeffectff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_sideeffectff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_unsignff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_unsignff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 8U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xaU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_szff__DOT____Vcellinp__dffs__din 
        = (3U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz_in) 
                     >> 0xeU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_szff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_writeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_writeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_nomergeff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_nomergeff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in)
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 5U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_dualhiff__DOT____Vcellinp__dffs__din 
        = (1U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi_in) 
                     >> 7U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_dualhiff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 3U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 9U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0xfU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0x12U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_dualtagff__DOT____Vcellinp__dffs__din 
        = (7U & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                  ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualtag_in 
                     >> 0x15U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_dualtagff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 8U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0xcU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x14U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x18U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_byteenff__DOT____Vcellinp__dffs__din 
        = (0xfU & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
                    ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen_in 
                       >> 0x1cU) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_byteenff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__0__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[0U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__0__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__1__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[1U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__1__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__2__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[2U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__2__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__3__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[3U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__3__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__4__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[4U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__4__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__5__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[5U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__5__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__6__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[6U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__6__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk8__BRA__7__KET____DOT__buf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_wr_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr_in[7U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk8__BRA__7__KET____DOT__buf_addrff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz 
        = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                 >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_unsign) 
                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
        = (IData)(((0x3fU >= (0x18U & ((((0U == (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                    << 5U)))
                                          ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                       << 5U))))) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                           (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                  << 5U)))) 
                                       << 3U))) ? (
                                                   (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_hi)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_lo))) 
                                                   >> 
                                                   (0x18U 
                                                    & ((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                              << 5U)))
                                                          ? 0U
                                                          : 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                          ((IData)(1U) 
                                                           + 
                                                           (7U 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U))))) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                           (7U 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                                               << 5U)))) 
                                                       << 3U)))
                    : 0ULL));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
               == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                       >> 5U)))) & 
              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
               >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x3ffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                           == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                      << 0x11U) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0xfU)))) 
                          << 1U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x1cU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                         == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                    << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                              >> 0x19U)))) 
                        << 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                              == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         << 0x1dU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           >> 3U)))) 
                             << 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x7fff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                            == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 0xdU)))) 
                           << 4U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0x3e0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                          == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                     << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                               >> 0x17U)))) 
                         << 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                               == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         >> 1U))) << 6U) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)) 
           | (0xffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                       >> 0xbU))) << 7U) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                              >> 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_dual 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_nonblock_load_data_tag)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
             & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_pend_any))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
              >> 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffeULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | (IData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                     & ((((1U == (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                          | ((2U == 
                                              (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffdULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 3U))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 3U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 1U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 1U)))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffffbULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 6U))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 6U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 2U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (2U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 2U)))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xfffffffffffffff7ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 9U))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 9U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 3U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (3U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 3U)))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffefULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xcU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 0xcU))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 4U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (4U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 4U)))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffdfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0xfU))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 0xfU))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 5U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (5U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 5U)))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffffbfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x12U))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 0x12U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 6U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (6U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 6U)))))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in 
        = ((0xffffffffffffff7fULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_in) 
           | ((QData)((IData)((1U & ((((0U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state_en)) 
                                      & ((((1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                      >> 0x15U))) 
                                           | ((2U == 
                                               (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 0x15U))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                                                  >> 7U)))) 
                                          | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5))) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))) 
                                             & (7U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)))) 
                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_dual_dc5)) 
                                             & (0U 
                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_dc5))) 
                                            & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5))))) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                >> 7U)))))) 
              << 7U));
}
