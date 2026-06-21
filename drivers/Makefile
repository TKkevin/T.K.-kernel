# TuesdayOS Device Drivers - Main Makefile

.PHONY: all clean

all:
	@echo "Building device drivers..."
	@$(MAKE) -C block
	@$(MAKE) -C char
	@$(MAKE) -C net
	@$(MAKE) -C input
	@echo "Device drivers build complete"

clean:
	@echo "Cleaning device drivers..."
	@$(MAKE) -C block clean
	@$(MAKE) -C char clean
	@$(MAKE) -C net clean
	@$(MAKE) -C input clean
	@echo "Device drivers clean complete"
