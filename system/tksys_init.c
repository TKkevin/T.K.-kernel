/*
 * TuesdayOS - System Services
 * Init Service Implementation
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include "tksys_init.h"

/* Current runlevel */
static uint32_t tksys_current_runlevel = TKSYS_RUNLEVEL_MULTI;

/* Init main */
int tksys_init_main(void) {
    /* TODO: Initialize file system */
    /* TODO: Mount root filesystem */
    /* TODO: Start essential services */
    /* TODO: Execute init scripts */
    /* TODO: Start shell */
    
    while (1) {
        /* Main init loop */
    }
    
    return 0;
}

/* Set runlevel */
int tksys_set_runlevel(uint32_t level) {
    if (level > TKSYS_RUNLEVEL_REBOOT) {
        return -1;
    }
    
    tksys_current_runlevel = level;
    
    switch (level) {
        case TKSYS_RUNLEVEL_HALT:
            /* TODO: Halt system */
            break;
        case TKSYS_RUNLEVEL_REBOOT:
            /* TODO: Reboot system */
            break;
        default:
            break;
    }
    
    return 0;
}

/* Get runlevel */
uint32_t tksys_get_runlevel(void) {
    return tksys_current_runlevel;
}
