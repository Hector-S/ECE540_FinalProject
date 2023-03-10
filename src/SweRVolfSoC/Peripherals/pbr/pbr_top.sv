
module pbr_top(
	wb_clk_i, wb_rst_i, wb_cyc_i, wb_adr_i, wb_dat_i, wb_sel_i, wb_we_i, wb_stb_i,
	wb_dat_o, wb_ack_o, wb_err_o, wb_inta_o, ext_pbr_i
);
//
// WISHBONE Interface
//
input             wb_clk_i;	// Clock
input             wb_rst_i;	// Reset
input             wb_cyc_i;	// cycle valid input
input   [31:0]	  wb_adr_i;	// address bus inputs
input   [31:0]	  wb_dat_i;	// input data bus
input	  [3:0]   wb_sel_i;	// byte select inputs
input             wb_we_i;	// indicates write transfer
input             wb_stb_i;	// strobe input
output  [31:0]    wb_dat_o;	// output data bus
output            wb_ack_o;	// normal termination
output            wb_err_o;	// termination w/ error
output            wb_inta_o;	// Interrupt request output 

input [4:0]       ext_pbr_i;

module RNG(input logic clk, rst, //Random Number Generator. Random accuracy of 10% (1 - 10) or greater.
           output logic [31:0] Out);
    reg [31:0] InitValue = 32'h4AF03719;
    reg [31:0] Value = InitValue;
    reg MSB = 0;
    always@(posedge clk or posedge rst) begin
      if(rst) begin
          Value = InitValue;
        end else begin
          MSB = Value[31];
          Value = Value >> 1;
          Value[0] <= MSB ^ Value[1];
          Value[2] <= Value[12] ^ Value[18];
          Value[3] <= Value[28] ^ Value[22];
          Value[4] <= Value[11] ^ Value[2];
          Value[11] <= Value[25] ^ Value[19];
          Value[12] <= Value[8] ^ Value[13];
          Value[17] <= Value[25] ^ Value[20];
          Value[23] <= Value[1] ^ Value[15];
          Value[29] <= Value[31] ^ Value[7];
        end
end
    assign Out = Value;
endmodule

reg [31:0] RegRandom = 0; //Holds randomly generated number.

RNG rng(
    .clk(wb_clk_i),
    .rst(wb_rst_i),
    .Out(RegRandom)
);

//Handle registers.
reg wb_pbr_ack_ff;
reg [31:0] wb_pbr_reg;
reg [31:0] wb_output = 0; //Hold output.

always @(posedge wb_clk_i, posedge wb_rst_i) begin
    if (wb_rst_i) begin
        wb_pbr_ack_ff = 0;
        RegRandom = 0;
    end else if(wb_we_i) begin //Write to registers
        case (wb_adr_i[5:2])
            0:   wb_pbr_reg = wb_pbr_ack_ff && wb_we_i ? wb_dat_i : {27'h0000000, ext_pbr_i};
        endcase
        // Ensure 1 wait state even for back to back host requests
        wb_pbr_ack_ff = ! wb_pbr_ack_ff & wb_stb_i & wb_cyc_i;
    end else begin
        case (wb_adr_i[5:2]) //Read registers.
            0:   wb_output = wb_pbr_reg;
        endcase
        // Ensure 1 wait state even for back to back host requests
        wb_pbr_ack_ff = ! wb_pbr_ack_ff & wb_stb_i & wb_cyc_i;
    end
end


assign   wb_ack_o = wb_pbr_ack_ff;
assign   wb_dat_o = wb_output;
//assign   vga_wrv = vga_v[18:0];
//assign   vga_wrh = vga_h[18:0];

endmodule

