# TuesdayOS System Services - Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding

TARGETS := tksys_init.o tksys_devmgr.o tksys_scheduler.o
SOURCES := tksys_init.c tksys_devmgr.c tksys_scheduler.c
HEADERS := tksys_init.h tksys_devmgr.h tksys_scheduler.h

all: $(TARGETS)

tksys_init.o: tksys_init.c tksys_init.h
	$(CC) $(CFLAGS) -c tksys_init.c -o tksys_init.o

tksys_devmgr.o: tksys_devmgr.c tksys_devmgr.h
	$(CC) $(CFLAGS) -c tksys_devmgr.c -o tksys_devmgr.o

tksys_scheduler.o: tksys_scheduler.c tksys_scheduler.h
	$(CC) $(CFLAGS) -c tksys_scheduler.c -o tksys_scheduler.o

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
