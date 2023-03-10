
module vga_top(
	input logic clk, rst,
	output logic [3:0] red, green, blue,
	output logic hs, vs,
	//
    // WISHBONE Interface
    //
    input logic             wb_clk_i,	// Clock
    input logic             wb_rst_i,	// Reset
    input logic             wb_cyc_i,	// cycle valid input
    input logic   [31:0]	wb_adr_i,	// address bus inputs
    input logic   [31:0]	wb_dat_i,	// input data bus
    input logic	  [3:0]     wb_sel_i,	// byte select inputs
    input logic             wb_we_i,	// indicates write transfer
    input logic             wb_stb_i,	// strobe input
    output logic  [31:0]    wb_dat_o,	// output data bus
    output logic            wb_ack_o,	// normal termination
    output logic            wb_err_o,	// termination w/ error
    output logic            wb_inta_o	// Interrupt request output 
);

//Declare ROMs/sprites.


wire VideoEnabled;
//Data out for memory module
wire [11:0] DataOut[2];

wire [11:0] DataInWrite;
wire [16:0] Address[2];
wire [16:0] PixNum;
wire WriteEnable[2];
wire CLK[2]; //Clocks vga mem. Use 31.5 CLK in all cases for quicker synthesis/implementation.
//When hardware is known working. Can swap back to using other wishbone clock signal or 31.5 clk signal based on FrameSelect.

ROM_Player SPR_Player(
    .a(RegSpriteAddress[0])
);
ROM_PlayerFlying SPR_PlayerFlying(
    .a(RegSpriteAddress[1])
);
ROM_PlayerBullet SPR_PlayerBullet(
    .a(RegSpriteAddress[2])
);


vga_mem Memory[2]( //Memory
    .clka(clk),
    .wea(WriteEnable),
    .addra(Address),
    .dina(DataInWrite),
    .douta(DataOut)
);

dtg DTG( //Display Time Generator
    .clock(clk),
    .rst(rst), 
    .video_on(VideoEnabled), 
    .horiz_sync(hs), 
    .vert_sync(vs),
    .pix_num(PixNum)
);

reg FrameSelect = 0; //Controls which frame is rendered.

reg [16:0] RenderAddress = 0;
reg DupVertical = 0;
reg DupHorizontal = 0;

//Display Video
always @(posedge clk)
begin
    //Display Pixels
    if(VideoEnabled == 0) begin
        red <= 4'b0000;
        green <= 4'b0000;
        blue <= 4'b0000;
    end else begin
        red <= DataOut[FrameSelect][3:0];
        green <= DataOut[FrameSelect][7:4];
        blue <= DataOut[FrameSelect][11:8];
        DupHorizontal = !DupHorizontal;
        if(!DupHorizontal) begin //Duplicate horizontal pixels.
            RenderAddress = RenderAddress + 1;
            if(RenderAddress % 17'd320 == 0) begin //Every time a row finishes
                DupVertical = !DupVertical;
                if(DupVertical) begin
                    RenderAddress -= 320; //Repeat row to next row.
                end
            end
            if(RenderAddress == 76800) begin
                RenderAddress = 0;
            end
        end
    end
end

//Handle Registers
reg wb_ack_ff;
reg [31:0] wb_output = 0; //Hold output.
reg [31:0] RegSpriteAddr = 0; //Address to currently selected sprite data.
reg [16:0] RegPixelAddress = 0;
reg [11:0] RegDataOut;
reg [11:0] RegDataIn = 0;
reg [4:0]  RegSpriteSelect = 0; //What ROM is selected for reading.
reg [16:0] RegSpritePosition [32]; //32 Position registers for the sprites.
reg [7:0]  RegSpriteAddress [32]; //32 render pixel address registers for the sprites.

//Initialize sprite positions to be out of bounds of screen so they don't render.
//Initialize sprite pixel render address.
initial begin
    for(int i = 0; i < 32; i = i + 1) begin
        RegSpritePosition[i] = 81601;
        RegSpriteAddress[i] = 0;
    end
end

always @(posedge wb_clk_i, posedge wb_rst_i) begin
    if (wb_rst_i) begin
        wb_ack_ff = 0;
        RegSpriteAddr = 32'h00000000; //Sprite at 0th position selected.
        RegDataIn = 0;
        FrameSelect = 0;
    end else if(wb_we_i) begin //Write to registers
        case (wb_adr_i[5:2])
            0:   FrameSelect = wb_ack_ff ? wb_dat_i[0] : FrameSelect;
            1:   RegPixelAddress = wb_ack_ff ? wb_dat_i[16:0] : RegPixelAddress; //Set pixel address we're reading and writing to.
            //2:   //Pixel Data Out register. Don't write to.
            3:   RegDataIn = wb_ack_ff ? wb_dat_i[11:0] : RegDataIn; //Set value of what is being written to current address in unselected frame.
        endcase
        // Ensure 1 wait state even for back to back host requests
        wb_ack_ff = ! wb_ack_ff & wb_stb_i & wb_cyc_i;
    end else begin
        case (wb_adr_i[5:2]) //Read registers.
            0:   wb_output = {31'b00, FrameSelect};  //Output register data or output 0s.
            1:   wb_output = RegPixelAddress;  //Output register data or output 0s.
            2:   wb_output = RegDataOut;
            //3:  //Pixel Data in register. Don't read.
        endcase
        // Ensure 1 wait state even for back to back host requests
        wb_ack_ff = ! wb_ack_ff & wb_stb_i & wb_cyc_i;
    end
end
assign   wb_ack_o = wb_ack_ff;
assign   wb_dat_o = wb_output;

assign WriteEnable[0] = FrameSelect; //Only enable writes on frame buffer not selected.
assign WriteEnable[1] = !FrameSelect;
//assign CLK[0] = FrameSelect ? wb_clk_i : clk; //Unselected clock runs on wishbone clock for reads and writes.
//assign CLK[1] = (!FrameSelect) ? wb_clk_i : clk;
assign Address[0] = FrameSelect ? RegPixelAddress : RenderAddress; //PixNum/dtg address for video out.
assign Address[1] = (!FrameSelect) ? RegPixelAddress : RenderAddress; //PixelAddress for read/write.
assign DataInWrite = RegDataIn; //Data we're writing.
assign RegDataOut = DataOut[!FrameSelect];

endmodule

