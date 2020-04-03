`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:07:01 04/03/2020 
// Design Name: 
// Module Name:    mux_13_1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux_13_1(d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,sel,out);
input d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;
input [3:0] sel;
output reg out;
always@(sel)
begin
	case(sel)
		4'b0000:out=d0;
		4'b0001:out=d1;
		4'b0010:out=d2;
		4'b0011:out=d3;
		4'b0100:out=d4;
		4'b0101:out=d5;
		4'b0110:out=d6;
		4'b0111:out=d7;
		4'b1000:out=d8;
		4'b1001:out=d9;
		4'b1010:out=d10;
		4'b1011:out=d11;
		4'b1100:out=d12;
	endcase
end
endmodule
