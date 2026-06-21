# TuesdayOS Device Drivers - Network Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding -fPIC

TARGETS := tkdrv_e1000.o tkdrv_rtl8139.o
SOURCES := tkdrv_e1000.c tkdrv_rtl8139.c
HEADERS := tkdrv_e1000.h tkdrv_rtl8139.h

all: $(TARGETS)

tkdrv_e1000.o: tkdrv_e1000.c tkdrv_e1000.h
	$(CC) $(CFLAGS) -c tkdrv_e1000.c -o tkdrv_e1000.o

tkdrv_rtl8139.o: tkdrv_rtl8139.c tkdrv_rtl8139.h
	$(CC) $(CFLAGS) -c tkdrv_rtl8139.c -o tkdrv_rtl8139.o

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
