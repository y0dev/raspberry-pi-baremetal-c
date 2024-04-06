/*
 * Filename: bcm2711_mailbox_registers.h
 * Description: Header file containing definitions for BCM2711_MAILBOX_REGISTERS.
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

#ifndef _BCM2711_MAILBOX_REGISTERS_H_
#define _BCM2711_MAILBOX_REGISTERS_H_

#define BCM2711_MBOX_SET00      BCM2711_MAILBOX_BASE_ADDR + 0x80	// Mailbox 00 Set Bit Register
#define BCM2711_MBOX_SET01      BCM2711_MAILBOX_BASE_ADDR + 0x84	// Mailbox 01 Set Bit Register
#define BCM2711_MBOX_SET02      BCM2711_MAILBOX_BASE_ADDR + 0x88	// Mailbox 02 Set Bit Register
#define BCM2711_MBOX_SET03      BCM2711_MAILBOX_BASE_ADDR + 0x8C	// Mailbox 03 Set Bit Register
#define BCM2711_MBOX_SET04      BCM2711_MAILBOX_BASE_ADDR + 0x90	// Mailbox 04 Set Bit Register
#define BCM2711_MBOX_SET05      BCM2711_MAILBOX_BASE_ADDR + 0x94	// Mailbox 05 Set Bit Register
#define BCM2711_MBOX_SET06      BCM2711_MAILBOX_BASE_ADDR + 0x98	// Mailbox 06 Set Bit Register
#define BCM2711_MBOX_SET07      BCM2711_MAILBOX_BASE_ADDR + 0x9C	// Mailbox 07 Set Bit Register
#define BCM2711_MBOX_SET08      BCM2711_MAILBOX_BASE_ADDR + 0xA0	// Mailbox 08 Set Bit Register
#define BCM2711_MBOX_SET09      BCM2711_MAILBOX_BASE_ADDR + 0xA4	// Mailbox 09 Set Bit Register
#define BCM2711_MBOX_SET10      BCM2711_MAILBOX_BASE_ADDR + 0xA8	// Mailbox 10 Set Bit Register
#define BCM2711_MBOX_SET11      BCM2711_MAILBOX_BASE_ADDR + 0xAC	// Mailbox 11 Set Bit Register
#define BCM2711_MBOX_SET12      BCM2711_MAILBOX_BASE_ADDR + 0xB0	// Mailbox 12 Set Bit Register
#define BCM2711_MBOX_SET13      BCM2711_MAILBOX_BASE_ADDR + 0xB4	// Mailbox 13 Set Bit Register
#define BCM2711_MBOX_SET14      BCM2711_MAILBOX_BASE_ADDR + 0xB8	// Mailbox 14 Set Bit Register
#define BCM2711_MBOX_SET15      BCM2711_MAILBOX_BASE_ADDR + 0xBC	// Mailbox 15 Set Bit Register
#define BCM2711_MBOX_CLR00      BCM2711_MAILBOX_BASE_ADDR + 0xC0	// Mailbox 00 Clear Bit Register
#define BCM2711_MBOX_CLR01      BCM2711_MAILBOX_BASE_ADDR + 0xC4	// Mailbox 01 Clear Bit Register
#define BCM2711_MBOX_CLR02      BCM2711_MAILBOX_BASE_ADDR + 0xC8	// Mailbox 02 Clear Bit Register
#define BCM2711_MBOX_CLR03      BCM2711_MAILBOX_BASE_ADDR + 0xCC	// Mailbox 03 Clear Bit Register
#define BCM2711_MBOX_CLR04      BCM2711_MAILBOX_BASE_ADDR + 0xD0	// Mailbox 04 Clear Bit Register
#define BCM2711_MBOX_CLR05      BCM2711_MAILBOX_BASE_ADDR + 0xD4	// Mailbox 05 Clear Bit Register
#define BCM2711_MBOX_CLR06      BCM2711_MAILBOX_BASE_ADDR + 0xD8	// Mailbox 06 Clear Bit Register
#define BCM2711_MBOX_CLR07      BCM2711_MAILBOX_BASE_ADDR + 0xDC	// Mailbox 07 Clear Bit Register
#define BCM2711_MBOX_CLR08      BCM2711_MAILBOX_BASE_ADDR + 0xE0	// Mailbox 08 Clear Bit Register
#define BCM2711_MBOX_CLR09      BCM2711_MAILBOX_BASE_ADDR + 0xE4	// Mailbox 09 Clear Bit Register
#define BCM2711_MBOX_CLR10      BCM2711_MAILBOX_BASE_ADDR + 0xE8	// Mailbox 10 Clear Bit Register
#define BCM2711_MBOX_CLR11      BCM2711_MAILBOX_BASE_ADDR + 0xEC	// Mailbox 11 Clear Bit Register
#define BCM2711_MBOX_CLR12      BCM2711_MAILBOX_BASE_ADDR + 0xF0	// Mailbox 12 Clear Bit Register
#define BCM2711_MBOX_CLR13      BCM2711_MAILBOX_BASE_ADDR + 0xF4	// Mailbox 13 Clear Bit Register
#define BCM2711_MBOX_CLR14      BCM2711_MAILBOX_BASE_ADDR + 0xF8	// Mailbox 14 Clear Bit Register
#define BCM2711_MBOX_CLR15      BCM2711_MAILBOX_BASE_ADDR + 0xFC	// Mailbox 15 Clear Bit Register
    
#endif // _BCM2711_MAILBOX_REGISTERS_H_
