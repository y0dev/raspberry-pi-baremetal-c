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

#include "BCM2711_base_addresses.h"

#ifndef _BCM2711_UART_REGISTERS_H_
#define _BCM2711_UART_REGISTERS_H_

#define BCM2711_UART0_DR	        BCM2711_UART0_BASE_ADDR + 0x00	// Data Register
#define BCM2711_UART0_RSRECR	    BCM2711_UART0_BASE_ADDR + 0x04	// 
#define BCM2711_UART0_FR	        BCM2711_UART0_BASE_ADDR + 0x18	// Flag register
#define BCM2711_UART0_ILPR	        BCM2711_UART0_BASE_ADDR + 0x20	// not in use
#define BCM2711_UART0_IBRD	        BCM2711_UART0_BASE_ADDR + 0x24	// Integer Baud rate divisor
#define BCM2711_UART0_FBRD	        BCM2711_UART0_BASE_ADDR + 0x28	// Fractional Baud rate divisor
#define BCM2711_UART0_LCRH	        BCM2711_UART0_BASE_ADDR + 0x2C	// Line Control register
#define BCM2711_UART0_CR	        BCM2711_UART0_BASE_ADDR + 0x30	// Control register
#define BCM2711_UART0_IFLS	        BCM2711_UART0_BASE_ADDR + 0x34	// Interrupt FIFO Level Select Register
#define BCM2711_UART0_IMSC	        BCM2711_UART0_BASE_ADDR + 0x38	// Interrupt Mask Set Clear Register
#define BCM2711_UART0_RIS	        BCM2711_UART0_BASE_ADDR + 0x3C	// Raw Interrupt Status Register
#define BCM2711_UART0_MIS	        BCM2711_UART0_BASE_ADDR + 0x40	// Masked Interrupt Status Register
#define BCM2711_UART0_ICR	        BCM2711_UART0_BASE_ADDR + 0x44	// Interrupt Clear Register
#define BCM2711_UART0_DMACR	        BCM2711_UART0_BASE_ADDR + 0x48	// DMA Control Register
#define BCM2711_UART0_ITCR	        BCM2711_UART0_BASE_ADDR + 0x80	// Test Control register
#define BCM2711_UART0_ITIP	        BCM2711_UART0_BASE_ADDR + 0x84	// Integration test input reg
#define BCM2711_UART0_ITOP	        BCM2711_UART0_BASE_ADDR + 0x88	// Integration test output reg
#define BCM2711_UART0_TDR	        BCM2711_UART0_BASE_ADDR + 0x8C	// Test Data reg

#define BCM2711_UART2_DR	        BCM2711_UART2_BASE_ADDR + 0x00	// Data Register
#define BCM2711_UART2_RSRECR	    BCM2711_UART2_BASE_ADDR + 0x04	// 
#define BCM2711_UART2_FR	        BCM2711_UART2_BASE_ADDR + 0x18	// Flag register
#define BCM2711_UART2_ILPR	        BCM2711_UART2_BASE_ADDR + 0x20	// not in use
#define BCM2711_UART2_IBRD	        BCM2711_UART2_BASE_ADDR + 0x24	// Integer Baud rate divisor
#define BCM2711_UART2_FBRD	        BCM2711_UART2_BASE_ADDR + 0x28	// Fractional Baud rate divisor
#define BCM2711_UART2_LCRH	        BCM2711_UART2_BASE_ADDR + 0x2C	// Line Control register
#define BCM2711_UART2_CR	        BCM2711_UART2_BASE_ADDR + 0x30	// Control register
#define BCM2711_UART2_IFLS	        BCM2711_UART2_BASE_ADDR + 0x34	// Interrupt FIFO Level Select Register
#define BCM2711_UART2_IMSC	        BCM2711_UART2_BASE_ADDR + 0x38	// Interrupt Mask Set Clear Register
#define BCM2711_UART2_RIS	        BCM2711_UART2_BASE_ADDR + 0x3C	// Raw Interrupt Status Register
#define BCM2711_UART2_MIS	        BCM2711_UART2_BASE_ADDR + 0x40	// Masked Interrupt Status Register
#define BCM2711_UART2_ICR	        BCM2711_UART2_BASE_ADDR + 0x44	// Interrupt Clear Register
#define BCM2711_UART2_DMACR	        BCM2711_UART2_BASE_ADDR + 0x48	// DMA Control Register
#define BCM2711_UART2_ITCR	        BCM2711_UART2_BASE_ADDR + 0x80	// Test Control register
#define BCM2711_UART2_ITIP	        BCM2711_UART2_BASE_ADDR + 0x84	// Integration test input reg
#define BCM2711_UART2_ITOP	        BCM2711_UART2_BASE_ADDR + 0x88	// Integration test output reg
#define BCM2711_UART2_TDR	        BCM2711_UART2_BASE_ADDR + 0x8C	// Test Data reg

#define BCM2711_UART3_DR	        BCM2711_UART3_BASE_ADDR + 0x00	// Data Register
#define BCM2711_UART3_RSRECR	    BCM2711_UART3_BASE_ADDR + 0x04	// 
#define BCM2711_UART3_FR	        BCM2711_UART3_BASE_ADDR + 0x18	// Flag register
#define BCM2711_UART3_ILPR	        BCM2711_UART3_BASE_ADDR + 0x20	// not in use
#define BCM2711_UART3_IBRD	        BCM2711_UART3_BASE_ADDR + 0x24	// Integer Baud rate divisor
#define BCM2711_UART3_FBRD	        BCM2711_UART3_BASE_ADDR + 0x28	// Fractional Baud rate divisor
#define BCM2711_UART3_LCRH	        BCM2711_UART3_BASE_ADDR + 0x2C	// Line Control register
#define BCM2711_UART3_CR	        BCM2711_UART3_BASE_ADDR + 0x30	// Control register
#define BCM2711_UART3_IFLS	        BCM2711_UART3_BASE_ADDR + 0x34	// Interrupt FIFO Level Select Register
#define BCM2711_UART3_IMSC	        BCM2711_UART3_BASE_ADDR + 0x38	// Interrupt Mask Set Clear Register
#define BCM2711_UART3_RIS	        BCM2711_UART3_BASE_ADDR + 0x3C	// Raw Interrupt Status Register
#define BCM2711_UART3_MIS	        BCM2711_UART3_BASE_ADDR + 0x40	// Masked Interrupt Status Register
#define BCM2711_UART3_ICR	        BCM2711_UART3_BASE_ADDR + 0x44	// Interrupt Clear Register
#define BCM2711_UART3_DMACR	        BCM2711_UART3_BASE_ADDR + 0x48	// DMA Control Register
#define BCM2711_UART3_ITCR	        BCM2711_UART3_BASE_ADDR + 0x80	// Test Control register
#define BCM2711_UART3_ITIP	        BCM2711_UART3_BASE_ADDR + 0x84	// Integration test input reg
#define BCM2711_UART3_ITOP	        BCM2711_UART3_BASE_ADDR + 0x88	// Integration test output reg
#define BCM2711_UART3_TDR	        BCM2711_UART3_BASE_ADDR + 0x8C	// Test Data reg

#define BCM2711_UART4_DR	        BCM2711_UART4_BASE_ADDR + 0x00	// Data Register
#define BCM2711_UART4_RSRECR	    BCM2711_UART4_BASE_ADDR + 0x04	// 
#define BCM2711_UART4_FR	        BCM2711_UART4_BASE_ADDR + 0x18	// Flag register
#define BCM2711_UART4_ILPR	        BCM2711_UART4_BASE_ADDR + 0x20	// not in use
#define BCM2711_UART4_IBRD	        BCM2711_UART4_BASE_ADDR + 0x24	// Integer Baud rate divisor
#define BCM2711_UART4_FBRD	        BCM2711_UART4_BASE_ADDR + 0x28	// Fractional Baud rate divisor
#define BCM2711_UART4_LCRH	        BCM2711_UART4_BASE_ADDR + 0x2C	// Line Control register
#define BCM2711_UART4_CR	        BCM2711_UART4_BASE_ADDR + 0x30	// Control register
#define BCM2711_UART4_IFLS	        BCM2711_UART4_BASE_ADDR + 0x34	// Interrupt FIFO Level Select Register
#define BCM2711_UART4_IMSC	        BCM2711_UART4_BASE_ADDR + 0x38	// Interrupt Mask Set Clear Register
#define BCM2711_UART4_RIS	        BCM2711_UART4_BASE_ADDR + 0x3C	// Raw Interrupt Status Register
#define BCM2711_UART4_MIS	        BCM2711_UART4_BASE_ADDR + 0x40	// Masked Interrupt Status Register
#define BCM2711_UART4_ICR	        BCM2711_UART4_BASE_ADDR + 0x44	// Interrupt Clear Register
#define BCM2711_UART4_DMACR	        BCM2711_UART4_BASE_ADDR + 0x48	// DMA Control Register
#define BCM2711_UART4_ITCR	        BCM2711_UART4_BASE_ADDR + 0x80	// Test Control register
#define BCM2711_UART4_ITIP	        BCM2711_UART4_BASE_ADDR + 0x84	// Integration test input reg
#define BCM2711_UART4_ITOP	        BCM2711_UART4_BASE_ADDR + 0x88	// Integration test output reg
#define BCM2711_UART4_TDR	        BCM2711_UART4_BASE_ADDR + 0x8C	// Test Data reg

#define BCM2711_UART5_DR	        BCM2711_UART5_BASE_ADDR + 0x00	// Data Register
#define BCM2711_UART5_RSRECR	    BCM2711_UART5_BASE_ADDR + 0x04	// 
#define BCM2711_UART5_FR	        BCM2711_UART5_BASE_ADDR + 0x18	// Flag register
#define BCM2711_UART5_ILPR	        BCM2711_UART5_BASE_ADDR + 0x20	// not in use
#define BCM2711_UART5_IBRD	        BCM2711_UART5_BASE_ADDR + 0x24	// Integer Baud rate divisor
#define BCM2711_UART5_FBRD	        BCM2711_UART5_BASE_ADDR + 0x28	// Fractional Baud rate divisor
#define BCM2711_UART5_LCRH	        BCM2711_UART5_BASE_ADDR + 0x2C	// Line Control register
#define BCM2711_UART5_CR	        BCM2711_UART5_BASE_ADDR + 0x30	// Control register
#define BCM2711_UART5_IFLS	        BCM2711_UART5_BASE_ADDR + 0x34	// Interrupt FIFO Level Select Register
#define BCM2711_UART5_IMSC	        BCM2711_UART5_BASE_ADDR + 0x38	// Interrupt Mask Set Clear Register
#define BCM2711_UART5_RIS	        BCM2711_UART5_BASE_ADDR + 0x3C	// Raw Interrupt Status Register
#define BCM2711_UART5_MIS	        BCM2711_UART5_BASE_ADDR + 0x40	// Masked Interrupt Status Register
#define BCM2711_UART5_ICR	        BCM2711_UART5_BASE_ADDR + 0x44	// Interrupt Clear Register
#define BCM2711_UART5_DMACR	        BCM2711_UART5_BASE_ADDR + 0x48	// DMA Control Register
#define BCM2711_UART5_ITCR	        BCM2711_UART5_BASE_ADDR + 0x80	// Test Control register
#define BCM2711_UART5_ITIP	        BCM2711_UART5_BASE_ADDR + 0x84	// Integration test input reg
#define BCM2711_UART5_ITOP	        BCM2711_UART5_BASE_ADDR + 0x88	// Integration test output reg
#define BCM2711_UART5_TDR	        BCM2711_UART5_BASE_ADDR + 0x8C	// Test Data reg
    
#endif // _BCM2711_UART_REGISTERS_H_
