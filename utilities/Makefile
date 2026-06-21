# TuesdayOS Utilities - Makefile

CC := gcc
CFLAGS := -Wall -Wextra

TARGETS := tkshell tkls tkcat tkps
SOURCES := tkshell.c tkls.c tkcat.c tkps.c

all: $(TARGETS)

tkshell: tkshell.c
	$(CC) $(CFLAGS) tkshell.c -o tkshell

tkls: tkls.c
	$(CC) $(CFLAGS) tkls.c -o tkls

tkcat: tkcat.c
	$(CC) $(CFLAGS) tkcat.c -o tkcat

tkps: tkps.c
	$(CC) $(CFLAGS) tkps.c -o tkps

clean:
	rm -f $(TARGETS) *.o

install: $(TARGETS)
	@echo "Installing utilities..."
	cp $(TARGETS) /usr/local/bin/

.PHONY: all clean install
