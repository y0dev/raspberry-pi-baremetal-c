/*
 * Filename: bcm2711_aux_registers.h
 * Description: Header file containing definitions for BCM2711_AUX_REGISTERS.
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

#ifndef _BCM2711_AUX_REGISTERS_H_
#define _BCM2711_AUX_REGISTERS_H_

#define BCM2711_AUX_IRQ	                BCM2711_AUX_BASE_ADDR + 0x00	// Auxiliary Interrupt status
#define BCM2711_AUX_ENABLES	            BCM2711_AUX_BASE_ADDR + 0x04	// Auxiliary enables
#define BCM2711_AUX_MU_IO_REG	        BCM2711_AUX_BASE_ADDR + 0x40	// Mini UART I/O Data
#define BCM2711_AUX_MU_IER_REG	        BCM2711_AUX_BASE_ADDR + 0x44	// Mini UART Interrupt Enable
#define BCM2711_AUX_MU_IIR_REG	        BCM2711_AUX_BASE_ADDR + 0x48	// Mini UART Interrupt Identify
#define BCM2711_AUX_MU_LCR_REG	        BCM2711_AUX_BASE_ADDR + 0x4c	// Mini UART Line Control
#define BCM2711_AUX_MU_MCR_REG	        BCM2711_AUX_BASE_ADDR + 0x50	// Mini UART Modem Control
#define BCM2711_AUX_MU_LSR_REG	        BCM2711_AUX_BASE_ADDR + 0x54	// Mini UART Line Status
#define BCM2711_AUX_MU_MSR_REG	        BCM2711_AUX_BASE_ADDR + 0x58	// Mini UART Modem Status
#define BCM2711_AUX_MU_SCRATCH	        BCM2711_AUX_BASE_ADDR + 0x5c	// Mini UART Scratch
#define BCM2711_AUX_MU_CNTL_REG	        BCM2711_AUX_BASE_ADDR + 0x60	// Mini UART Extra Control
#define BCM2711_AUX_MU_STAT_REG	        BCM2711_AUX_BASE_ADDR + 0x64	// Mini UART Extra Status
#define BCM2711_AUX_MU_BAUD_REG	        BCM2711_AUX_BASE_ADDR + 0x68	// Mini UART Baudrate
#define BCM2711_AUX_SPI1_CNTL0_REG	    BCM2711_AUX_BASE_ADDR + 0x80	// SPI 1 Control register 0
#define BCM2711_AUX_SPI1_CNTL1_REG	    BCM2711_AUX_BASE_ADDR + 0x84	// SPI 1 Control register 1
#define BCM2711_AUX_SPI1_STAT_REG	    BCM2711_AUX_BASE_ADDR + 0x88	// SPI 1 Status
#define BCM2711_AUX_SPI1_PEEK_REG	    BCM2711_AUX_BASE_ADDR + 0x8c	// SPI 1 Peek
#define BCM2711_AUX_SPI1_IO_REGA	    BCM2711_AUX_BASE_ADDR + 0xa0	// SPI 1 Data
#define BCM2711_AUX_SPI1_IO_REGB	    BCM2711_AUX_BASE_ADDR + 0xa4	// SPI 1 Data
#define BCM2711_AUX_SPI1_IO_REGC	    BCM2711_AUX_BASE_ADDR + 0xa8	// SPI 1 Data
#define BCM2711_AUX_SPI1_IO_REGD	    BCM2711_AUX_BASE_ADDR + 0xac	// SPI 1 Data
#define BCM2711_AUX_SPI1_TXHOLD_REGA	BCM2711_AUX_BASE_ADDR + 0xb0	// SPI 1 Extended Data
#define BCM2711_AUX_SPI1_TXHOLD_REGB	BCM2711_AUX_BASE_ADDR + 0xb4	// SPI 1 Extended Data
#define BCM2711_AUX_SPI1_TXHOLD_REGC	BCM2711_AUX_BASE_ADDR + 0xb8	// SPI 1 Extended Data
#define BCM2711_AUX_SPI1_TXHOLD_REGD	BCM2711_AUX_BASE_ADDR + 0xbc	// SPI 1 Extended Data
#define BCM2711_AUX_SPI2_CNTL0_REG	    BCM2711_AUX_BASE_ADDR + 0xc0	// SPI 2 Control register 0
#define BCM2711_AUX_SPI2_CNTL1_REG	    BCM2711_AUX_BASE_ADDR + 0xc4	// SPI 2 Control register 1
#define BCM2711_AUX_SPI2_STAT_REG	    BCM2711_AUX_BASE_ADDR + 0xc8	// SPI 2 Status
#define BCM2711_AUX_SPI2_PEEK_REG	    BCM2711_AUX_BASE_ADDR + 0xcc	// SPI 2 Peek
#define BCM2711_AUX_SPI2_IO_REGA	    BCM2711_AUX_BASE_ADDR + 0xe0	// SPI 2 Data
#define BCM2711_AUX_SPI2_IO_REGB	    BCM2711_AUX_BASE_ADDR + 0xe4	// SPI 2 Data
#define BCM2711_AUX_SPI2_IO_REGC	    BCM2711_AUX_BASE_ADDR + 0xe8	// SPI 2 Data
#define BCM2711_AUX_SPI2_IO_REGD	    BCM2711_AUX_BASE_ADDR + 0xec	// SPI 2 Data
#define BCM2711_AUX_SPI2_TXHOLD_REGA	BCM2711_AUX_BASE_ADDR + 0xf0	// SPI 2 Extended Data
#define BCM2711_AUX_SPI2_TXHOLD_REGB	BCM2711_AUX_BASE_ADDR + 0xf4	// SPI 2 Extended Data
#define BCM2711_AUX_SPI2_TXHOLD_REGC	BCM2711_AUX_BASE_ADDR + 0xf8	// SPI 2 Extended Data
#define BCM2711_AUX_SPI2_TXHOLD_REGD	BCM2711_AUX_BASE_ADDR + 0xfc	// SPI 2 Extended Data
    
#endif // _BCM2711_AUX_REGISTERS_H_
