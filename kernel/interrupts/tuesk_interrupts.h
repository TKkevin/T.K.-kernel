/*
 * TuesdayOS - T.K. Kernel
 * Interrupt & Exception Handler Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_INTERRUPTS_H
#define TUESK_INTERRUPTS_H

#include <stdint.h>

/* Interrupt constants */
#define TUESK_IDT_SIZE          256
#define TUESK_IRQ_BASE          32
#define TUESK_IRQ_COUNT         16

/* Interrupt types */
#define TUESK_INT_TASK_GATE     0x5
#define TUESK_INT_INT_GATE      0x6
#define TUESK_INT_TRAP_GATE     0x7

/* IDT Entry */
struct tuesk_idt_entry {
    uint16_t offset_low;
    uint16_t selector;
    uint8_t zero;
    uint8_t flags;
    uint16_t offset_high;
} __attribute__((packed));

/* Interrupt handler type */
typedef void (*tuesk_irq_handler_t)(void);

/* Function declarations */
extern int tuesk_interrupts_init(void);
extern int tuesk_register_handler(uint32_t irq, tuesk_irq_handler_t handler);
extern void tuesk_enable_interrupts(void);
extern void tuesk_disable_interrupts(void);

#endif /* TUESK_INTERRUPTS_H */
