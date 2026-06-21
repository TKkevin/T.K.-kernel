/*
 * TuesdayOS - T.K. Kernel
 * Process Management Implementation
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include "tuesk_process.h"

/* Global process table */
static struct tuesk_process tuesk_process_table[256];
static uint32_t tuesk_process_count = 0;
static struct tuesk_process *tuesk_current_process = NULL;

/* Initialize process management */
int tuesk_process_init(void) {
    tuesk_process_count = 0;
    return 0;
}

/* Create new process */
tuesk_pid_t tuesk_process_create(void (*entry)(void)) {
    if (tuesk_process_count >= 256) {
        return -1; /* Process table full */
    }
    
    struct tuesk_process *proc = &tuesk_process_table[tuesk_process_count];
    proc->pid = tuesk_process_count++;
    proc->state = TUESK_PROC_NEW;
    proc->priority = 50;
    proc->context = NULL;
    
    return proc->pid;
}

/* Destroy process */
int tuesk_process_destroy(tuesk_pid_t pid) {
    if (pid >= tuesk_process_count) {
        return -1;
    }
    
    struct tuesk_process *proc = &tuesk_process_table[pid];
    proc->state = TUESK_PROC_TERMINATED;
    return 0;
}

/* Get current process */
struct tuesk_process* tuesk_process_get_current(void) {
    return tuesk_current_process;
}
