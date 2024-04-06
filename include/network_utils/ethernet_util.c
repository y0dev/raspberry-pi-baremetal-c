/*
 * Filename: ethernet_util.c
 * Description: See Header File (ethernet_util.h)
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

#include "ethernet_util.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

/**
 * @brief Initializes a TCP connection using the provided Ethernet configuration.
 *
 * This function creates a TCP socket, binds it to the specified IP address and port,
 * and starts listening for incoming connections.
 *
 * @param[in] eConfig Pointer to the Ethernet configuration containing IP address and port information.
 *
 * @return Returns 0 upon successful initialization, otherwise returns -1.
 */
static int init_tcp_connection(EthernetConfig* eConfig)
{
    struct sockaddr_in server_addr;

    // Create TCP socket
    eConfig->tcp_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (eConfig->tcp_socket < 0) {
        perror("Error opening TCP socket");
        return -1;
    }

    // Initialize server address structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(eConfig->ip_address);
    server_addr.sin_port = htons(eConfig->port);

    // Bind TCP socket
    if (bind(eConfig->tcp_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("TCP bind failed");
        return -1;
    }

    // TCP Listen
    if (listen(eConfig->tcp_socket, 5) < 0) {
        perror("TCP listen failed");
        return -1;
    }

    printf("Server listening on IP: %s, Port: %d\n", eConfig->ip_address, eConfig->port);

    return 0;
}

/**
 * @brief Initializes a UDP connection using the provided Ethernet configuration.
 *
 * This function creates a UDP socket, binds it to the specified IP address and port.
 *
 * @param[in] eConfig Pointer to the Ethernet configuration containing IP address and port information.
 *
 * @return Returns 0 upon successful initialization, otherwise returns -1.
 */
static int init_udp_connection(EthernetConfig* eConfig)
{
    struct sockaddr_in server_addr;

    // Create UDP socket
    eConfig->udp_socket = socket(AF_INET, SOCK_DGRAM, 0);
    if (eConfig->udp_socket < 0) {
        perror("Error opening UDP socket");
        return -1;
    }

    // Initialize server address structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(eConfig->ip_address);
    server_addr.sin_port = htons(eConfig->port);

    // Bind UDP socket
    if (bind(eConfig->udp_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("UDP bind failed");
        return -1;
    }

    printf("Server listening on IP: %s, Port: %d\n", eConfig->ip_address, eConfig->port);

}
/**
 * @brief Initializes an Ethernet connection based on the provided configuration.
 * 
 * This function initializes an Ethernet connection according to the configuration specified
 * in the provided EthernetConfig structure. It determines the type of connection (TCP or UDP)
 * and calls the corresponding initialization function.
 * 
 * @param[in] eConfig Pointer to the EthernetConfig structure containing the connection configuration.
 * @return Returns 0 upon successful initialization, otherwise returns a non-zero error code.
 */
int init_ethernet_connection(EthernetConfig *eConfig)
{
    int status = 0;
    if (eConfig->connType == TCP_CONNECTION)
    {
        status = init_tcp_connection(eConfig);
    }
    else if(eConfig->connType == UDP_CONNECTION)
    {
        status = init_udp_connection(eConfig);
    }
    return status;
}

/**
 * @brief Closes the Ethernet connection.
 * 
 * This function closes the Ethernet connection based on the provided configuration. It determines
 * the type of connection (TCP or UDP) and closes the corresponding socket descriptor.
 * 
 * @param[in] eConfig Pointer to the EthernetConfig structure containing the connection configuration.
 * @return Returns 0 upon successful closure, otherwise returns a non-zero error code.
 */
int close_connection(EthernetConfig *eConfig)
{
    if(eConfig->connType == TCP_CONNECTION)
    {
        close(eConfig->tcp_socket);
    }
    else if(eConfig->connType == UDP_CONNECTION)
    {
        close(eConfig->udp_socket);
    }
    return 0;
}

/**
 * @brief Sends a message over the specified Ethernet connection.
 * 
 * This function sends a message over the Ethernet connection specified in the provided EthernetConfig structure.
 * It determines the type of connection (TCP or UDP) and sends the message accordingly.
 * 
 * @param[in] eConfig Pointer to the EthernetConfig structure containing the connection configuration.
 * @param[in] message Pointer to the message buffer to be sent.
 * @param[in] message_len Length of the message to be sent.
 * @return Returns the number of bytes sent on success, or a negative error code on failure.
 */
int send_message(EthernetConfig *eConfig, const char *message, int message_len)
{
    int bytes_sent = -1;
    if (eConfig->connType == TCP_CONNECTION) 
    {
        bytes_sent = send(eConfig->tcp_socket, message, message_len, 0);
    } 
    else if (eConfig->connType == UDP_CONNECTION) 
    {
        bytes_sent = sendto(eConfig->udp_socket, message, message_len, 0,
                            (struct sockaddr *)&(eConfig->server_addr), sizeof(eConfig->server_addr));
    }
    return bytes_sent;
}

/**
 * @brief Receives a message over the specified Ethernet connection.
 * 
 * This function receives a message over the Ethernet connection specified in the provided EthernetConfig structure.
 * It determines the type of connection (TCP or UDP) and receives the message accordingly.
 * 
 * @param[in] eConfig Pointer to the EthernetConfig structure containing the connection configuration.
 * @param[out] buffer Pointer to the buffer where the received message will be stored.
 * @param[in] buffer_len Maximum length of the buffer.
 * @return Returns the number of bytes received on success, or a negative error code on failure.
 */
int receive_message(EthernetConfig *eConfig, char *buffer, int buffer_len)
{
    int bytes_received = -1;

    if (eConfig->connType == TCP_CONNECTION) 
    {
        bytes_received = recv(eConfig->tcp_socket, buffer, buffer_len, 0);
    } 
    else if (eConfig->connType == UDP_CONNECTION) 
    {
        socklen_t addr_len = sizeof(eConfig->client_addr);
        bytes_received = recvfrom(eConfig->udp_socket, buffer, buffer_len, 0,
                                  (struct sockaddr *)&(eConfig->client_addr), &addr_len);
    }
    return bytes_received;
}

