`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:16:26 04/03/2020
// Design Name:   mux_13_1
// Module Name:   C:/WINDOWS/system32/mux13-1/mux_13_1_tb.v
// Project Name:  mux13-1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_13_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_13_1_tb;

	// Inputs
	reg d0;
	reg d1;
	reg d2;
	reg d3;
	reg d4;
	reg d5;
	reg d6;
	reg d7;
	reg d8;
	reg d9;
	reg d10;
	reg d11;
	reg d12;
	reg [3:0] sel;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux_13_1 uut (
		.d0(d0), 
		.d1(d1), 
		.d2(d2), 
		.d3(d3), 
		.d4(d4), 
		.d5(d5), 
		.d6(d6), 
		.d7(d7), 
		.d8(d8), 
		.d9(d9), 
		.d10(d10), 
		.d11(d11), 
		.d12(d12), 
		.sel(sel), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		d0 = 1;
		d1 = 0;
		d2 = 1;
		d3 = 0;
		d4 = 1;
		d5 = 0;
		d6 = 1;
		d7 = 0;
		d8 = 1;
		d9 = 0;
		d10 = 1;
		d11 = 0;
		d12 = 1;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always begin #50 sel = (sel + 1) % 13; end
endmodule

