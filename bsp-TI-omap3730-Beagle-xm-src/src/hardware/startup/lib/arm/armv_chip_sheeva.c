/*
 * $QNXLicenseC:
 * Copyright 2009, QNX Software Systems. 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"). You 
 * may not reproduce, modify or distribute this software except in 
 * compliance with the License. You may obtain a copy of the License 
 * at: http://www.apache.org/licenses/LICENSE-2.0 
 * 
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as 
 * contributors under the License or as licensors under other terms.  
 * Please review this entire file for other proprietary rights or license 
 * notices, as well as the QNX Development Suite License Guide at 
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */



#include "startup.h"

/*
 * This CPU can operate in either ARMv6 or ARMv7 mode depending on the
 * setting of a configuration pin.
 *
 * This requires some run-time detection to select the correct configuration
 * so we define a dummy configuration that returns the correct configuration
 * via the armv_detect_sheeva() function.
 */
const struct armv_chip armv_chip_sheeva = {
	0x5810,						// cpuid
	0,							// name
	0,							// mmu_cr
	0,							// mmu_cr_clr
	0,							// cycles
	0,							// cache
	0,							// power
	0,							// flush
	0,							// deferred
	0,							// pte
	0,							// pte_wa
	0,							// pte_wb
	0,							// pte_wt
	0,							// setup
	armv_detect_sheeva,			// detect
};


__SRCVERSION( "$URL$ $Rev$" );
