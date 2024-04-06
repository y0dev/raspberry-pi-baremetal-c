/*
 * Filename: ethernet_util.h
 * Description: Header file containing ethernet utilities setup
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

#include "rasp_pi_config_file.h"

#include <netinet/in.h>

#ifndef _ETHERNET_UTIL_H_
#define _ETHERNET_UTIL_H_

/**
 * @brief Enum representing different types of network connections.
 */
typedef enum {
    TCP_CONNECTION, /**< TCP connection type */
    UDP_CONNECTION, /**< UDP connection type */
} ConnectionType;

/**
 * @brief Structure representing the configuration for Ethernet communication.
 * 
 * This structure holds the necessary parameters to configure Ethernet communication,
 * including the IP address, port number, connection type, socket descriptors,
 * client address, and server address.
 */
typedef struct {
    const char *ip_address; /**< IP address for communication */
    int port; /**< Port number for communication */
    ConnectionType connType; /**< Type of network connection (TCP or UDP) */
    int tcp_socket; /**< TCP socket descriptor */
    int udp_socket; /**< UDP socket descriptor */
    struct sockaddr_in client_addr; /**< Client address structure */
    struct sockaddr_in server_addr; /**< Server address structure */
} EthernetConfig;

int init_ethernet_connection(EthernetConfig *);
int close_ethernet_connection(EthernetConfig *);
int send_message(EthernetConfig *, const char *, int);
int receive_message(EthernetConfig *, char *, int);

#endif /* _ETHERNET_UTIL_H_ */