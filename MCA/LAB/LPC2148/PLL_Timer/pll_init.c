#include<lpc214x.h>
#include "pll_init.h"
void PLL_Config(void)
{	
	PLL0CON = 0x01;
	PLL0CFG = 0x24;
	PLL0FEED = 0xAA;
	PLL0FEED = 0x55;
	while(PLL0STAT&(0x400) == 0);
	PLL0CON = 0x03;
	VPBDIV = 0x01;
	PLL0FEED = 0xAA;
	PLL0FEED = 0x55;
		
}

