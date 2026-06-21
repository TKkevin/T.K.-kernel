# Build configuration for TuesdayOS and T.K. Kernel

# Project information
PROJECT_NAME := TuesdayOS
KERNEL_NAME := T.K. Kernel
VERSION := 1.0.0
BUILD_DATE := $(shell date)

# Compiler settings
CC := gcc
CXX := g++
ASM := nasm
LD := ld
AR := ar

# Compiler flags
CFLAGS := -Wall -Wextra -nostdinc -ffreestanding -Werror
CXXFLAGS := -Wall -Wextra -nostdinc -ffreestanding -Werror
ASMFLAGS := -f elf
LDFLAGS := -nostdlib -static
ARFLAGS := rcs

# Build directories
BUILD_DIR := build
OBJ_DIR := $(BUILD_DIR)/obj
BIN_DIR := $(BUILD_DIR)/bin

# Optimization flags
OPT_FLAGS := -O2

# Debug flags
DEBUG_FLAGS := -g -DDEBUG

# Features
ENABLE_SMP := no
ENABLE_DEBUGGING := yes
ENABLE_LOGGING := yes

# Paths
KERNEL_PATH := kernel
DRIVER_PATH := drivers
SYSTEM_PATH := system
UTIL_PATH := utilities
DOC_PATH := documentation
