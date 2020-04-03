`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:34:43 04/03/2020
// Design Name:   SPI
// Module Name:   C:/WINDOWS/system32/SPI/SPI_TB.v
// Project Name:  SPI
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPI
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPI_TB;

	// Inputs
	reg rstb;
	reg clk = 1'b0;
	reg mlb = 1'b0;
	reg start = 1'b0;
	reg [7:0] m_tdat = 8'b00000000;
	reg [1:0] cdiv = 0;
	
	
	wire din;

	// Outputs
	wire ss;
	wire sck;
	wire dout;
	wire Mdone;
	wire [7:0] Mrdata;
	
	reg ten = 1'b0;
	reg [7:0] s_tdata = 8'b0000000;
	wire SLVdone;
	wire [7:0] SLVrdata;
	
	parameter PERIOD = 50;
	parameter real DUTY_CYCLE = 0.5;
	parameter OFFSET = 100;
	initial begin
		#OFFSET;
		forever
		
		begin
			clk=1'b0;
			#(PERIOD-(PERIOD*DUTY_CYCLE)) clk = 1'b1;
			#(PERIOD*DUTY_CYCLE);
		end
	end
	
	initial #10000 $stop;
	
	spi_master MAS (
		.rstb(rstb),
		.clk(clk),
		.mlb(mlb),
		.start(start),
		.tdat(m_tdat),
		.cdiv(cdiv),
		.din(din),
		.ss(ss),
		.sck(sck),
		.dout(dout),
		.done(Mdone),
		.rdata(Mrdata)
	);

	spi_slave SLV (
		.rstb(rstb),
		.ten(ten),
		.tdata(s_tdata),
		.mlb(mlb),
		.ss(ss),
		.sck(sck),
		.sdin(dout),
		.sdout(din),
		.done(SLVdone),
		.rdata(SLVrdata)
	);


	initial begin
		#10 rstb = 1'b0;
		#100;
		rstb = 1'b1;
		start = 1'b0;
		m_tdat = 8'b01111100;
		cdiv = 2'b00;
		#100 start = 1'b1;
		ten = 1;
		#100 start = 1'b0;
		
		#1800 mlb = 1'b1;
		cdiv = 2'b01;
		m_tdat = 8'b00011100;
		#100 start = 1'b1;
		#100 start = 1'b0;
		#2202;
		
		#100 start = 1'b1;
		#100 start = 1'b0;
		#2000;
		
		m_tdat = ~m_tdat;
		#100 start = 1'b1;
		#100 start = 1'b0;
		#2000;
	end
   
	always@(rstb or Mrdata)
	begin
		if (rstb == 0)
			s_tdata = 8'hAA;
		else
			begin
				#10 s_tdata = Mrdata;
			end
	end	
endmodule

