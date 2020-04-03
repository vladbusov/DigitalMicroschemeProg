`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:57 04/03/2020 
// Design Name: 
// Module Name:    unserial39x13 
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
module unserial39x13(input wire [in-1:0] dataIn,
							input wire clkIn,
							input wire clkToOut,
							output reg [out-1:0] dataOut,
							output reg clkOut
);
							
parameter in = 39;
parameter out = 13;
reg [in*out-1:0] data = 0;
integer counterIn = 0;
integer counterOut = 0;
integer start = 0;

always @(posedge clkIn) begin
	counterIn = counterIn + 1;
	if (counterIn > out) begin counterIn = 1; end
	if (counterIn > 1) begin start = 1; end
	case (counterIn)
		1:	data[38:0] = dataIn;
		2:	data[77:39] = dataIn;
		3:	data[116:78] = dataIn;
		4:	data[155:117] = dataIn;
		5:	data[194:156] = dataIn;
		6:	data[233:195] = dataIn;
		7:	data[272:234] = dataIn;
		8:	data[311:273] = dataIn;
		9:	data[350:312] = dataIn;
		10:	data[389:351] = dataIn;
		11:	data[428:390] = dataIn;
		12:	data[467:429] = dataIn;
		13:	data[506:468] = dataIn;
		default:;
	endcase
end

always @(posedge clkToOut or negedge clkToOut) begin
	if (start == 1)
		clkOut = clkToOut;
	else
		clkOut = 0;
end

always @(posedge clkToOut) begin
	if (start == 1) begin
		counterOut = counterOut + 1;
		if (counterOut > in) begin counterOut = 1; end
		case (counterOut)
			1:	dataOut = data[12:0];
			2:	dataOut = data[12:0];
			3:	dataOut = data[12:0];
			4:	dataOut = data[12:0];
			5:	dataOut = data[12:0];
			6:	dataOut = data[12:0];
			7:	dataOut = data[12:0];
			8:	dataOut = data[12:0];
			9:	dataOut = data[12:0];
			10:	dataOut = data[12:0];
			11:	dataOut = data[25:13];
			12:	dataOut = data[38:26];
			13:	dataOut = data[51:39];
			14:	dataOut = data[64:52];
			15:	dataOut = data[77:65];
			16:	dataOut = data[90:78];
			17:	dataOut = data[103:91];
			18:	dataOut = data[116:104];
			19:	dataOut = data[129:117];
			20:	dataOut = data[142:130];
			21:	dataOut = data[155:143];
			22:	dataOut = data[168:156];
			23:	dataOut = data[181:169];
			24:	dataOut = data[194:182];
			25:	dataOut = data[207:195];
			26:	dataOut = data[220:208];
			27:	dataOut = data[233:221];
			28:	dataOut = data[246:234];
			29:	dataOut = data[259:247];
			30:	dataOut = data[272:260];
			31:	dataOut = data[285:273];
			32:	dataOut = data[298:286];
			33:	dataOut = data[311:299];
			34:	dataOut = data[324:312];
			35:	dataOut = data[337:325];
			36:	dataOut = data[350:338];
			37:	dataOut = data[363:351];
			38:	dataOut = data[376:364];
			39:	dataOut = data[389:377];
			default:;
			endcase;
		end
	end
endmodule
