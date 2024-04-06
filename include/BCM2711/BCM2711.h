/*
 * Filename: bcm2711_uart_registers.h
 * Description: Header file containing definitions for BCM2711_UART_REGISTERS.
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

#ifndef _PEXPERT_ARM_BCM2711_H_
#define _PEXPERT_ARM_BCM2711_H_

#define KILOBYTE    1024

#ifdef BCM2711
#include "arm64_common.h"
#endif
 
#define NO_MONITOR 1
#define NO_ECORE 1

#ifndef ASSEMBLER

#define PI3_UART

#define PI3_BREAK				asm volatile("brk #0");

#include "bcm2711_aux_registers.h"
#include "bcm2711_dma_registers.h"
#include "bcm2711_gpio_registers.h"
#include "bcm2711_irq_registers.h"
#include "bcm2711_mailbox_registers.h"
#include "bcm2711_pcm_registers.h"
#include "bcm2711_pwm_registers.h"
#include "bcm2711_spi_registers.h"
#include "bcm2711_sys_timer_registers.h"
#include "bcm2711_timer_registers.h"
#include "bcm2711_uart_registers.h"

#define BCM2711_PUT32(addr, value) do { *((volatile uint32_t *) addr) = value; } while(0)
#define BCM2711_GET32(addr) *((volatile uint32_t *) addr)

#define PLATFORM_PANIC_LOG_PADDR	0x3c0fc000
#define PLATFORM_PANIC_LOG_SIZE		16 * KILOBYTE        
#endif /* ! ASSEMBLER */

#endif /* ! _PEXPERT_ARM_BCM2711_H_ */
