/*
 * TuesdayOS - System Services
 * Device Manager Service
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TKSYS_DEVMGR_H
#define TKSYS_DEVMGR_H

#include <stdint.h>
#include <stddef.h>

/* Device types */
#define TKSYS_DEVTYPE_BLOCK     1
#define TKSYS_DEVTYPE_CHAR      2
#define TKSYS_DEVTYPE_NET       3

/* Device structure */
struct tksys_device {
    uint32_t id;
    uint32_t type;
    char name[256];
    void *driver;
};

/* Function declarations */
extern int tksys_devmgr_main(void);
extern int tksys_register_device(struct tksys_device *dev);
extern struct tksys_device* tksys_get_device(const char *name);

#endif /* TKSYS_DEVMGR_H */
