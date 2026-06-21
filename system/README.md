# TuesdayOS System Services

This directory contains system-level services and daemons.

## Services

- **init** (`tksys_init.c`) - System initialization
- **sched** (`tksys_scheduler.c`) - Task scheduling daemon
- **devmgr** (`tksys_devmgr.c`) - Device manager
- **netd** (`tksys_netd.c`) - Network daemon

## Service Naming Convention

- Prefix: `tksys_`
- Extension: `.c` for C implementation

## Building System Services

```bash
cd system
make all
```
