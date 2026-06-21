/*
 * TuesdayOS - T.K. Kernel
 * Memory Management Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_MEMORY_H
#define TUESK_MEMORY_H

#include <stdint.h>
#include <stddef.h>

/* Memory constants */
#define TUESK_PAGE_SIZE         4096
#define TUESK_KERNEL_BASE       0xC0000000
#define TUESK_USER_BASE         0x08048000

/* Memory flags */
#define TUESK_MEM_WRITE         0x001
#define TUESK_MEM_EXEC          0x002
#define TUESK_MEM_USER          0x004

/* Function declarations */
extern int tuesk_memory_init(void);
extern void* tuesk_malloc(size_t size);
extern void tuesk_free(void *ptr);
extern int tuesk_vm_map(uint32_t vaddr, uint32_t paddr, uint32_t flags);
extern int tuesk_vm_unmap(uint32_t vaddr);

#endif /* TUESK_MEMORY_H */
