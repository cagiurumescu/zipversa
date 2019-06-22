////////////////////////////////////////////////////////////////////////////////
//
// Filename: 	ecpoddr.v
//
// Project:	ZipVersa, Versa Brd implementation using ZipCPU infrastructure
//
// Purpose:	For the DDR3 SDRAM, this handles the ECP5 specific portions
//		of the output necessary to make this happen for one pin only.
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2019, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
`default_nettype	none
//
module	ecpoddr(i_clk, i_v, o_pin);
	input	wire		i_clk;
	input	wire	[1:0]	i_v;
	output	wire		o_pin;

	wire	w_internal;

	ODDRX1F
	ODDRi(
		.SCLK(i_clk),
		.RST(1'b0),
		.D0(i_v[1]),	// D0 is sent first
		.D1(i_v[0]),	// then D1
		.Q(o_pin));

endmodule
