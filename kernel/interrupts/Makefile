# T.K. Kernel - Interrupts Module Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding

TARGET := interrupts.o
SOURCES := tuesk_interrupts.c
HEADERS := tuesk_interrupts.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
