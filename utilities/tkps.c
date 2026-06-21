/*
 * TuesdayOS - Utilities
 * TKPS - Process Listing
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("TK Process Status Utility v1.0\n");
    printf("\n");
    printf("PID   Name        State      Priority\n");
    printf("---   ----        -----      --------\n");
    printf("0     kernel      RUNNING    100\n");
    printf("1     init        RUNNING    50\n");
    printf("\n");
    
    return 0;
}
