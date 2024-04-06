/*
 * Filename: bcm2711_pcm_registers.h
 * Description: Header file containing definitions for BCM2711_PCM_REGISTERS.
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

#ifndef _BCM2711_PCM_REGISTERS_H_
#define _BCM2711_PCM_REGISTERS_H_

#define BCM2711_CS_A	    BCM2711_PCM_BASE_ADDR + 0x00	// PCM Control and Status
#define BCM2711_FIFO_A	    BCM2711_PCM_BASE_ADDR + 0x04	// PCM FIFO Data
#define BCM2711_MODE_A	    BCM2711_PCM_BASE_ADDR + 0x08	// PCM Mode
#define BCM2711_RXC_A	    BCM2711_PCM_BASE_ADDR + 0x0C	// PCM Receive Configuration
#define BCM2711_TXC_A	    BCM2711_PCM_BASE_ADDR + 0x10	// PCM Transmit Configuration
#define BCM2711_DREQ_A	    BCM2711_PCM_BASE_ADDR + 0x14	// PCM DMA Request Level
#define BCM2711_INTEN_A	    BCM2711_PCM_BASE_ADDR + 0x18	// PCM Interrupt Enables
#define BCM2711_INTSTC_A	BCM2711_PCM_BASE_ADDR + 0x1C	// PCM Interrupt Status & Clear
#define BCM2711_GRAY	    BCM2711_PCM_BASE_ADDR + 0x20	// PCM Gray Mode Control
    
#endif // _BCM2711_PCM_REGISTERS_H_
