# Network Interface Drivers

## Supported Drivers

- **Intel e1000** (`tkdrv_e1000.c`) - Gigabit Ethernet
- **Realtek RTL8139** (`tkdrv_rtl8139.c`) - Fast Ethernet
- **Virtio Net** (`tkdrv_virtio_net.c`) - Virtual network

## Driver Interface

All network drivers implement the standard TK network driver interface.
