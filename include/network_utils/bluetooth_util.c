/*
 * Filename: bluetooth_util.c
 * Description: See header file (bluetooth_util.h)
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

#include "bluetooth_util.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>

/**
 * @brief Sets up Bluetooth functionality on a BCM2711 device.
 * 
 * This function initializes the Bluetooth module on a BCM2711 device, enabling it to be discoverable
 * and accessible by other Bluetooth devices. It configures the necessary settings and parameters
 * to ensure proper operation of the Bluetooth hardware.
 * 
 * @param[in] bluetooth_device The Bluetooth device to be configured.
 * @param[in] discoverable_duration The duration (in seconds) for which the device remains discoverable.
 * @param[out] success Indicates whether the setup process was successful or not.
 * 
 * @return Returns 0 upon successful setup, otherwise returns a non-zero error code.
 */
int setup_bluetooth(bluetooth_device_t *bluetooth_device, int discoverable_duration, int *success) {
    // Check if bluetooth_device pointer is valid
    if (bluetooth_device == NULL) {
        *success = 0;
        return -1; // Invalid pointer
    }
    
    // Initialize Bluetooth device
    if (!initialize_bluetooth(bluetooth_device)) {
        *success = 0;
        return -2; // Initialization failed
    }

    // Set the device name
    const char *device_name = RASPBERRY_PI_DEVICE_NAME;
    if (!set_device_name(&my_bluetooth_device, device_name)) {
        // printf("Failed to set device name: Error code %d\n", result);
        *success = 0;
        return -3; // Failed to set device name
    }

    // Make the device discoverable
    if (!make_discoverable(bluetooth_device, discoverable_duration)) {
        *success = 0;
        return -4; // Failed to make device discoverable
    }
    
    *success = 1;
    return 0; // Success
}
