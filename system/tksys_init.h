/*
 * TuesdayOS - System Services
 * Init Service
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TKSYS_INIT_H
#define TKSYS_INIT_H

#include <stdint.h>

/* Runlevel constants */
#define TKSYS_RUNLEVEL_HALT     0
#define TKSYS_RUNLEVEL_SINGLE   1
#define TKSYS_RUNLEVEL_MULTI    3
#define TKSYS_RUNLEVEL_GRAPHICS 5
#define TKSYS_RUNLEVEL_REBOOT   6

/* Function declarations */
extern int tksys_init_main(void);
extern int tksys_set_runlevel(uint32_t level);
extern uint32_t tksys_get_runlevel(void);

#endif /* TKSYS_INIT_H */
