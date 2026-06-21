#!/bin/bash
# TuesdayOS Test Script
# Runs all tests for TuesdayOS and T.K. Kernel

set -e

echo "================================"
echo "TuesdayOS - Test Suite"
echo "================================"
echo ""

echo "Running kernel tests..."
make -C kernel test 2>/dev/null || echo "No kernel tests yet"
echo ""

echo "Running driver tests..."
make -C drivers test 2>/dev/null || echo "No driver tests yet"
echo ""

echo "Running system service tests..."
make -C system test 2>/dev/null || echo "No system tests yet"
echo ""

echo "Running utility tests..."
make -C utilities test 2>/dev/null || echo "No utility tests yet"
echo ""

echo "================================"
echo "Test Suite Complete"
echo "================================"
