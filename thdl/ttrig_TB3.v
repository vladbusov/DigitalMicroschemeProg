`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:07:35 04/03/2020
// Design Name:   ttrig
// Module Name:   C:/WINDOWS/system32/thdl/ttrig_TB3.v
// Project Name:  thdl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ttrig
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
module ttrig_TB3;

	// Inputs
	reg CLK;

	// Outputs
	wire Tt;

	// Instantiate the Unit Under Test (UUT)
	ttrig uut (
		.CLK(CLK), 
		.Tt(Tt)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #5 CLK=~CLK;
endmodule

