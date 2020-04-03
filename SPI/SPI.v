`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:08 04/03/2020 
// Design Name: 
// Module Name:    SPI 
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
module spi_master(rstb, clk, mlb, start, tdat, cdiv, din, ss, sck,
				dout, done, rdata);
input rstb, clk, mlb, start;
input [7:0] tdat;
input [1:0] cdiv;
input din;
output reg ss;
output reg sck;
output reg dout;
output reg done;
output reg [7:0] rdata;

parameter idle=2'b00;
parameter send=2'b10;
parameter finish=2'b11;

reg [1:0] cur,nxt;
reg [7:0] treg,rreg;
reg [3:0] nbit;
reg [4:0] mid, cnt;
reg shift,clr;

always @(start or cur or nbit or cdiv or rreg)
begin
	nxt=cur;
	clr=0;
	shift=0;
	ss=0;
	case (cur)
		idle:begin
			if (start == 1)
				begin
					case (cdiv)
						2'b00: mid=2;
						2'b01: mid=4;
						2'b10: mid=8;
						2'b11: mid=16;
					endcase
					shift=1;
					done=1'b0;
					nxt=send;
				end
		end
		send:begin
			ss=0;
			if(nbit!=8)
				begin shift=1; end
			else
				begin
					rdata=rreg;
					done=1'b1;
					nxt=finish;
				end
		end
		finish:begin
			shift=0;
			ss=1;
			clr=1;
			nxt=idle;
		end
		default: nxt=finish;
	endcase
end

always@(negedge clk or negedge rstb)
begin
	if (rstb==0)
		cur<=finish;
	else
		cur<=nxt;
end

always@(negedge clk or posedge clr)
begin
	if (clr==1)
		begin
			cnt=0;
			sck=1;
		end
	else
		begin
			if (shift==1)
				begin
					cnt=cnt+1;
					if (cnt==mid)
						begin
							sck=~sck;
							cnt=0;
						end
				end
		end
end	

always@(posedge sck or posedge clr)
begin
	if (clr==1)
		begin
			nbit=0;
			rreg=8'hFF;
		end
	else
		begin
			if(mlb==0)
				begin rreg={din,rreg[7:1]}; end
			else
				begin rreg={rreg[6:0],din}; end
			nbit=nbit+1;
		end
end

always@(negedge sck or posedge clr)
begin
	if(clr==1)
		begin
			treg=8'hFF;
			dout=1;
		end
	else
		begin
			if (nbit==0)
				begin 
					treg=tdat;
					dout=mlb ? treg[7] : treg[0];
				end
			else
				begin
					if(mlb==0)
						begin
							treg={1'b1,treg[7:1]};
							dout=treg[0];
						end
					else
						begin
							treg={treg[6:0],1'b1};
							dout=treg[7];
						end
				end
		end	
end
endmodule

module spi_slave(rstb, ten, tdata, mlb, ss, sck, sdin,
				sdout, done, rdata);
input rstb,ss,sck,sdin,ten,mlb;
input [7:0] tdata;
output sdout;
output reg done;

output reg [7:0] rdata;
reg [7:0] treg,rreg;
reg [3:0] nb;
wire sout;
assign sout=mlb ? treg[7] : treg[0];
assign sdout=( (!ss) && ten )?sout:1'bz;

always @(posedge sck or negedge rstb)
begin
	if (rstb==0)
		begin
			rreg = 8'h00;
			rdata = 8'h00;
			done = 0;
			nb = 0;
		end
	else if (!ss)
		begin

	if (mlb==0)
		begin rreg ={sdin,rreg[7:1]}; end
	else
		begin rreg ={rreg[6:0],sdin}; end
			nb=nb+1;
			if(nb!=8) done=0;
			else begin rdata=rreg; done=1; nb=0; end
		end
end

always @(negedge sck or negedge rstb)
begin
	if (rstb==0)
		begin treg = 8'hFF; end
	else
		begin
			if(!ss)
				begin
					if (nb==0)
						treg=tdata;
					else
						begin
							if(mlb==0)
								begin treg = {1'b1,treg[7:1]}; end
							else
								begin treg = {treg[6:0],1'b1}; end
						end
				end
		end
end 
endmodule