/*
 * TuesdayOS - T.K. Kernel
 * Network Stack Implementation
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include "tuesk_net.h"

/* Socket table */
static struct tuesk_socket tuesk_sockets[256];
static uint32_t tuesk_socket_count = 0;

/* Initialize network */
int tuesk_net_init(void) {
    tuesk_socket_count = 0;
    return 0;
}

/* Create socket */
struct tuesk_socket* tuesk_socket_create(uint32_t family, uint32_t type) {
    if (tuesk_socket_count >= 256) {
        return NULL; /* Socket table full */
    }
    
    struct tuesk_socket *sock = &tuesk_sockets[tuesk_socket_count++];
    sock->id = tuesk_socket_count - 1;
    sock->type = type;
    sock->state = 0;
    return sock;
}

/* Bind socket */
int tuesk_socket_bind(struct tuesk_socket *sock, struct tuesk_sockaddr_in *addr) {
    if (sock == NULL || addr == NULL) {
        return -1;
    }
    
    sock->local_addr = *addr;
    return 0;
}

/* Listen on socket */
int tuesk_socket_listen(struct tuesk_socket *sock, uint32_t backlog) {
    if (sock == NULL) {
        return -1;
    }
    
    /* TODO: Implement listening */
    return 0;
}

/* Accept connection */
struct tuesk_socket* tuesk_socket_accept(struct tuesk_socket *sock) {
    if (sock == NULL) {
        return NULL;
    }
    
    /* TODO: Implement accept */
    return NULL;
}
