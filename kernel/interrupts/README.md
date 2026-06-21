# T.K. Kernel Interrupt & Exception Handler Module

## Overview

Handles hardware interrupts and software exceptions.

## Key Components

- `tuesk_idt.c` - Interrupt descriptor table
- `tuesk_irq.c` - IRQ handling
- `tuesk_exception.c` - Exception handling
- `tuesk_irq_handler.asm` - Assembly interrupt handlers

## Features

- Interrupt routing
- Exception handling
- IRQ prioritization
- Signal delivery
