# TuesdayOS Source Code Migration & Rebranding Plan

## Project Overview

This document outlines the comprehensive plan for migrating and rebranding the Windows XP Source Code (XPSP1/NT) into TuesdayOS with the T.K. Kernel architecture.

## Source Structure Analysis

### Main Components Identified

```
Source/XPSP1/NT/
├── admin/              # Administrative tools
├── base/               # Core system components
├── com/                # Component Object Model
├── developer/          # Developer tools and SDKs
├── drivers/            # Device drivers
├── ds/                 # Directory Services
├── enduser/            # End-user utilities
├── inetcore/           # Internet core (IE)
├── inetsrv/            # Internet services (IIS)
├── loc/                # Localization
├── mergedcomponents/   # Merged components
├── multimedia/         # Multimedia (DirectX, Audio, Video)
├── net/                # Networking stack
├── printscan/          # Print and scanning
├── public/             # Public headers and libraries
├── published/          # Published interfaces
├── sdktools/           # SDK tools
├── shell/              # Shell and Explorer
├── termsrv/            # Terminal Services
├── tools/              # Build and utility tools
└── windows/            # Core Windows subsystems
```

## Rebranding Strategy

### Phase 1: Inventory & Mapping (CURRENT)
- [x] Identify all component directories
- [x] Map XP components to TuesdayOS equivalents
- [x] Create migration plan
- [ ] Audit file count and sizes
- [ ] Identify binary vs source files
- [ ] Document resource files (icons, wallpapers, etc.)

### Phase 2: Rebranding & Restructuring (NEXT)
- [ ] Create TuesdayOS source tree structure
- [ ] Rebrand all source code files
- [ ] Update all references and identifiers
- [ ] Restructure components into T.K. Kernel modules
- [ ] Implement build system integration

### Phase 3: Assets & Resources (AFTER PHASE 2)
- [ ] Update wallpapers
- [ ] Redesign icons
- [ ] Update boot screens
- [ ] Create new branding materials

### Phase 4: License & Compliance (AFTER PHASE 3)
- [ ] Rewrite all license files
- [ ] Update license headers in source files
- [ ] Create new copyright notices
- [ ] Prepare MIT License files

## Component Mapping to TuesdayOS Modules

### Kernel Components
| XP Component | TuesdayOS Module | Path |
|---|---|---|
| base/ntos | kernel/core | kernel/core/ |
| base/subsys | kernel/subsystems | kernel/subsystems/ |
| drivers | drivers/ | drivers/ |
| net | kernel/net | kernel/net/ |

### System Components
| XP Component | TuesdayOS Service | Path |
|---|---|---|
| admin | system/admin | system/admin/ |
| shell | system/shell | system/shell/ |
| termsrv | system/services | system/services/ |
| ds | system/services | system/services/ |

### User-Space Components
| XP Component | TuesdayOS App | Path |
|---|---|---|
| enduser | applications/ | applications/ |
| inetcore | applications/browser | applications/browser/ |
| inetsrv | services/ | services/ |
| multimedia | applications/multimedia | applications/multimedia/ |

## File Naming Convention

### During Migration

**Kernel Files:**
```
Original: base/ntos/mm/memory.c
New: kernel/core/tuesk_memory.c
Prefix: tuesk_
```

**Driver Files:**
```
Original: drivers/storage/disk/disk.c
New: drivers/block/tkdrv_disk.c
Prefix: tkdrv_
```

**System Service Files:**
```
Original: admin/services/service.c
New: system/tksys_service.c
Prefix: tksys_
```

**Application Files:**
```
Original: enduser/explorer/explorer.c
New: applications/tkapp_explorer.c
Prefix: tkapp_
```

## String & Identifier Replacements

### Global Replacements

```
"Windows XP"        → "TuesdayOS"
"Windows"           → "TuesdayOS"
"NT Kernel"         → "T.K. Kernel"
"Microsoft"         → "TuesdayOS Project"
"Windows NT"        → "TuesdayOS"
NTKERNEL_.*         → TUESK_.*
NT_.*               → TK_.*
struct nt_*         → struct tuesk_*
MICROSOFT_*         → TUESDAYOS_*
```

### Code Identifier Replacements

```c
// BEFORE
struct nt_process process;
NTKERNEL_MEMORY_SIZE
NtCreateProcess()

// AFTER
struct tuesk_process process;
TUESK_MEMORY_SIZE
tuesk_process_create()
```

## Resource Files to Update

### 1. Wallpapers
- Location: enduser/shell/themes/
- Update: Create TuesdayOS branded wallpapers
- Format: BMP, JPG (maintain compatibility)

### 2. Icons
- Location: enduser/shell/icons/ and drivers/display/icons/
- Update: Redesign with TuesdayOS branding
- Format: ICO, BMP

### 3. Boot Screens
- Location: drivers/display/video/
- Update: Create TuesdayOS boot splash screen

### 4. Dialogs & Resources
- Location: windows/core/resources/
- Update: Rebrand all text and graphics

## License Updates

### Files to Update

1. **Root LICENSE** → MIT License
2. **File Headers** → New copyright notices
3. **Source Files** → Update license comments
4. **README files** → New legal information

### License Template

```c
/*
 * TuesdayOS - T.K. Kernel
 * Component: [Component Name]
 * 
 * Copyright (C) 2026 TuesdayOS Project
 * Licensed under MIT License
 * 
 * Original source from Windows XP (NT5.1)
 * This file has been substantially modified for TuesdayOS
 */
```

## Estimated Scope

### Source Code Statistics
- **Estimated Files**: 10,000+ source files
- **Estimated Lines of Code**: 50,000,000+ lines
- **Primary Language**: C, C++, Assembly
- **Build System**: Windows/MSVC → GNU Make/GCC

### Rebranding Tasks
- File renames: ~10,000 files
- String replacements: ~50,000+ strings
- Code refactoring: ~5,000+ functions
- Documentation updates: ~500 files

## Implementation Phases

### Phase 1: Preparation (CURRENT) ✅
- [x] Create migration plan
- [x] Document component structure
- [x] Define naming conventions
- [x] Plan build system migration

### Phase 2: Automated Rebranding (READY)
- Batch rename files
- Find and replace strings
- Update header comments
- Fix build references

### Phase 3: Build System Integration (AFTER PHASE 2)
- Adapt makefiles for GNU Make
- Create module dependencies
- Test compilation
- Fix compilation errors

### Phase 4: Assets & Resources (AFTER PHASE 3)
- Update wallpapers ✨
- Redesign icons 🎨
- Create boot screens
- Brand documentation

### Phase 5: License & Compliance (AFTER PHASE 4) 📋
- Rewrite licenses
- Update file headers
- Create attribution files
- Prepare for release

## Status: READY FOR PHASE 2

### ✅ Completed
- Project planning and documentation
- Component analysis
- Naming convention definition
- Migration strategy

### ⏳ Next Steps
1. Begin automated rebranding process
2. Migrate file structure to TuesdayOS layout
3. Update source code identifiers
4. Test build system integration

### 📅 When Ready
After Phase 2 is complete:
- **Wallpapers**: Ready to update
- **Icons**: Ready to redesign
- **Licenses**: Ready to rewrite

**Status for User**: Phase 2 ready to commence

---

*TuesdayOS Source Migration Project*
*Last Updated: June 21, 2026*
