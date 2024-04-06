/*
 * Filename: bcm2711_sys_timer_registers.h
 * Description: Header file containing definitions for BCM2711_SYS_TIMER_REGISTERS.
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

#ifndef _BCM2711_SYS_TIMER_REGISTERS_H_
#define _BCM2711_SYS_TIMER_REGISTERS_H_

#define BCM2711_SYS_TIMER_CS      BCM2711_SYS_TIMER_BASE_ADDR + 0x00	// System Timer Control/Status
#define BCM2711_SYS_TIMER_CLO     BCM2711_SYS_TIMER_BASE_ADDR + 0x04	// System Timer Counter Lower 32 bits
#define BCM2711_SYS_TIMER_CHI     BCM2711_SYS_TIMER_BASE_ADDR + 0x08	// System Timer Counter Higher 32 bits
#define BCM2711_SYS_TIMER_C0      BCM2711_SYS_TIMER_BASE_ADDR + 0x0C	// System Timer Compare 0
#define BCM2711_SYS_TIMER_C1      BCM2711_SYS_TIMER_BASE_ADDR + 0x10	// System Timer Compare 1
#define BCM2711_SYS_TIMER_C2      BCM2711_SYS_TIMER_BASE_ADDR + 0x14	// System Timer Compare 2
#define BCM2711_SYS_TIMER_C3      BCM2711_SYS_TIMER_BASE_ADDR + 0x18	// System Timer Compare 3
    
#endif // _BCM2711_SYS_TIMER_REGISTERS_H_
