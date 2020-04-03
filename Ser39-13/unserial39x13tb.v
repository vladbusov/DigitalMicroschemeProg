`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:49:54 04/03/2020
// Design Name:   unserial39x13
// Module Name:   C:/WINDOWS/system32/Ser39-13/unserial39x13tb.v
// Project Name:  Ser39-13
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: unserial39x13
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module unserial39x13tb;

	// Inputs
	reg [38:0] dataIn;
	reg clkIn;
	reg clkToOut;

	// Outputs
	wire [12:0] dataOut;
	wire clkOut;

	// Instantiate the Unit Under Test (UUT)
	unserial39x13 uut (
		.dataIn(dataIn), 
		.clkIn(clkIn), 
		.clkToOut(clkToOut), 
		.dataOut(dataOut), 
		.clkOut(clkOut)
	);

	initial begin
		// Initialize Inputs
		clkIn = 1;
		clkToOut = 0;

		dataIn = 39'b010101011101011010101111101101010101111;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always begin #17 clkIn = ~clkIn; end
	always begin #4 clkToOut = ~clkToOut; end
	always begin #34 dataIn = 39'b010101011101011010101111101101010101111; end
endmodule

