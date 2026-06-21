# T.K. Kernel Boot Module

## Overview

The boot module handles the initial system startup and hardware initialization.

## Components

- `tuesk_boot.c` - Main boot routine
- `tuesk_boot.h` - Boot definitions
- `tuesk_init.asm` - Assembly initialization code
- `tuesk_multiboot.h` - Multiboot protocol support

## Responsibilities

1. Initialize CPU and core registers
2. Load kernel into memory
3. Set up stack and memory layout
4. Initialize bootloader interface
5. Jump to kernel main
