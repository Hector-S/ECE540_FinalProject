-makelib xcelium_lib/xpm -sv \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "C:/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../../Vivado.srcs/sources_1/ip/clk_10m/clk_10m_clk_wiz.v" \
  "../../../../Vivado.srcs/sources_1/ip/clk_10m/clk_10m.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

