/*
 * TuesdayOS - System Services
 * Device Manager Service Implementation
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include "tksys_devmgr.h"

/* Device table */
static struct tksys_device tksys_devices[256];
static uint32_t tksys_device_count = 0;

/* Device manager main */
int tksys_devmgr_main(void) {
    /* TODO: Scan PCI bus */
    /* TODO: Load drivers */
    /* TODO: Initialize devices */
    /* TODO: Create device nodes */
    
    while (1) {
        /* Device management loop */
    }
    
    return 0;
}

/* Register device */
int tksys_register_device(struct tksys_device *dev) {
    if (dev == NULL || tksys_device_count >= 256) {
        return -1;
    }
    
    struct tksys_device *new_dev = &tksys_devices[tksys_device_count++];
    new_dev->id = tksys_device_count - 1;
    new_dev->type = dev->type;
    new_dev->driver = dev->driver;
    
    return new_dev->id;
}

/* Get device */
struct tksys_device* tksys_get_device(const char *name) {
    if (name == NULL) {
        return NULL;
    }
    
    for (uint32_t i = 0; i < tksys_device_count; i++) {
        /* TODO: Compare device names */
    }
    
    return NULL;
}
