# T.K. Kernel - Process Module Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding

TARGET := process.o
SOURCES := tuesk_process.c
HEADERS := tuesk_process.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
