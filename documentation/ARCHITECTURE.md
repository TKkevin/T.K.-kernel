# TuesdayOS Architecture Document

## System Overview

TuesdayOS is a modular operating system built on the T.K. Kernel, designed for modern computing with emphasis on stability, security, and performance.

## Layer Model

```
┌────────────────────────────────────────────────┐
│   Applications & User Utilities  │
├────────────────────────────────────────────────┤
│   System Services & Daemons     │
├────────────────────────────────────────────────┤
│   T.K. Kernel Core              │
│  ┌────────────────────────────────────────────┐
│  │ - Process Management        │
│  │ - Memory Management         │
│  │ - File System              │
│  │ - IPC                      │
│  │ - Network Stack            │
│  │ - Interrupts/Exceptions    │
├────────────────────────────────────────────────┤
│   Device Drivers                │
├────────────────────────────────────────────────┤
│   Hardware Abstraction Layer     │
├────────────────────────────────────────────────┤
│   Hardware (CPU, Memory, I/O)    │
└────────────────────────────────────────────────┘
```

## Subsystems

### 1. Process Management
- Multi-tasking and multi-threading support
- Preemptive scheduling
- Process isolation
- Signal handling

### 2. Memory Management
- Virtual memory with paging
- Demand paging
- Memory protection
- Kernel and user space separation

### 3. File System
- Hierarchical directory structure
- File permissions
- Block device abstraction
- Virtual file system layer

### 4. IPC (Inter-Process Communication)
- Pipes and named pipes
- Message queues
- Shared memory
- Semaphores

### 5. Network Stack
- TCP/IP protocol family
- BSD socket interface
- Network driver abstraction
- Packet routing

### 6. Interrupt & Exception Handling
- Hardware interrupt processing
- Software exception handling
- Signal delivery
- Real-time event handling

## Design Principles

1. **Modularity** - Clear separation of concerns
2. **Extensibility** - Easy to add new drivers and services
3. **Stability** - Robust error handling
4. **Security** - Process isolation and access control
5. **Performance** - Efficient resource utilization

## Build System

TuesdayOS uses a hierarchical Makefile system:
- Root Makefile coordinates the build
- Each subsystem has its own Makefile
- Modular compilation support
- Configuration-based feature selection

## Coding Standards

### Naming Conventions
- Functions: `tuesk_module_function()`
- Structures: `struct tuesk_module_type`
- Macros: `TUESK_MODULE_CONSTANT`
- Global variables: `tk_module_var`

### File Organization
- Header files (.h) for interfaces
- Implementation files (.c) for code
- Assembly files (.asm, .s) for low-level code

## Version Information

**TuesdayOS v1.0**
**T.K. Kernel v1.0**

---

*For detailed component documentation, see individual module READMEs.*