/*
 * TuesdayOS - T.K. Kernel
 * Process Management Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_PROCESS_H
#define TUESK_PROCESS_H

#include <stdint.h>
#include <stddef.h>

/* Process states */
#define TUESK_PROC_NEW          0
#define TUESK_PROC_READY        1
#define TUESK_PROC_RUNNING      2
#define TUESK_PROC_BLOCKED      3
#define TUESK_PROC_TERMINATED   4

/* Process flags */
#define TUESK_PROC_FLAG_KERNEL  0x001
#define TUESK_PROC_FLAG_SYSTEM  0x002

/* Process ID type */
typedef uint32_t tuesk_pid_t;

/* Process structure */
struct tuesk_process {
    tuesk_pid_t pid;
    uint32_t state;
    uint32_t flags;
    void *context;
    uint32_t priority;
};

/* Function declarations */
extern int tuesk_process_init(void);
extern tuesk_pid_t tuesk_process_create(void (*entry)(void));
extern int tuesk_process_destroy(tuesk_pid_t pid);
extern struct tuesk_process* tuesk_process_get_current(void);

#endif /* TUESK_PROCESS_H */
