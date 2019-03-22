/*
 *  Copyright 2003 by Spectrum Digital Incorporated.
 *  All rights reserved. Property of Spectrum Digital Incorporated.
 */

/*
 *  ======== fpga_loader.c ========
 *
 *  This program loads the Xilinx FPGA on the DM642 EVM with configuration
 *  data stored in Flash at 0x90040000.
 */

#include "fpga_loadercfg.h"

#include "evmdm642.h"

main()
{
    /* Call BSL init */
    EVMDM642_init();

    /* Load FPGA from Flash */
    EVMDM642_fpgaLoad(0x90040000);
    
    /* Disable interrupts */
    IRQ_globalDisable();

    while(1);
}
