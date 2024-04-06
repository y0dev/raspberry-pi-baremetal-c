/*
 * Filename: bcm2711_spi_registers.h
 * Description: Header file containing definitions for BCM2711_SPI_REGISTERS.
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

#ifndef _BCM2711_SPI_REGISTERS_H_
#define _BCM2711_SPI_REGISTERS_H_

#define BCM2711_SPI0_CS	        BCM2711_SPI0_BASE_ADDR + 0x00	// SPI Master Control and Status
#define BCM2711_SPI0_FIFO	    BCM2711_SPI0_BASE_ADDR + 0x04	// SPI Master TX and RX FIFOs
#define BCM2711_SPI0_CLK	    BCM2711_SPI0_BASE_ADDR + 0x08	// SPI Master Clock Divider
#define BCM2711_SPI0_DLEN	    BCM2711_SPI0_BASE_ADDR + 0x0C	// SPI Master Data Length
#define BCM2711_SPI0_LTOH	    BCM2711_SPI0_BASE_ADDR + 0x10	// SPI LoSSI mode TOH
#define BCM2711_SPI0_DC	        BCM2711_SPI0_BASE_ADDR + 0x14	// SPI DMA DREQ Controls

#define BCM2711_SPI3_CS	        BCM2711_SPI3_BASE_ADDR + 0x00	// SPI Master Control and Status
#define BCM2711_SPI3_FIFO	    BCM2711_SPI3_BASE_ADDR + 0x04	// SPI Master TX and RX FIFOs
#define BCM2711_SPI3_CLK	    BCM2711_SPI3_BASE_ADDR + 0x08	// SPI Master Clock Divider
#define BCM2711_SPI3_DLEN	    BCM2711_SPI3_BASE_ADDR + 0x0C	// SPI Master Data Length
#define BCM2711_SPI3_LTOH	    BCM2711_SPI3_BASE_ADDR + 0x10	// SPI LoSSI mode TOH
#define BCM2711_SPI3_DC	        BCM2711_SPI3_BASE_ADDR + 0x14	// SPI DMA DREQ Controls

#define BCM2711_SPI4_CS	        BCM2711_SPI4_BASE_ADDR + 0x00	// SPI Master Control and Status
#define BCM2711_SPI4_FIFO	    BCM2711_SPI4_BASE_ADDR + 0x04	// SPI Master TX and RX FIFOs
#define BCM2711_SPI4_CLK	    BCM2711_SPI4_BASE_ADDR + 0x08	// SPI Master Clock Divider
#define BCM2711_SPI4_DLEN	    BCM2711_SPI4_BASE_ADDR + 0x0C	// SPI Master Data Length
#define BCM2711_SPI4_LTOH	    BCM2711_SPI4_BASE_ADDR + 0x10	// SPI LoSSI mode TOH
#define BCM2711_SPI4_DC	        BCM2711_SPI4_BASE_ADDR + 0x14	// SPI DMA DREQ Controls

#define BCM2711_SPI5_CS	        BCM2711_SPI5_BASE_ADDR + 0x00	// SPI Master Control and Status
#define BCM2711_SPI5_FIFO	    BCM2711_SPI5_BASE_ADDR + 0x04	// SPI Master TX and RX FIFOs
#define BCM2711_SPI5_CLK	    BCM2711_SPI5_BASE_ADDR + 0x08	// SPI Master Clock Divider
#define BCM2711_SPI5_DLEN	    BCM2711_SPI5_BASE_ADDR + 0x0C	// SPI Master Data Length
#define BCM2711_SPI5_LTOH	    BCM2711_SPI5_BASE_ADDR + 0x10	// SPI LoSSI mode TOH
#define BCM2711_SPI5_DC	        BCM2711_SPI5_BASE_ADDR + 0x14	// SPI DMA DREQ Controls

#define BCM2711_SPI6_CS	        BCM2711_SPI6_BASE_ADDR + 0x00	// SPI Master Control and Status
#define BCM2711_SPI6_FIFO	    BCM2711_SPI6_BASE_ADDR + 0x04	// SPI Master TX and RX FIFOs
#define BCM2711_SPI6_CLK	    BCM2711_SPI6_BASE_ADDR + 0x08	// SPI Master Clock Divider
#define BCM2711_SPI6_DLEN	    BCM2711_SPI6_BASE_ADDR + 0x0C	// SPI Master Data Length
#define BCM2711_SPI6_LTOH	    BCM2711_SPI6_BASE_ADDR + 0x10	// SPI LoSSI mode TOH
#define BCM2711_SPI6_DC	        BCM2711_SPI6_BASE_ADDR + 0x14	// SPI DMA DREQ Controls
    
#endif // _BCM2711_SPI_REGISTERS_H_
