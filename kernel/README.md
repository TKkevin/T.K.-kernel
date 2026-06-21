# T.K. Kernel - Core Implementation

This directory contains the core kernel implementation for TuesdayOS.

## Subdirectories

- **boot/** - Bootloader and early initialization
- **process/** - Process and thread management
- **memory/** - Memory management subsystem
- **interrupts/** - Interrupt and exception handling
- **fs/** - File system implementation
- **ipc/** - Inter-process communication
- **net/** - Network stack

## Building the Kernel

```bash
cd kernel
make all
```

## Kernel Configuration

Edit `config.mk` to customize kernel features.