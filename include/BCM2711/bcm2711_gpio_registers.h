/*
 * Filename: bcm2711_gpio_registers.h
 * Description: Header file containing definitions for BCM2711_GPIO_REGISTERS.
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

#ifndef _BCM2711_GPIO_REGISTERS_H_
#define _BCM2711_GPIO_REGISTERS_H_

#define BCM2711_GPFSEL0	                    BCM2711_GPIO_BASE_ADDR + 0x00	// GPIO Function Select 0
#define BCM2711_GPFSEL1	                    BCM2711_GPIO_BASE_ADDR + 0x04	// GPIO Function Select 1
#define BCM2711_GPFSEL2	                    BCM2711_GPIO_BASE_ADDR + 0x08	// GPIO Function Select 2
#define BCM2711_GPFSEL3	                    BCM2711_GPIO_BASE_ADDR + 0x0C	// GPIO Function Select 3
#define BCM2711_GPFSEL4	                    BCM2711_GPIO_BASE_ADDR + 0x10	// GPIO Function Select 4
#define BCM2711_GPFSEL5	                    BCM2711_GPIO_BASE_ADDR + 0x14	// GPIO Function Select 5
#define BCM2711_GPSET0	                    BCM2711_GPIO_BASE_ADDR + 0x1C	// GPIO Pin Output Set 0
#define BCM2711_GPSET1	                    BCM2711_GPIO_BASE_ADDR + 0x20	// GPIO Pin Output Set 1
#define BCM2711_GPCLR0	                    BCM2711_GPIO_BASE_ADDR + 0x28	// GPIO Pin Output Clear 0
#define BCM2711_GPCLR1	                    BCM2711_GPIO_BASE_ADDR + 0x2C	// GPIO Pin Output Clear 1
#define BCM2711_GPLEV0	                    BCM2711_GPIO_BASE_ADDR + 0x34	// GPIO Pin Level 0
#define BCM2711_GPLEV1	                    BCM2711_GPIO_BASE_ADDR + 0x38	// GPIO Pin Level 1
#define BCM2711_GPEDS0	                    BCM2711_GPIO_BASE_ADDR + 0x40	// GPIO Pin Event Detect Status 0
#define BCM2711_GPEDS1	                    BCM2711_GPIO_BASE_ADDR + 0x44	// GPIO Pin Event Detect Status 1
#define BCM2711_GPREN0	                    BCM2711_GPIO_BASE_ADDR + 0x4C	// GPIO Pin Rising Edge Detect Enable 0
#define BCM2711_GPREN1	                    BCM2711_GPIO_BASE_ADDR + 0x50	// GPIO Pin Rising Edge Detect Enable 1
#define BCM2711_GPFEN0	                    BCM2711_GPIO_BASE_ADDR + 0x58	// GPIO Pin Falling Edge Detect Enable 0
#define BCM2711_GPFEN1	                    BCM2711_GPIO_BASE_ADDR + 0x5C	// GPIO Pin Falling Edge Detect Enable 1
#define BCM2711_GPHEN0	                    BCM2711_GPIO_BASE_ADDR + 0x64	// GPIO Pin High Detect Enable 0
#define BCM2711_GPHEN1	                    BCM2711_GPIO_BASE_ADDR + 0x68	// GPIO Pin High Detect Enable 1
#define BCM2711_GPLEN0	                    BCM2711_GPIO_BASE_ADDR + 0x70	// GPIO Pin Low Detect Enable 0
#define BCM2711_GPLEN1	                    BCM2711_GPIO_BASE_ADDR + 0x74	// GPIO Pin Low Detect Enable 1
#define BCM2711_GPAREN0	                    BCM2711_GPIO_BASE_ADDR + 0x7C	// GPIO Pin Async. Rising Edge Detect 0
#define BCM2711_GPAREN1	                    BCM2711_GPIO_BASE_ADDR + 0x80	// GPIO Pin Async. Rising Edge Detect 1
#define BCM2711_GPAFEN0	                    BCM2711_GPIO_BASE_ADDR + 0x88	// GPIO Pin Async. Falling Edge Detect 0
#define BCM2711_GPAFEN1	                    BCM2711_GPIO_BASE_ADDR + 0x8C	// GPIO Pin Async. Falling Edge Detect 1
#define BCM2711_GPIO_PUP_PDN_CNTRL_REG0	    BCM2711_GPIO_BASE_ADDR + 0xE4	// GPIO Pull-up / Pull-down Register 0
#define BCM2711_GPIO_PUP_PDN_CNTRL_REG1	    BCM2711_GPIO_BASE_ADDR + 0xE8	// GPIO Pull-up / Pull-down Register 1
#define BCM2711_GPIO_PUP_PDN_CNTRL_REG2	    BCM2711_GPIO_BASE_ADDR + 0xEC	// GPIO Pull-up / Pull-down Register 2
#define BCM2711_GPIO_PUP_PDN_CNTRL_REG3	    BCM2711_GPIO_BASE_ADDR + 0xF0	// GPIO Pull-up / Pull-down Register 3
    
#endif // _BCM2711_GPIO_REGISTERS_H_
