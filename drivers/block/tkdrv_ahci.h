/*
 * TuesdayOS - Device Drivers
 * AHCI Block Driver
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TKDRV_AHCI_H
#define TKDRV_AHCI_H

#include <stdint.h>
#include <stddef.h>

/* AHCI constants */
#define TKDRV_AHCI_MAX_PORTS    32
#define TKDRV_AHCI_SECTOR_SIZE  512

/* AHCI HBA structure */
struct tkdrv_ahci_hba {
    uint32_t cap;           /* Capabilities */
    uint32_t ghc;           /* Global HBA control */
    uint32_t is;            /* Interrupt status */
    uint32_t pi;            /* Ports implemented */
};

/* AHCI port structure */
struct tkdrv_ahci_port {
    uint32_t clb;           /* Command list base address */
    uint32_t clbu;          /* Command list base address upper */
    uint32_t fb;            /* FIS base address */
    uint32_t fbu;           /* FIS base address upper */
};

/* Function declarations */
extern int tkdrv_ahci_init(void);
extern int tkdrv_ahci_read_sector(uint32_t port, uint64_t sector, void *buffer);
extern int tkdrv_ahci_write_sector(uint32_t port, uint64_t sector, const void *buffer);

#endif /* TKDRV_AHCI_H */
