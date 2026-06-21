/*
 * TuesdayOS - T.K. Kernel
 * File System Header
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 */

#ifndef TUESK_FS_H
#define TUESK_FS_H

#include <stdint.h>
#include <stddef.h>

/* File types */
#define TUESK_IFMT              0170000
#define TUESK_IFREG             0100000
#define TUESK_IFDIR             0040000
#define TUESK_IFCHR             0020000
#define TUESK_IFBLK             0060000

/* File permissions */
#define TUESK_IRUSR             0400
#define TUESK_IWUSR             0200
#define TUESK_IXUSR             0100

/* Inode structure */
struct tuesk_inode {
    uint32_t ino;
    uint32_t mode;
    uint32_t size;
    uint32_t blocks;
};

/* File structure */
struct tuesk_file {
    uint32_t inode;
    uint32_t offset;
    uint32_t flags;
};

/* Function declarations */
extern int tuesk_fs_init(void);
extern struct tuesk_file* tuesk_fs_open(const char *path);
extern int tuesk_fs_close(struct tuesk_file *file);
extern int tuesk_fs_read(struct tuesk_file *file, void *buf, size_t count);
extern int tuesk_fs_write(struct tuesk_file *file, const void *buf, size_t count);

#endif /* TUESK_FS_H */
