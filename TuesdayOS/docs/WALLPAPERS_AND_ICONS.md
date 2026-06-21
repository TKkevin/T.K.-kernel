# TuesdayOS Wallpaper & Icon Update Guide

## Status: 🎨 READY FOR UPDATES

The TuesdayOS rebranding and restructuring is complete. This document describes
what wallpapers and icons need to be created or updated for the final TuesdayOS look.

---

## 1. Wallpapers

### Location
`TuesdayOS/EndUser/display/wallpapers/`

### Required Wallpapers

| Filename | Description | Resolution | Format |
|---|---|---|---|
| tuesdayos_default.bmp | Default TuesdayOS desktop wallpaper | 1920x1080 | BMP |
| tuesdayos_default.jpg | Default TuesdayOS desktop wallpaper | 1920x1080 | JPG |
| tuesdayos_bliss.bmp | TuesdayOS "Bliss" (inspired default landscape) | 1920x1080 | BMP |
| tuesdayos_dark.bmp | Dark theme wallpaper | 1920x1080 | BMP |
| tuesdayos_light.bmp | Light theme wallpaper | 1920x1080 | BMP |
| tuesdayos_server.bmp | TuesdayOS Server edition wallpaper | 1920x1080 | BMP |
| tuesdayos_4k.bmp | 4K resolution default wallpaper | 3840x2160 | BMP |
| tuesdayos_4k.jpg | 4K resolution default wallpaper | 3840x2160 | JPG |

### Legacy Wallpaper Files to Replace

These are the original wallpaper files from the XPSP1 source that need
TuesdayOS replacements:

- `winlogo10x7.bmp` → `tuesdayos_logo_10x7.bmp` (setup billboards)
- `winlogo6x4.bmp` → `tuesdayos_logo_6x4.bmp` (setup billboards)
- `winlogo8x6.bmp` → `tuesdayos_logo_8x6.bmp` (setup billboards)
- `winlogo.gif` → `tuesdayos_logo.gif` (OOBE setup)
- Setup branding BMPs in `winbrand/res/`
- Logon screen bitmaps in `winbrand/res/logon_scr/`
- About box bitmaps in `winbrand/res/shell32_dll/`

### Design Guidelines

1. **Color Palette**: Use TuesdayOS brand colors
   - Primary: #4A90D9 (Tuesday Blue)
   - Secondary: #2ECC71 (Tuesday Green)
   - Accent: #F39C12 (Tuesday Gold)
   - Dark: #2C3E50 (Tuesday Dark)
   - Light: #ECF0F1 (Tuesday Light)

2. **Style**: Modern, clean, professional
   - Gradient backgrounds
   - Subtle geometric patterns
   - TuesdayOS logo prominent but not overwhelming

3. **Compatibility**: Must work on 4-bit, 8-bit, 16-bit, and 32-bit color modes
   - Provide variants for each color depth
   - 4-bit versions for minimal display modes

---

## 2. Icons

### Location
`TuesdayOS/EndUser/shell/icons/`
`TuesdayOS/Shell/tuesplorer/icons/`
`TuesdayOS/Shell/tueshell32/icons/`

### Required Icon Sets

#### System Icons (ICO format, multiple sizes: 16x16, 32x32, 48x48, 256x256)

| Category | Icon Files | Description |
|---|---|---|
| **OS Branding** | tuesdayos.ico, tuesk.ico | TuesdayOS logo, T.K. Kernel icon |
| **Desktop** | my_tuesday.ico, tuesplorer.ico | My Tuesday, Tuesplorer |
| **Drives** | drive_hd.ico, drive_cd.ico, drive_net.ico | Storage device icons |
| **Folders** | folder.ico, folder_open.ico | Folder icons |
| **File Types** | file_txt.ico, file_doc.ico, file_exe.ico | File type icons |
| **Control Panel** | settings_panel.ico | Settings Panel icon |
| **Network** | network.ico, internet.ico | Network/Internet icons |
| **Hardware** | hardware_mgr.ico | Hardware Manager icon |
| **Media** | media_player.ico, audio.ico, video.ico | Media icons |
| **Security** | guard.ico, firewall.ico, lock.ico | Security icons |
| **System** | restore.ico, update.ico, config.ico | System icons |
| **Misc** | recycle_full.ico, recycle_empty.ico | Recovery Bin icons |

#### Application Icons (replacing specific Windows app icons)

| Original | TuesdayOS Icon | Notes |
|---|---|---|
| notepad.exe → notepad.ico | tuesdaypad.ico | TuesdayPad |
| calc.exe → calc.ico | tuesdaycalc.ico | TuesdayCalc |
| mspaint.exe → paint.ico | tuesdaydraw.ico | TuesdayDraw |
| wordpad.exe → wordpad.ico | tuesdaywrite.ico | TuesdayWrite |
| explorer.exe → explorer.ico | tuesplorer.ico | Tuesplorer |
| iexplore.exe → ie.ico | tuesbrowser.ico | TuesBrowser |
| mplayer2.exe → wmp.ico | tuesmedia.ico | TuesdayOS Media Player |
| charmap.exe → charmap.ico | glyphmap.ico | Glyph Map |
| sndrec32.exe → sndrec.ico | audiorec.ico | Audio Recorder |
| mshearts.exe → hearts.ico | tueshearts.ico | Hearts game |
| sol.exe → sol.ico | tuessol.ico | Solitaire |
| freecell.exe → freecell.ico | tuesfreecell.ico | FreeCell |
| minesweeper.exe → winmine.ico | tuesmine.ico | Minesweeper |

---

## 3. Boot Screen & Setup Graphics

### Location
`TuesdayOS/Core/setup/graphics/`
`TuesdayOS/Core/bootloader/graphics/`

| File | Description | Format |
|---|---|---|
| boot_screen.bmp | TuesdayOS boot splash screen | BMP 640x480 |
| boot_progress.bmp | Boot progress bar graphic | BMP |
| setup_background.bmp | Setup installation background | BMP 800x600 |
| setup_header.bmp | Setup header banner | BMP |
| setup_welcome.bmp | Setup welcome screen graphic | BMP |
| setup_complete.bmp | Setup completion graphic | BMP |
| oobe_welcome.bmp | Out-of-box experience welcome | BMP |
| oobe_done.bmp | OOBE completion graphic | BMP |
| shutdown.bmp | Shutdown screen graphic | BMP |

---

## 4. Logon Screen

### Location
`TuesdayOS/Core/setup/logon/`

| File | Description | Format |
|---|---|---|
| logon_default.bmp | Default logon screen background | BMP 1024x768 |
| logon_server.bmp | Server logon background | BMP 1024x768 |
| user_icon_default.ico | Default user account icon | ICO |
| user_icon_admin.ico | Administrator user icon | ICO |

---

## 5. About Box Graphics

### Location
`TuesdayOS/Shell/tueshell32/graphics/`

| File | Description | Format |
|---|---|---|
| about_tuesdayos.bmp | About TuesdayOS dialog graphic | BMP |
| about_tuesdayos_16.bmp | 16-color version | BMP |
| about_tuesdayos_256.bmp | 256-color version | BMP |
| eula_graphic.bmp | EULA dialog graphic | BMP |

---

## 6. Branding Resources to Update in Source

The following source directories contain branding resources that
should be updated when new icons/wallpapers are ready:

### TuesdayOS/Core/setup/ (formerly base/ntsetup/)
- `winbrand/res/` → `setup/branding/res/`
- `billbrd/res/` → `setup/billboards/res/`
- `oobe/` → `setup/oobe/`

### TuesdayOS/Shell/ (formerly shell/)
- `explorer/res/` → `tuesplorer/res/`
- `shell32/res/` → `tueshell32/res/`
- `applets/` → `applets/` (individual app icon updates)

### TuesdayOS/EndUser/ (formerly enduser/)
- `display/wallpapers/` → New wallpaper location
- `shell/icons/` → New system icon location
- `themes/` → Theme resources

---

## Summary

**Total wallpapers needed**: ~10 primary + legacy replacements
**Total icons needed**: ~50+ individual icons across all categories
**Boot/setup graphics**: ~10 additional graphics
**Logon screen**: ~4 graphics
**About box**: ~4 graphics

**Status**: 🎨 **READY FOR WALLPAPER AND ICON UPDATES**

When you're ready to provide or generate the new wallpapers and icons,
the TuesdayOS directory structure is fully prepared to receive them.

---

*TuesdayOS Asset Guide - Version 1.0*
*Last Updated: June 2026*
