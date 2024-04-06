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
#include <bluetooth/rfcomm.h>

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

/**
 * @brief Sends data over Bluetooth.
 * 
 * @param[in] bluetooth_device The Bluetooth device to send data to.
 * @param[in] data The data to be sent.
 * @param[in] data_length The length of the data to be sent.
 * @return Returns 0 upon successful data transmission, or -1 on failure.
 */
int send_data_over_bluetooth(bluetooth_device_t *bluetooth_device, const char *data, int data_length) {
    int client_sock = socket(AF_BLUETOOTH, SOCK_STREAM, BTPROTO_RFCOMM);
    if (client_sock < 0) {
        perror("Failed to create Bluetooth socket");
        return -1;
    }

    struct sockaddr_rc server_addr = { 0 };
    server_addr.rc_family = AF_BLUETOOTH;
    server_addr.rc_channel = (uint8_t)bluetooth_device->channel;
    str2ba(bluetooth_device->address, &server_addr.rc_bdaddr);

    if (connect(client_sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Failed to connect to Bluetooth device");
        close(client_sock);
        return -1;
    }

    if (send(client_sock, data, data_length, 0) < 0) {
        perror("Failed to send data over Bluetooth");
        close(client_sock);
        return -1;
    }

    close(client_sock);
    return 0;
}

/**
 * @brief Receives data over Bluetooth.
 * 
 * @param[in] bluetooth_device The Bluetooth device from which to receive data.
 * @param[out] buffer The buffer to store the received data.
 * @param[in] buffer_length The maximum length of the buffer.
 * @return Returns the number of bytes received upon successful reception, or -1 on failure.
 */
int receive_data_over_bluetooth(bluetooth_device_t *bluetooth_device, char *buffer, int buffer_length) {
    int server_sock = socket(AF_BLUETOOTH, SOCK_STREAM, BTPROTO_RFCOMM);
    if (server_sock < 0) {
        perror("Failed to create Bluetooth socket");
        return -1;
    }

    struct sockaddr_rc server_addr = { 0 };
    server_addr.rc_family = AF_BLUETOOTH;
    server_addr.rc_bdaddr = *BDADDR_ANY;
    server_addr.rc_channel = (uint8_t)bluetooth_device->channel;

    if (bind(server_sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Failed to bind Bluetooth socket");
        close(server_sock);
        return -1;
    }

    listen(server_sock, 1);

    struct sockaddr_rc client_addr = { 0 };
    socklen_t opt = sizeof(client_addr);
    int client_sock = accept(server_sock, (struct sockaddr *)&client_addr, &opt);
    if (client_sock < 0) {
        perror("Failed to accept connection");
        close(server_sock);
        return -1;
    }

    int bytes_received = recv(client_sock, buffer, buffer_length, 0);
    if (bytes_received < 0) {
        perror("Failed to receive data over Bluetooth");
        close(client_sock);
        close(server_sock);
        return -1;
    }

    close(client_sock);
    close(server_sock);
    return bytes_received;
}