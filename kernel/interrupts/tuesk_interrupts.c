/*
 * TuesdayOS - T.K. Kernel
 * Interrupt & Exception Handler Implementation
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include "tuesk_interrupts.h"

/* IDT */
static struct tuesk_idt_entry tuesk_idt[TUESK_IDT_SIZE];
static tuesk_irq_handler_t tuesk_handlers[TUESK_IRQ_COUNT];

/* Initialize interrupts */
int tuesk_interrupts_init(void) {
    /* TODO: Initialize IDT entries */
    /* TODO: Load IDT register */
    return 0;
}

/* Register interrupt handler */
int tuesk_register_handler(uint32_t irq, tuesk_irq_handler_t handler) {
    if (irq >= TUESK_IRQ_COUNT) {
        return -1;
    }
    
    tuesk_handlers[irq] = handler;
    return 0;
}

/* Enable interrupts */
void tuesk_enable_interrupts(void) {
    __asm__ volatile("sti");
}

/* Disable interrupts */
void tuesk_disable_interrupts(void) {
    __asm__ volatile("cli");
}
