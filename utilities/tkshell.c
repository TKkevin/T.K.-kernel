/*
 * TuesdayOS - Utilities
 * TK Shell - Command Shell
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TKSHELL_BUFFER_SIZE 1024
#define TKSHELL_PROMPT "Tuesday# "

int main(void) {
    char buffer[TKSHELL_BUFFER_SIZE];
    
    printf("TuesdayOS Shell v1.0\n");
    printf("Built with T.K. Kernel\n\n");
    
    while (1) {
        printf("%s", TKSHELL_PROMPT);
        fflush(stdout);
        
        if (fgets(buffer, TKSHELL_BUFFER_SIZE, stdin) == NULL) {
            break;
        }
        
        /* Remove newline */
        buffer[strcspn(buffer, "\n")] = '\0';
        
        if (strlen(buffer) == 0) {
            continue;
        }
        
        /* Handle basic commands */
        if (strcmp(buffer, "exit") == 0 || strcmp(buffer, "quit") == 0) {
            break;
        } else if (strcmp(buffer, "help") == 0) {
            printf("Available commands:\n");
            printf("  help    - Show this help\n");
            printf("  ls      - List files\n");
            printf("  ps      - List processes\n");
            printf("  exit    - Exit shell\n");
        } else if (strcmp(buffer, "uname") == 0) {
            printf("TuesdayOS 1.0 (T.K. Kernel)\n");
        } else {
            printf("Command not found: %s\n", buffer);
        }
    }
    
    printf("Goodbye!\n");
    return 0;
}
