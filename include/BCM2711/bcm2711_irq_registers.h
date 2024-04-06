
/*
 * Filename: bcm2711_irq_registers.h
 * Description: Header file containing definitions for BCM2711_IRQ_REGISTER.
 * Author: Devontae Reid
 * Date: 2024-04-05
 * License: MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "BCM2711_base_addresses.h"

#ifndef _BCM2711_IRQ_REGISTER_H_
#define _BCM2711_IRQ_REGISTER_H_

#define BCM2711_IRQ0_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x200	// ARM Core 0 IRQ Enabled Interrupt Pending bits [31:0]
#define BCM2711_IRQ0_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x204	// ARM Core 0 IRQ Enabled Interrupt pending bits [63:32]
#define BCM2711_IRQ0_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x208	// ARM Core 0 IRQ Enabled Interrupt pending bits [79:64]
#define BCM2711_IRQ0_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x210	// Write to Set ARM Core 0 IRQ enable bits [31:0]
#define BCM2711_IRQ0_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x214	// Write to Set ARM Core 0 IRQ enable bits [63:32]
#define BCM2711_IRQ0_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x218	// Write to Set ARM Core 0 IRQ enable bits[79:64]
#define BCM2711_IRQ0_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x220	// Write to Clear ARM Core 0 IRQ enable bits [31:0]
#define BCM2711_IRQ0_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x224	// Write to Clear ARM Core 0 IRQ enable bits [63:32]
#define BCM2711_IRQ0_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x228	// Write to Clear ARM Core 0 IRQ enable bits [79:64]
#define BCM2711_IRQ_STATUS0	        BCM2711_IRQ_BASE_ADDR + 0x230	// Interrupt Line bits [31:0]
#define BCM2711_IRQ_STATUS1	        BCM2711_IRQ_BASE_ADDR + 0x234	// Interrupt Line bits [63:32]
#define BCM2711_IRQ_STATUS2	        BCM2711_IRQ_BASE_ADDR + 0x238	// Interrupt Line bits [79:64]
#define BCM2711_IRQ1_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x240	// ARM Core 1 IRQ Enabled Interrupt pending bits [31:0]
#define BCM2711_IRQ1_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x244	// ARM Core 1 IRQ Enabled Interrupt pending bits [63:32]
#define BCM2711_IRQ1_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x248	// ARM Core 1 IRQ Enabled Interrupt pending bits [79:64]
#define BCM2711_IRQ1_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x250	// Write to Set ARM Core 1 IRQ enable bits [31:0]
#define BCM2711_IRQ1_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x254	// Write to Set ARM Core 1 IRQ enable bits [63:32]
#define BCM2711_IRQ1_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x258	// Write to Set ARM Core 1 IRQ enable bits[79:64]
#define BCM2711_IRQ1_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x260	// Write to Clear ARM Core 1 IRQ enable bits [31:0]
#define BCM2711_IRQ1_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x264	// Write to Clear ARM Core 1 IRQ enable bits [63:32]
#define BCM2711_IRQ1_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x268	// Write to Clear ARM Core 1 IRQ enable bits [79:64]
#define BCM2711_IRQ2_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x280	// ARM Core 2 IRQ Enabled Interrupt pending bits [31:0]
#define BCM2711_IRQ2_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x284	// ARM Core 2 IRQ Enabled Interrupt pending bits [63:32]
#define BCM2711_IRQ2_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x288	// ARM Core 2 IRQ Enabled Interrupt pending bits [79:64]
#define BCM2711_IRQ2_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x290	// Write to Set ARM Core 2 IRQ enable bits [31:0]
#define BCM2711_IRQ2_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x294	// Write to Set ARM Core 2 IRQ enable bits [63:32]
#define BCM2711_IRQ2_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x298	// Write to Set ARM Core 2 IRQ enable bits[79:64]
#define BCM2711_IRQ2_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x2A0	// Write to Clear ARM Core 2 IRQ enable bits [31:0]
#define BCM2711_IRQ2_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x2A4	// Write to Clear ARM Core 2 IRQ enable bits [63:32]
#define BCM2711_IRQ2_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x2A8	// Write to Clear ARM Core 2 IRQ enable bits [79:64]
#define BCM2711_IRQ3_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x2C0	// ARM Core 3 IRQ Enabled Interrupt pending bits [31:0]
#define BCM2711_IRQ3_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x2C4	// ARM Core 3 IRQ Enabled Interrupt pending bits [63:32]
#define BCM2711_IRQ3_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x2C8	// ARM Core 3 IRQ Enabled Interrupt pending bits [79:64]
#define BCM2711_IRQ3_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x2D0	// Write to Set ARM Core 3 IRQ enable bits [31:0]
#define BCM2711_IRQ3_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x2D4	// Write to Set ARM Core 3 IRQ enable bits [63:32]
#define BCM2711_IRQ3_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x2D8	// Write to Set ARM Core 3 IRQ enable bits[79:64]
#define BCM2711_IRQ3_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x2E0	// Write to Clear ARM Core 3 IRQ enable bits [31:0]
#define BCM2711_IRQ3_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x2E4	// Write to Clear ARM Core 3 IRQ enable bits [63:32]
#define BCM2711_IRQ3_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x2E8	// Write to Clear ARM Core 3 IRQ enable bits [79:64]
#define BCM2711_FIQ0_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x300	// ARM Core 0 FIQ Enabled Interrupt pending bits [31:0]
#define BCM2711_FIQ0_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x304	// ARM Core 0 FIQ Enabled Interrupt pending bits [63:32]
#define BCM2711_FIQ0_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x308	// ARM Core 0 FIQ Enabled Interrupt pending bits [79:64]
#define BCM2711_FIQ0_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x310	// Write to Set ARM Core 0 FIQ enable bits [31:0]
#define BCM2711_FIQ0_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x314	// Write to Set ARM Core 0 FIQ enable bits [63:32]
#define BCM2711_FIQ0_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x318	// Write to Set ARM Core 0 FIQ enable bits[79:64]
#define BCM2711_FIQ0_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x320	// Write to Clear ARM Core 0 FIQ enable bits [31:0]
#define BCM2711_FIQ0_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x324	// Write to Clear ARM Core 0 FIQ enable bits [63:32]
#define BCM2711_FIQ0_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x328	// Write to Clear ARM Core 0 FIQ enable bits [79:64]
#define BCM2711_FIQ1_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x340	// ARM Core 1 FIQ Enabled Interrupt pending bits [31:0]
#define BCM2711_FIQ1_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x344	// ARM Core 1 FIQ Enabled Interrupt pending bits [63:32]
#define BCM2711_FIQ1_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x348	// ARM Core 1 FIQ Enabled Interrupt pending bits [79:64]
#define BCM2711_FIQ1_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x350	// Write to Set ARM Core 1 FIQ enable bits [31:0]
#define BCM2711_FIQ1_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x354	// Write to Set ARM Core 1 FIQ enable bits [63:32]
#define BCM2711_FIQ1_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x358	// Write to Set ARM Core 1 FIQ enable bits[79:64]
#define BCM2711_FIQ1_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x360	// Write to Clear ARM Core 1 FIQ enable bits [31:0]
#define BCM2711_FIQ1_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x364	// Write to Clear ARM Core 1 FIQ enable bits [63:32]
#define BCM2711_FIQ1_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x368	// Write to Clear ARM Core 1 FIQ enable bits [79:64]
#define BCM2711_FIQ2_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x380	// ARM Core 2 FIQ Enabled Interrupt pending bits [31:0]
#define BCM2711_FIQ2_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x384	// ARM Core 2 FIQ Enabled Interrupt pending bits [63:32]
#define BCM2711_FIQ2_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x388	// ARM Core 2 FIQ Enabled Interrupt pending bits [79:64]
#define BCM2711_FIQ2_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x390	// Write to Set ARM Core 2 FIQ enable bits [31:0]
#define BCM2711_FIQ2_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x394	// Write to Set ARM Core 2 FIQ enable bits [63:32]
#define BCM2711_FIQ2_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x398	// Write to Set ARM Core 2 FIQ enable bits[79:64]
#define BCM2711_FIQ2_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x3A0	// Write to Clear ARM Core 2 FIQ enable bits [31:0]
#define BCM2711_FIQ2_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x3A4	// Write to Clear ARM Core 2 FIQ enable bits [63:32]
#define BCM2711_FIQ2_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x3A8	// Write to Clear ARM Core 2 FIQ enable bits [79:64]
#define BCM2711_FIQ3_PENDING0	    BCM2711_IRQ_BASE_ADDR + 0x3C0	// ARM Core 3 FIQ Enabled Interrupt pending bits [31:0]
#define BCM2711_FIQ3_PENDING1	    BCM2711_IRQ_BASE_ADDR + 0x3C4	// ARM Core 3 FIQ Enabled Interrupt pending bits [63:32]
#define BCM2711_FIQ3_PENDING2	    BCM2711_IRQ_BASE_ADDR + 0x3C8	// ARM Core 3 FIQ Enabled Interrupt pending bits [79:64]
#define BCM2711_FIQ3_SET_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x3D0	// Write to Set ARM Core 3 FIQ enable bits [31:0]
#define BCM2711_FIQ3_SET_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x3D4	// Write to Set ARM Core 3 FIQ enable bits [63:32]
#define BCM2711_FIQ3_SET_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x3D8	// Write to Set ARM Core 3 FIQ enable bits[79:64]
#define BCM2711_FIQ3_CLR_EN_0	    BCM2711_IRQ_BASE_ADDR + 0x3E0	// Write to Clear ARM Core 3 FIQ enable bits [31:0]
#define BCM2711_FIQ3_CLR_EN_1	    BCM2711_IRQ_BASE_ADDR + 0x3E4	// Write to Clear ARM Core 3 FIQ enable bits [63:32]
#define BCM2711_FIQ3_CLR_EN_2	    BCM2711_IRQ_BASE_ADDR + 0x3E8	// Write to Clear ARM Core 3 FIQ enable bits [79:64]
#define BCM2711_SWIRQ_SET	        BCM2711_IRQ_BASE_ADDR + 0x3F0	// Write to Set Software Interrupt sources
#define BCM2711_SWIRQ_CLEAR	        BCM2711_IRQ_BASE_ADDR + 0x3F4	// Write to Clear Software Interrupt sources
    
#endif // _BCM2711_IRQ_REGISTER_H_
