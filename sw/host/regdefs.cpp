////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.cpp
//
// Project:	ZipVersa, Versa Brd implementation using ZipCPU infrastructure
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga autofpga -d -o . allclocks.txt global.txt dlyarbiter.txt version.txt buserr.txt pwrcount.txt bustimer.txt wbfft.txt spio.txt gpio.txt wbuconsole.txt bkram.txt flash.txt picorv.txt pic.txt mdio1.txt enet.txt enetscope.txt flashscope.txt mem_flash_bkram.txt mem_bkram_only.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2019, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
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
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include "regdefs.h"

const	REGNAME	raw_bregs[] = {
	{ R_FLASHCFG      ,	"FLASHCFG"    	},
	{ R_FLASHCFG      ,	"QSPIC"       	},
	{ R_NETSCOPE      ,	"NETSCOPE"    	},
	{ R_NETSCOPED     ,	"NETSCOPED"   	},
	{ R_FLASHSCOPE    ,	"FLASHSCOPE"  	},
	{ R_FLASHSCOPED   ,	"FLASHSCOPED" 	},
	{ R_CONSOLE_FIFO  ,	"UFIFO"       	},
	{ R_CONSOLE_UARTRX,	"RX"          	},
	{ R_CONSOLE_UARTTX,	"TX"          	},
	{ R_NET_RXCMD     ,	"RXCMD"       	},
	{ R_NET_RXCMD     ,	"NETRX"       	},
	{ R_NET_TXCMD     ,	"TXCMD"       	},
	{ R_NET_TXCMD     ,	"NETTX"       	},
	{ R_NET_MACHI     ,	"MACHI"       	},
	{ R_NET_MACLO     ,	"MACLO"       	},
	{ R_NET_RXMISS    ,	"NETMISS"     	},
	{ R_NET_RXERR     ,	"NETERR"      	},
	{ R_NET_RXCRC     ,	"NETCRCER"    	},
	{ R_NET_TXCOL     ,	"NETCOL"      	},
	{ R_BUILDTIME     ,	"BUILDTIME"   	},
	{ R_BUILDTIME     ,	"BUILDTIME"   	},
	{ R_BUSERR        ,	"BUSERR"      	},
	{ R_BUSERR        ,	"BUSERR"      	},
	{ R_PIC           ,	"PIC"         	},
	{ R_PIC           ,	"PIC"         	},
	{ R_ACTIVEIRQ     ,	"CPUACTIVEIRQ"	},
	{ R_ACTIVEIRQ     ,	"CPUACTIVEIRQ"	},
	{ R_BUSERR_ADDR   ,	"CPUBUSERR"   	},
	{ R_BUSERR_ADDR   ,	"CPUBUSERR"   	},
	{ R_BUSERR_PC     ,	"CPUBUSERRPC" 	},
	{ R_BUSERR_PC     ,	"CPUBUSERRPC" 	},
	{ R_GPIO          ,	"GPIO"        	},
	{ R_GPIO          ,	"GPI"         	},
	{ R_GPIO          ,	"GPO"         	},
	{ R_GPIO          ,	"GPIO"        	},
	{ R_GPIO          ,	"GPI"         	},
	{ R_GPIO          ,	"GPO"         	},
	{ R_NET1DLY       ,	"NET1DLY"     	},
	{ R_NET1DLY       ,	"NET1DLY"     	},
	{ R_PWRCOUNT      ,	"PWRCOUNT"    	},
	{ R_PWRCOUNT      ,	"PWRCOUNT"    	},
	{ R_SPIO          ,	"SPIO"        	},
	{ R_SPIO          ,	"SPIO"        	},
	{ R_ZIPTIMER      ,	"ZIPTIMER"    	},
	{ R_ZIPTIMER      ,	"TIMER"       	},
	{ R_ZIPTIMER      ,	"SYSTIMER"    	},
	{ R_ZIPTIMER      ,	"ZIPTIMER"    	},
	{ R_ZIPTIMER      ,	"TIMER"       	},
	{ R_ZIPTIMER      ,	"SYSTIMER"    	},
	{ R_VERSION       ,	"VERSION"     	},
	{ R_VERSION       ,	"VERSION"     	},
	{ R_MDIO1_BMCR    ,	"BMCR"        	},
	{ R_MDIO1_BMSR    ,	"BMSR"        	},
	{ R_MDIO1_PHYIDR1 ,	"PHYIDR1"     	},
	{ R_MDIO1_PHYIDR2 ,	"PHYIDR2"     	},
	{ R_MDIO1_ANAR    ,	"ANAR"        	},
	{ R_MDIO1_ANLPAR  ,	"ANLPAR"      	},
	{ R_MDIO1_ANER    ,	"ANER"        	},
	{ R_MDIO1_ANNPTR  ,	"ANNPTR"      	},
	{ R_MDIO1_ANNPRR  ,	"ANNPRR"      	},
	{ R_MDIO1_GBECTRL ,	"GBECTRL"     	},
	{ R_MDIO1_GBESTAT ,	"GBESTAT"     	},
	{ R_NET_RXBUF     ,	"NETRXB"      	},
	{ R_NET_TXBUF     ,	"NETTXB"      	},
	{ R_BKRAM         ,	"RAM"         	},
	{ R_FLASH         ,	"FLASH"       	}
};

// REGSDEFS.CPP.INSERT for any bus masters
// And then from the peripherals
// And finally any master REGS.CPP.INSERT tags
#define	RAW_NREGS	(sizeof(raw_bregs)/sizeof(bregs[0]))

const	REGNAME		*bregs = raw_bregs;
const	int	NREGS = RAW_NREGS;

unsigned	addrdecode(const char *v) {
	if (isalpha(v[0])) {
		for(int i=0; i<NREGS; i++)
			if (strcasecmp(v, bregs[i].m_name)==0)
				return bregs[i].m_addr;
#ifdef	R_ZIPCTRL
		if (strcasecmp(v, "CPU")==0)
			return R_ZIPCTRL;
#endif	// R_ZIPCTRL
#ifdef	R_ZIPDATA
		if (strcasecmp(v, "CPUD")==0)
			return R_ZIPDATA;
#endif	// R_ZIPDATA
		fprintf(stderr, "Unknown register: %s\n", v);
		exit(-2);
	} else
		return strtoul(v, NULL, 0);
}

const	char *addrname(const unsigned v) {
	for(int i=0; i<NREGS; i++)
		if (bregs[i].m_addr == v)
			return bregs[i].m_name;
	return NULL;
}

