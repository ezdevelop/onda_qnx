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

#define VARIANT_TWL4030

#define DEFAULT_MCBSP       		2
#define DEFAULT_I2C_ADDR    		0x49	/* Slave addr of TWL4030 Codec */

#define OMAP35XX_MASTER_CLK 		12288000L
#define OMAP35XX_FRAME_RATE_MIN		48000
#define OMAP35XX_FRAME_RATE_MAX		48000
#define OMAP35XX_TX_VOICES  		2
#define OMAP35XX_RX_VOICES  		2
#define OMAP35XX_CLK_MODE			MASTER

__SRCVERSION( "$URL: http://svn.ott.qnx.com/product/trunk/hardware/deva/ctrl/omap35xx/nto/arm/dll.le.twl4030/variant.h $ $Rev: 240415 $" )
