# TuesdayOS - T.K. Kernel Build System
# Main Makefile

.PHONY: all clean kernel drivers system utilities documentation test help

# Color output
COLOR_RESET := \033[0m
COLOR_BOLD := \033[1m
COLOR_GREEN := \033[32m
COLOR_YELLOW := \033[33m

# Default target
all: kernel drivers system utilities documentation

# Build targets
kernel:
	@echo "$(COLOR_GREEN)Building T.K. Kernel...$(COLOR_RESET)"
	@$(MAKE) -C kernel

drivers:
	@echo "$(COLOR_GREEN)Building Device Drivers...$(COLOR_RESET)"
	@$(MAKE) -C drivers

system:
	@echo "$(COLOR_GREEN)Building System Services...$(COLOR_RESET)"
	@$(MAKE) -C system

utilities:
	@echo "$(COLOR_GREEN)Building Utilities...$(COLOR_RESET)"
	@$(MAKE) -C utilities

documentation:
	@echo "$(COLOR_GREEN)Building Documentation...$(COLOR_RESET)"
	@$(MAKE) -C documentation

# Clean build artifacts
clean:
	@echo "$(COLOR_YELLOW)Cleaning build artifacts...$(COLOR_RESET)"
	@$(MAKE) -C kernel clean
	@$(MAKE) -C drivers clean
	@$(MAKE) -C system clean
	@$(MAKE) -C utilities clean
	@$(MAKE) -C documentation clean
	@rm -rf build/

# Run tests
test:
	@echo "$(COLOR_YELLOW)Running tests...$(COLOR_RESET)"
	@$(MAKE) -C kernel test

# Help target
help:
	@echo "$(COLOR_BOLD)TuesdayOS Build System$(COLOR_RESET)"
	@echo ""
	@echo "Targets:"
	@echo "  all              - Build everything (default)"
	@echo "  kernel           - Build T.K. Kernel"
	@echo "  drivers          - Build device drivers"
	@echo "  system           - Build system services"
	@echo "  utilities        - Build utilities"
	@echo "  documentation    - Build documentation"
	@echo "  clean            - Remove build artifacts"
	@echo "  test             - Run tests"
	@echo "  help             - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make kernel          # Build just the kernel"
	@echo "  make clean           # Clean all build artifacts"
	@echo "  make all test        # Build everything and run tests"