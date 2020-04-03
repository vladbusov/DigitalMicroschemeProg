`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:54:35 04/03/2020
// Design Name:   des13x40
// Module Name:   C:/WINDOWS/system32/Des13-40/des13x40_tb.v
// Project Name:  Des13-40
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: des13x40
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module des13x40_tb;

	// Inputs
	reg Cin;
	reg [12:0] Din;

	// Outputs
	wire [39:0] Dout;
	wire WE;
	// Instantiate the Unit Under Test (UUT)
	des13x40 uut (
		.Cin(Cin), 
		.Din(Din), 
		.Dout(Dout), 
		.WE(WE)
	);

	initial begin
		// Initialize Inputs
		Cin = 0;
		Din = 13'b1100110011001;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always begin #5 Cin=1; #5 Cin=0; end
endmodule

