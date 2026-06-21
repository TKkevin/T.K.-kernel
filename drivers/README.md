# TuesdayOS Device Drivers

This directory contains device drivers for TuesdayOS and the T.K. Kernel.

## Subdirectories

- **block/** - Block device drivers (disk, USB)
- **char/** - Character device drivers (terminal, input)
- **net/** - Network interface drivers
- **input/** - Input device drivers (keyboard, mouse)

## Driver Naming Convention

- Prefix: `tkdrv_`
- Example: `tkdrv_ahci.c` for AHCI disk driver

## Building Drivers

```bash
cd drivers
make all
```
