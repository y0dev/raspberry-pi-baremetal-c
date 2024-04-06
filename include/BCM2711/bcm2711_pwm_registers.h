
/*
 * Filename: bcm2711_pwm_registers.h
 * Description: Header file containing definitions for BCM2711_PWM_REGISTER.
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

#ifndef _BCM2711_PWM_REGISTER_H_
#define _BCM2711_PWM_REGISTER_H_

#define BCM2711_PWM0_CTL	    BCM2711_PWM0_BASE_ADDR + 0x00	// PWM Control
#define BCM2711_PWM0_STA	    BCM2711_PWM0_BASE_ADDR + 0x04	// PWM Status
#define BCM2711_PWM0_DMAC	    BCM2711_PWM0_BASE_ADDR + 0x08	// PWM DMA Configuration
#define BCM2711_PWM0_RNG1	    BCM2711_PWM0_BASE_ADDR + 0x10	// PWM Channel 1 Range
#define BCM2711_PWM0_DAT1	    BCM2711_PWM0_BASE_ADDR + 0x14	// PWM Channel 1 Data
#define BCM2711_PWM0_FIF1	    BCM2711_PWM0_BASE_ADDR + 0x18	// PWM FIFO Input
#define BCM2711_PWM0_RNG2	    BCM2711_PWM0_BASE_ADDR + 0x20	// PWM Channel 2 Range
#define BCM2711_PWM0_DAT2	    BCM2711_PWM0_BASE_ADDR + 0x24	// PWM Channel 2 Data

#define BCM2711_PWM1_CTL	    BCM2711_PWM1_BASE_ADDR + 0x00	// PWM Control
#define BCM2711_PWM1_STA	    BCM2711_PWM1_BASE_ADDR + 0x04	// PWM Status
#define BCM2711_PWM1_DMAC	    BCM2711_PWM1_BASE_ADDR + 0x08	// PWM DMA Configuration
#define BCM2711_PWM1_RNG1	    BCM2711_PWM1_BASE_ADDR + 0x10	// PWM Channel 1 Range
#define BCM2711_PWM1_DAT1	    BCM2711_PWM1_BASE_ADDR + 0x14	// PWM Channel 1 Data
#define BCM2711_PWM1_FIF1	    BCM2711_PWM1_BASE_ADDR + 0x18	// PWM FIFO Input
#define BCM2711_PWM1_RNG2	    BCM2711_PWM1_BASE_ADDR + 0x20	// PWM Channel 2 Range
#define BCM2711_PWM1_DAT2	    BCM2711_PWM1_BASE_ADDR + 0x24	// PWM Channel 2 Data
    
#endif // _BCM2711_PWM_REGISTER_H_
