
/*
 * Filename: bcm2711_timer_registers.h
 * Description: Header file containing definitions for BCM2711_TIMER_REGISTER.
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

#ifndef _BCM2711_TIMER_REGISTER_H_
#define _BCM2711_TIMER_REGISTER_H_

#define BCM2711_TIMER_LOAD	        BCM2711_TIMER_BASE_ADDR + 0x400	// Load
#define BCM2711_TIMER_VALUE	        BCM2711_TIMER_BASE_ADDR + 0x404	// Value (Read-Only)
#define BCM2711_TIMER_CONTROL	    BCM2711_TIMER_BASE_ADDR + 0x408	// Control
#define BCM2711_TIMER_IRQCNTL	    BCM2711_TIMER_BASE_ADDR + 0x40C	// IRQ Clear/Ack (Write-Only)
#define BCM2711_TIMER_RAWIRQ	    BCM2711_TIMER_BASE_ADDR + 0x410	// RAW IRQ (Read-Only)
#define BCM2711_TIMER_MSKIRQ	    BCM2711_TIMER_BASE_ADDR + 0x414	// Masked IRQ (Read-Only)
#define BCM2711_TIMER_RELOAD	    BCM2711_TIMER_BASE_ADDR + 0x418	// Reload
#define BCM2711_TIMER_PREDIV	    BCM2711_TIMER_BASE_ADDR + 0x41C	// Pre-divider (Not in real 804!)
#define BCM2711_TIMER_FREECNT	    BCM2711_TIMER_BASE_ADDR + 0x420	// Free running counter (Not in real 804!)
    
#endif // _BCM2711_TIMER_REGISTER_H_
