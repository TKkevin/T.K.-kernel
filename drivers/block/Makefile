# TuesdayOS Device Drivers - Block Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding -fPIC

TARGETS := tkdrv_ahci.o tkdrv_ide.o
SOURCES := tkdrv_ahci.c tkdrv_ide.c
HEADERS := tkdrv_ahci.h tkdrv_ide.h

all: $(TARGETS)

tkdrv_ahci.o: tkdrv_ahci.c tkdrv_ahci.h
	$(CC) $(CFLAGS) -c tkdrv_ahci.c -o tkdrv_ahci.o

tkdrv_ide.o: tkdrv_ide.c tkdrv_ide.h
	$(CC) $(CFLAGS) -c tkdrv_ide.c -o tkdrv_ide.o

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
