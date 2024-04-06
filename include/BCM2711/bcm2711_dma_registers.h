/*
 * Filename: bcm2711_dma_registers.h
 * Description: Header file containing definitions for BCM2711_DMA_REGISTERS.
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

#ifndef _BCM2711_DMA_REGISTERS_H_
#define _BCM2711_DMA_REGISTERS_H_

#define BCM2711_0_CS	        BCM2711_DMA_BASE_ADDR + 0x000	// DMA Channel 0 Control and Status
#define BCM2711_0_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x004	// DMA Channel 0 Control Block Address
#define BCM2711_0_TI	        BCM2711_DMA_BASE_ADDR + 0x008	// DMA Channel 0 CB Word 0 (Transfer Information)
#define BCM2711_0_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x00C	// DMA Channel 0 CB Word 1 (Source Address)
#define BCM2711_0_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x010	// DMA Channel 0 CB Word 2 (Destination Address)
#define BCM2711_0_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x014	// DMA Channel 0 CB Word 3 (Transfer Length)
#define BCM2711_0_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x018	// DMA Channel 0 CB Word 4 (2D Stride)
#define BCM2711_0_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x01C	// DMA Channel 0 CB Word 5 (Next CB Address)
#define BCM2711_0_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x020	// DMA Channel 0 Debug
#define BCM2711_1_CS	        BCM2711_DMA_BASE_ADDR + 0x100	// DMA Channel 1 Control and Status
#define BCM2711_1_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x104	// DMA Channel 1 Control Block Address
#define BCM2711_1_TI	        BCM2711_DMA_BASE_ADDR + 0x108	// DMA Channel 1 CB Word 0 (Transfer Information)
#define BCM2711_1_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x10C	// DMA Channel 1 CB Word 1 (Source Address)
#define BCM2711_1_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x110	// DMA Channel 1 CB Word 2 (Destination Address)
#define BCM2711_1_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x114	// DMA Channel 1 CB Word 3 (Transfer Length)
#define BCM2711_1_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x118	// DMA Channel 1 CB Word 4 (2D Stride)
#define BCM2711_1_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x11C	// DMA Channel 1 CB Word 5 (Next CB Address)
#define BCM2711_1_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x120	// DMA Channel 1 Debug
#define BCM2711_2_CS	        BCM2711_DMA_BASE_ADDR + 0x200	// DMA Channel 2 Control and Status
#define BCM2711_2_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x204	// DMA Channel 2 Control Block Address
#define BCM2711_2_TI	        BCM2711_DMA_BASE_ADDR + 0x208	// DMA Channel 2 CB Word 0 (Transfer Information)
#define BCM2711_2_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x20C	// DMA Channel 2 CB Word 1 (Source Address)
#define BCM2711_2_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x210	// DMA Channel 2 CB Word 2 (Destination Address)
#define BCM2711_2_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x214	// DMA Channel 2 CB Word 3 (Transfer Length)
#define BCM2711_2_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x218	// DMA Channel 2 CB Word 4 (2D Stride)
#define BCM2711_2_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x21C	// DMA Channel 2 CB Word 5 (Next CB Address)
#define BCM2711_2_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x220	// DMA Channel 2 Debug
#define BCM2711_3_CS	        BCM2711_DMA_BASE_ADDR + 0x300	// DMA Channel 3 Control and Status
#define BCM2711_3_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x304	// DMA Channel 3 Control Block Address
#define BCM2711_3_TI	        BCM2711_DMA_BASE_ADDR + 0x308	// DMA Channel 3 CB Word 0 (Transfer Information)
#define BCM2711_3_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x30C	// DMA Channel 3 CB Word 1 (Source Address)
#define BCM2711_3_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x310	// DMA Channel 3 CB Word 2 (Destination Address)
#define BCM2711_3_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x314	// DMA Channel 3 CB Word 3 (Transfer Length)
#define BCM2711_3_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x318	// DMA Channel 3 CB Word 4 (2D Stride)
#define BCM2711_3_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x31C	// DMA Channel 3 CB Word 5 (Next CB Address)
#define BCM2711_3_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x320	// DMA Channel 0 Debug
#define BCM2711_4_CS	        BCM2711_DMA_BASE_ADDR + 0x400	// DMA Channel 4 Control and Status
#define BCM2711_4_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x404	// DMA Channel 4 Control Block Address
#define BCM2711_4_TI	        BCM2711_DMA_BASE_ADDR + 0x408	// DMA Channel 4 CB Word 0 (Transfer Information)
#define BCM2711_4_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x40C	// DMA Channel 4 CB Word 1 (Source Address)
#define BCM2711_4_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x410	// DMA Channel 4 CB Word 2 (Destination Address)
#define BCM2711_4_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x414	// DMA Channel 4 CB Word 3 (Transfer Length)
#define BCM2711_4_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x418	// DMA Channel 4 CB Word 4 (2D Stride)
#define BCM2711_4_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x41C	// DMA Channel 4 CB Word 5 (Next CB Address)
#define BCM2711_4_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x420	// DMA Channel 0 Debug
#define BCM2711_5_CS	        BCM2711_DMA_BASE_ADDR + 0x500	// DMA Channel 5 Control and Status
#define BCM2711_5_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x504	// DMA Channel 5 Control Block Address
#define BCM2711_5_TI	        BCM2711_DMA_BASE_ADDR + 0x508	// DMA Channel 5 CB Word 0 (Transfer Information)
#define BCM2711_5_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x50C	// DMA Channel 5 CB Word 1 (Source Address)
#define BCM2711_5_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x510	// DMA Channel 5 CB Word 2 (Destination Address)
#define BCM2711_5_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x514	// DMA Channel 5 CB Word 3 (Transfer Length)
#define BCM2711_5_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x518	// DMA Channel 5 CB Word 4 (2D Stride)
#define BCM2711_5_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x51C	// DMA Channel 5 CB Word 5 (Next CB Address)
#define BCM2711_5_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x520	// DMA Channel 5 Debug
#define BCM2711_6_CS	        BCM2711_DMA_BASE_ADDR + 0x600	// DMA Channel 6 Control and Status
#define BCM2711_6_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x604	// DMA Channel 6 Control Block Address
#define BCM2711_6_TI	        BCM2711_DMA_BASE_ADDR + 0x608	// DMA Channel 6 CB Word 0 (Transfer Information)
#define BCM2711_6_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x60C	// DMA Channel 6 CB Word 1 (Source Address)
#define BCM2711_6_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x610	// DMA Channel 6 CB Word 2 (Destination Address)
#define BCM2711_6_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x614	// DMA Channel 6 CB Word 3 (Transfer Length)
#define BCM2711_6_STRIDE	    BCM2711_DMA_BASE_ADDR + 0x618	// DMA Channel 6 CB Word 4 (2D Stride)
#define BCM2711_6_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x61C	// DMA Channel 6 CB Word 5 (Next CB Address)
#define BCM2711_6_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x620	// DMA Channel 6 Debug
#define BCM2711_7_CS	        BCM2711_DMA_BASE_ADDR + 0x700	// DMA Lite Channel 7 Control and Status
#define BCM2711_7_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x704	// DMA Lite Channel 7 Control Block Address
#define BCM2711_7_TI	        BCM2711_DMA_BASE_ADDR + 0x708	// DMA Lite Channel 7 CB Word 0 (Transfer Information)
#define BCM2711_7_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x70C	// DMA Lite Channel 7 CB Word 1 (Source Address)
#define BCM2711_7_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x710	// DMA Lite Channel 7 CB Word 2 (Destination Address)
#define BCM2711_7_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x714	// DMA Lite Channel 7 CB Word 3 (Transfer Length)
#define BCM2711_7_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x71C	// DMA Lite Channel 7 CB Word 5 (Next CB Address)
#define BCM2711_7_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x720	// DMA Lite Channel 7 Debug
#define BCM2711_8_CS	        BCM2711_DMA_BASE_ADDR + 0x800	// DMA Lite Channel 8 Control and Status
#define BCM2711_8_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x804	// DMA Lite Channel 8 Control Block Address
#define BCM2711_8_TI	        BCM2711_DMA_BASE_ADDR + 0x808	// DMA Lite Channel 8 CB Word 0 (Transfer Information)
#define BCM2711_8_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x80C	// DMA Lite Channel 8 CB Word 1 (Source Address)
#define BCM2711_8_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x810	// DMA Lite Channel 8 CB Word 2 (Destination Address)
#define BCM2711_8_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x814	// DMA Lite Channel 8 CB Word 3 (Transfer Length)
#define BCM2711_8_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x81C	// DMA Lite Channel 8 CB Word 5 (Next CB Address)
#define BCM2711_8_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x820	// DMA Lite Channel 8 Debug
#define BCM2711_9_CS	        BCM2711_DMA_BASE_ADDR + 0x900	// DMA Lite Channel 9 Control and Status
#define BCM2711_9_CONBLK_AD	    BCM2711_DMA_BASE_ADDR + 0x904	// DMA Lite Channel 9 Control Block Address
#define BCM2711_9_TI	        BCM2711_DMA_BASE_ADDR + 0x908	// DMA Lite Channel 9 CB Word 0 (Transfer Information)
#define BCM2711_9_SOURCE_AD	    BCM2711_DMA_BASE_ADDR + 0x90C	// DMA Lite Channel 9 CB Word 1 (Source Address)
#define BCM2711_9_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0x910	// DMA Lite Channel 9 CB Word 2 (Destination Address)
#define BCM2711_9_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0x914	// DMA Lite Channel 9 CB Word 3 (Transfer Length)
#define BCM2711_9_NEXTCONBK	    BCM2711_DMA_BASE_ADDR + 0x91C	// DMA Lite Channel 9 CB Word 5 (Next CB Address)
#define BCM2711_9_DEBUG	        BCM2711_DMA_BASE_ADDR + 0x920	// DMA Lite Channel 9 Debug
#define BCM2711_10_CS	        BCM2711_DMA_BASE_ADDR + 0xA00	// DMA Lite Channel 10 Control and Status
#define BCM2711_10_CONBLK_AD	BCM2711_DMA_BASE_ADDR + 0xA04	// DMA Lite Channel 10 Control Block Address
#define BCM2711_10_TI	        BCM2711_DMA_BASE_ADDR + 0xA08	// DMA Lite Channel 10 CB Word 0 (Transfer Information)
#define BCM2711_10_SOURCE_AD	BCM2711_DMA_BASE_ADDR + 0xA0C	// DMA Lite Channel 10 CB Word 1 (Source Address)
#define BCM2711_10_DEST_AD	    BCM2711_DMA_BASE_ADDR + 0xA10	// DMA Lite Channel 10 CB Word 2 (Destination Address)
#define BCM2711_10_TXFR_LEN	    BCM2711_DMA_BASE_ADDR + 0xA14	// DMA Lite Channel 10 CB Word 3 (Transfer Length)
#define BCM2711_10_NEXTCONBK	BCM2711_DMA_BASE_ADDR + 0xA1C	// DMA Lite Channel 10 CB Word 5 (Next CB Address)
#define BCM2711_10_DEBUG	    BCM2711_DMA_BASE_ADDR + 0xA20	// DMA Lite Channel 10 Debug
#define BCM2711_11_CS	        BCM2711_DMA_BASE_ADDR + 0xB00	// DMA4 Channel 11 Control and Status
#define BCM2711_11_CB	        BCM2711_DMA_BASE_ADDR + 0xB04	// DMA4 Channel 11 Control Block Address
#define BCM2711_11_DEBUG	    BCM2711_DMA_BASE_ADDR + 0xB0C	// DMA4 Channel 11 Debug
#define BCM2711_11_TI	        BCM2711_DMA_BASE_ADDR + 0xB10	// DMA4 Channel 11 CB Word 0 (Transfer Information)
#define BCM2711_11_SRC	        BCM2711_DMA_BASE_ADDR + 0xB14	// DMA4 Channel 11 CB Word 1 (Source Address [31:0])
#define BCM2711_11_SRCI	        BCM2711_DMA_BASE_ADDR + 0xB18	// DMA4 Channel 11 CB Word 2 (Source Address [40:32] and Info)
#define BCM2711_11_DEST	        BCM2711_DMA_BASE_ADDR + 0xB1C	// DMA4 Channel 11 CB Word 3 (Destination Address[31:0])
#define BCM2711_11_DESTI	    BCM2711_DMA_BASE_ADDR + 0xB20	// DMA4 Channel 11 CB Word 4 (Destination Address[40:32] and Info)
#define BCM2711_11_LEN	        BCM2711_DMA_BASE_ADDR + 0xB24	// DMA4 Channel 11 CB Word 5 (Transfer Length)
#define BCM2711_11_NEXT_CB	    BCM2711_DMA_BASE_ADDR + 0xB28	// DMA4 Channel 11 CB Word 6 (Next CB Address)
#define BCM2711_11_DEBUG2	    BCM2711_DMA_BASE_ADDR + 0xB2C	// DMA4 Channel 11 More Debug
#define BCM2711_12_CS	        BCM2711_DMA_BASE_ADDR + 0xC00	// DMA4 Channel 12 Control and Status
#define BCM2711_12_CB	        BCM2711_DMA_BASE_ADDR + 0xC04	// DMA4 Channel 12 Control Block Address
#define BCM2711_12_DEBUG	    BCM2711_DMA_BASE_ADDR + 0xC0C	// DMA4 Channel 12 Debug
#define BCM2711_12_TI	        BCM2711_DMA_BASE_ADDR + 0xC10	// DMA4 Channel 12 CB Word 0 (Transfer Information)
#define BCM2711_12_SRC	        BCM2711_DMA_BASE_ADDR + 0xC14	// DMA4 Channel 12 CB Word 1 (Source Address [31:0])
#define BCM2711_12_SRCI	        BCM2711_DMA_BASE_ADDR + 0xC18	// DMA4 Channel 12 CB Word 2 (Source Address [40:32] and Info)
#define BCM2711_12_DEST	        BCM2711_DMA_BASE_ADDR + 0xC1C	// DMA4 Channel 12 CB Word 3 (Destination Address[31:0])
#define BCM2711_12_DESTI	    BCM2711_DMA_BASE_ADDR + 0xC20	// DMA4 Channel 12 CB Word 4 (Destination Address[40:32] and Info)
#define BCM2711_12_LEN	        BCM2711_DMA_BASE_ADDR + 0xC24	// DMA4 Channel 12 CB Word 5 (Transfer Length)
#define BCM2711_12_NEXT_CB	    BCM2711_DMA_BASE_ADDR + 0xC28	// DMA4 Channel 12 CB Word 6 (Next CB Address)
#define BCM2711_12_DEBUG2	    BCM2711_DMA_BASE_ADDR + 0xC2C	// DMA4 Channel 12 More Debug
#define BCM2711_13_CS	        BCM2711_DMA_BASE_ADDR + 0xD00	// DMA4 Channel 13 Control and Status
#define BCM2711_13_CB	        BCM2711_DMA_BASE_ADDR + 0xD04	// DMA4 Channel 13 Control Block Address
#define BCM2711_13_DEBUG	    BCM2711_DMA_BASE_ADDR + 0xD0C	// DMA4 Channel 13 Debug
#define BCM2711_13_TI	        BCM2711_DMA_BASE_ADDR + 0xD10	// DMA4 Channel 13 CB Word 0 (Transfer Information)
#define BCM2711_13_SRC	        BCM2711_DMA_BASE_ADDR + 0xD14	// DMA4 Channel 13 CB Word 1 (Source Address [31:0])
#define BCM2711_13_SRCI	        BCM2711_DMA_BASE_ADDR + 0xD18	// DMA4 Channel 13 CB Word 2 (Source Address [40:32] and Info)
#define BCM2711_13_DEST	        BCM2711_DMA_BASE_ADDR + 0xD1C	// DMA4 Channel 13 CB Word 3 (Destination Address[31:0])
#define BCM2711_13_DESTI	    BCM2711_DMA_BASE_ADDR + 0xD20	// DMA4 Channel 13 CB Word 4 (Destination Address[40:32] and Info)
#define BCM2711_13_LEN	        BCM2711_DMA_BASE_ADDR + 0xD24	// DMA4 Channel 13 CB Word 5 (Transfer Length)
#define BCM2711_13_NEXT_CB	    BCM2711_DMA_BASE_ADDR + 0xD28	// DMA4 Channel 13 CB Word 6 (Next CB Address)
#define BCM2711_13_DEBUG2	    BCM2711_DMA_BASE_ADDR + 0xD2C	// DMA4 Channel 13 More Debug
#define BCM2711_14_CS	        BCM2711_DMA_BASE_ADDR + 0xE00	// DMA4 Channel 14 Control and Status
#define BCM2711_14_CB	        BCM2711_DMA_BASE_ADDR + 0xE04	// DMA4 Channel 14 Control Block Address
#define BCM2711_14_DEBUG	    BCM2711_DMA_BASE_ADDR + 0xE0C	// DMA4 Channel 14 Debug
#define BCM2711_14_TI	        BCM2711_DMA_BASE_ADDR + 0xE10	// DMA4 Channel 14 CB Word 0 (Transfer Information)
#define BCM2711_14_SRC	        BCM2711_DMA_BASE_ADDR + 0xE14	// DMA4 Channel 14 CB Word 1 (Source Address [31:0])
#define BCM2711_14_SRCI	        BCM2711_DMA_BASE_ADDR + 0xE18	// DMA4 Channel 14 CB Word 2 (Source Address [40:32] and Info)
#define BCM2711_14_DEST	        BCM2711_DMA_BASE_ADDR + 0xE1C	// DMA4 Channel 14 CB Word 3 (Destination Address[31:0])
#define BCM2711_14_DESTI	    BCM2711_DMA_BASE_ADDR + 0xE20	// DMA4 Channel 14 CB Word 4 (Destination Address[40:32] and Info)
#define BCM2711_14_LEN	        BCM2711_DMA_BASE_ADDR + 0xE24	// DMA4 Channel 14 CB Word 5 (Transfer Length)
#define BCM2711_14_NEXT_CB	    BCM2711_DMA_BASE_ADDR + 0xE28	// DMA4 Channel 14 CB Word 6 (Next CB Address)
#define BCM2711_14_DEBUG2	    BCM2711_DMA_BASE_ADDR + 0xE2C	// DMA4 Channel 14 More Debug
#define BCM2711_INT_STATUS	    BCM2711_DMA_BASE_ADDR + 0xFE0	// Interrupt status of each DMA channel
#define BCM2711_ENABLE	        BCM2711_DMA_BASE_ADDR + 0xFF0	// Global enable bits for each DMA channel
    
#endif // _BCM2711_DMA_REGISTERS_H_
