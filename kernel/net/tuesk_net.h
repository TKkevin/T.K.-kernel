/*
 * TuesdayOS - T.K. Kernel
 * Network Stack Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_NET_H
#define TUESK_NET_H

#include <stdint.h>
#include <stddef.h>

/* Socket types */
#define TUESK_SOCK_STREAM       1   /* TCP */
#define TUESK_SOCK_DGRAM        2   /* UDP */
#define TUESK_SOCK_RAW          3   /* Raw */

/* Socket address family */
#define TUESK_AF_INET           2

/* IP address structure */
struct tuesk_in_addr {
    uint32_t s_addr;
};

/* Socket address structure */
struct tuesk_sockaddr_in {
    uint8_t sin_family;
    uint16_t sin_port;
    struct tuesk_in_addr sin_addr;
};

/* Socket structure */
struct tuesk_socket {
    uint32_t id;
    uint32_t type;
    uint32_t state;
    struct tuesk_sockaddr_in local_addr;
    struct tuesk_sockaddr_in remote_addr;
};

/* Function declarations */
extern int tuesk_net_init(void);
extern struct tuesk_socket* tuesk_socket_create(uint32_t family, uint32_t type);
extern int tuesk_socket_bind(struct tuesk_socket *sock, struct tuesk_sockaddr_in *addr);
extern int tuesk_socket_listen(struct tuesk_socket *sock, uint32_t backlog);
extern struct tuesk_socket* tuesk_socket_accept(struct tuesk_socket *sock);

#endif /* TUESK_NET_H */
