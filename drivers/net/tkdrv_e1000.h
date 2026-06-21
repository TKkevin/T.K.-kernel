/*
 * TuesdayOS - Device Drivers
 * Intel e1000 Network Driver
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TKDRV_E1000_H
#define TKDRV_E1000_H

#include <stdint.h>
#include <stddef.h>

/* e1000 constants */
#define TKDRV_E1000_TX_DESC_COUNT  256
#define TKDRV_E1000_RX_DESC_COUNT  256
#define TKDRV_E1000_MTU            1500

/* TX Descriptor */
struct tkdrv_e1000_tx_desc {
    uint64_t buffer_addr;
    uint16_t length;
    uint8_t cso;
    uint8_t cmd;
    uint8_t status;
    uint8_t css;
    uint16_t special;
};

/* RX Descriptor */
struct tkdrv_e1000_rx_desc {
    uint64_t buffer_addr;
    uint16_t length;
    uint16_t checksum;
    uint8_t status;
    uint8_t errors;
    uint16_t vlan;
};

/* Function declarations */
extern int tkdrv_e1000_init(void);
extern int tkdrv_e1000_send_packet(const void *packet, uint16_t length);
extern int tkdrv_e1000_receive_packet(void *packet, uint16_t *length);

#endif /* TKDRV_E1000_H */
