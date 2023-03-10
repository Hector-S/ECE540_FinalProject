// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
// Date        : Mon Feb 27 20:42:08 2023
// Host        : DESKTOP-UOPH7KM running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               d:/Users/Hector/Desktop/Winter_2023/ECE_540/Labs/FinalProject/Vivado/Vivado.srcs/sources_1/ip/clk_315/clk_315_stub.v
// Design      : clk_315
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module clk_315(clk_31_5, reset, clk_in1)
/* synthesis syn_black_box black_box_pad_pin="clk_31_5,reset,clk_in1" */;
  output clk_31_5;
  input reset;
  input clk_in1;
endmodule
