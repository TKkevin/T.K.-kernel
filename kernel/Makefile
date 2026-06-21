# T.K. Kernel - Main Makefile

.PHONY: all clean

all:
	@echo "Building T.K. Kernel modules..."
	@$(MAKE) -C boot
	@$(MAKE) -C process
	@$(MAKE) -C memory
	@$(MAKE) -C interrupts
	@$(MAKE) -C fs
	@$(MAKE) -C ipc
	@$(MAKE) -C net
	@echo "Kernel build complete"

clean:
	@echo "Cleaning kernel modules..."
	@$(MAKE) -C boot clean
	@$(MAKE) -C process clean
	@$(MAKE) -C memory clean
	@$(MAKE) -C interrupts clean
	@$(MAKE) -C fs clean
	@$(MAKE) -C ipc clean
	@$(MAKE) -C net clean
	@echo "Kernel clean complete"
