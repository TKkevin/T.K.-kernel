# T.K. Kernel - Boot Module Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding
ASM := nasm
ASMFLAGS := -f elf

TARGET := boot.o
SOURCES := tuesk_boot.c
HEADERS := tuesk_boot.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
