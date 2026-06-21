# Block Device Drivers

## Supported Drivers

- **AHCI** (`tkdrv_ahci.c`) - Serial ATA controller
- **IDE** (`tkdrv_ide.c`) - IDE/PATA controller
- **USB** (`tkdrv_usb_storage.c`) - USB mass storage

## Driver Interface

All block drivers implement the standard TK block device interface.
