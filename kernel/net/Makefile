# T.K. Kernel - Network Module Makefile

CC := gcc
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding

TARGET := net.o
SOURCES := tuesk_net.c
HEADERS := tuesk_net.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
