/*
 * TuesdayOS - Utilities
 * TKCAT - Display File Contents
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: tkcat <file>\n");
        return 1;
    }
    
    printf("TK Cat Utility v1.0\n");
    printf("\n");
    printf("File: %s\n", argv[1]);
    printf("\n");
    
    return 0;
}
