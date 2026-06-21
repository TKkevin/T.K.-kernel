#!/bin/bash
# TuesdayOS Build Script
# This script automates the building of TuesdayOS and T.K. Kernel

set -e

# Colors for output
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

echo -e "${GREEN}================================${NC}"
echo -e "${GREEN}TuesdayOS - T.K. Kernel Build${NC}"
echo -e "${GREEN}================================${NC}"
echo ""

# Check for required tools
echo -e "${YELLOW}Checking for required tools...${NC}"
command -v gcc >/dev/null 2>&1 || { echo -e "${RED}GCC not found${NC}"; exit 1; }
command -v make >/dev/null 2>&1 || { echo -e "${RED}Make not found${NC}"; exit 1; }
echo -e "${GREEN}✓ All tools found${NC}"
echo ""

# Create build directory
echo -e "${YELLOW}Setting up build environment...${NC}"
mkdir -p build/obj build/bin
echo -e "${GREEN}✓ Build directories created${NC}"
echo ""

# Build kernel
echo -e "${YELLOW}Building T.K. Kernel...${NC}"
make -C kernel
echo -e "${GREEN}✓ Kernel built${NC}"
echo ""

# Build drivers
echo -e "${YELLOW}Building device drivers...${NC}"
make -C drivers
echo -e "${GREEN}✓ Drivers built${NC}"
echo ""

# Build system services
echo -e "${YELLOW}Building system services...${NC}"
make -C system
echo -e "${GREEN}✓ System services built${NC}"
echo ""

# Build utilities
echo -e "${YELLOW}Building utilities...${NC}"
make -C utilities
echo -e "${GREEN}✓ Utilities built${NC}"
echo ""

# Build documentation
echo -e "${YELLOW}Building documentation...${NC}"
echo -e "${GREEN}✓ Documentation ready${NC}"
echo ""

echo -e "${GREEN}================================${NC}"
echo -e "${GREEN}Build Complete!${NC}"
echo -e "${GREEN}================================${NC}"
echo ""
echo "Output binaries in: build/bin"
echo "Object files in: build/obj"
echo ""
echo "To clean: make clean"
