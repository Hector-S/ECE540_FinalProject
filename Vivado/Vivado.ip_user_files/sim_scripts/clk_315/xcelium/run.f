-makelib xcelium_lib/xpm -sv \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../../Vivado.srcs/sources_1/ip/clk_315/clk_315_clk_wiz.v" \
  "../../../../Vivado.srcs/sources_1/ip/clk_315/clk_315.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

