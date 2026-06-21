# TuesdayOS Boot & Setup Graphics

## Boot Screen

| File | Description | Format | Size |
|---|---|---|---|
| boot_screen.bmp | TuesdayOS boot splash screen | BMP | 640x480 |
| boot_progress.bmp | Boot progress bar graphic | BMP | variable |

## Setup Installation Graphics

| File | Description | Format | Size |
|---|---|---|---|
| setup_background.bmp | Setup installation background | BMP | 800x600 |
| setup_header.bmp | Setup header banner | BMP | variable |
| setup_welcome.bmp | Setup welcome screen graphic | BMP | variable |
| setup_complete.bmp | Setup completion graphic | BMP | variable |

## OOBE (Out-of-Box Experience)

| File | Description | Format | Size |
|---|---|---|---|
| oobe_welcome.bmp | OOBE welcome screen | BMP | variable |
| oobe_done.bmp | OOBE completion screen | BMP | variable |

## Shutdown

| File | Description | Format | Size |
|---|---|---|---|
| shutdown.bmp | Shutdown screen graphic | BMP | variable |

## Design Guidelines

1. Boot screen must work in VGA mode (640x480, 16 colors minimum)
2. Setup graphics should use TuesdayOS brand colors
3. All BMP files should be uncompressed for bootloader compatibility
4. Keep file sizes minimal for fast loading during boot/setup

## Status

**READY FOR BOOT/SETUP GRAPHICS UPDATES** — Place graphic files in this directory.
