# T.K. Kernel - File System Module Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding

TARGET := fs.o
SOURCES := tuesk_fs.c
HEADERS := tuesk_fs.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
