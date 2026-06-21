/*
 * TuesdayOS - T.K. Kernel
 * IPC (Inter-Process Communication) Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_IPC_H
#define TUESK_IPC_H

#include <stdint.h>
#include <stddef.h>

/* IPC types */
#define TUESK_IPC_PIPE          1
#define TUESK_IPC_MSGQUEUE      2
#define TUESK_IPC_SHAREDMEM     3
#define TUESK_IPC_SEMAPHORE     4

/* Pipe structure */
struct tuesk_pipe {
    uint32_t id;
    uint8_t *buffer;
    size_t size;
    size_t read_pos;
    size_t write_pos;
};

/* Function declarations */
extern int tuesk_ipc_init(void);
extern struct tuesk_pipe* tuesk_pipe_create(size_t size);
extern int tuesk_pipe_write(struct tuesk_pipe *pipe, const void *data, size_t len);
extern int tuesk_pipe_read(struct tuesk_pipe *pipe, void *data, size_t len);
extern int tuesk_pipe_destroy(struct tuesk_pipe *pipe);

#endif /* TUESK_IPC_H */
