onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+clk_315 -L xpm -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.clk_315 xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {clk_315.udo}

run -all

endsim

quit -force
