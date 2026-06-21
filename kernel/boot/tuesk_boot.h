/*
 * TuesdayOS - T.K. Kernel
 * Boot Module Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_BOOT_H
#define TUESK_BOOT_H

#include <stdint.h>
#include <stddef.h>

/* Boot constants */
#define TUESK_BOOT_MAGIC        0x2BADB002
#define TUESK_BOOT_VERSION      1
#define TUESK_BOOT_ALIGNMENT    (1 << 12)  /* 4KB alignment */

/* Boot information flags */
#define TUESK_BOOT_FLAG_MEMORY  0x001
#define TUESK_BOOT_FLAG_DEVICE  0x002
#define TUESK_BOOT_FLAG_CMDLINE 0x004

/* Boot structure */
struct tuesk_boot_info {
    uint32_t magic;
    uint32_t flags;
    uint32_t memory_lower;
    uint32_t memory_upper;
    uint32_t boot_device;
    uint32_t cmdline;
};

/* Function declarations */
extern void tuesk_boot_main(struct tuesk_boot_info *boot_info);
extern void tuesk_early_init(void);
extern void tuesk_halt(void);

#endif /* TUESK_BOOT_H */
