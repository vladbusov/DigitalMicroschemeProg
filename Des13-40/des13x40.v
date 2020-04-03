`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:40:49 04/03/2020 
// Design Name: 
// Module Name:    des13x40 
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
module des13x40(Cin, Din, Dout, WE, cnt);
input Cin;
input [12:0] Din;
output reg [39:0] Dout;

output cnt;
output reg WE;
reg [2:0] cnt;

initial cnt=0;
always @(posedge Cin)
begin
	WE=0;
	case (cnt)
		3'b00: Dout[12:0] = Din;
		3'b01: Dout[25:13] = Din;
		3'b10: Dout[39:26] = Din;
		default:;
	endcase;
	cnt = cnt + 1;
	if (cnt == 4)
		begin
			WE=1;
			cnt=0;
		end
end
endmodule
