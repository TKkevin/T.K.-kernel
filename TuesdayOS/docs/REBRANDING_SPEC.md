# TuesdayOS - Complete Rebranding & Restructuring Specification

This is the master specification document for the TuesdayOS rebranding
project, covering all aspects of the migration from Source/XPSP1/NT to
the new TuesdayOS operating system.

---

## Project Identity

| Property | Value |
|---|---|
| **OS Name** | TuesdayOS |
| **Kernel Name** | T.K. Kernel (TuesdayKevin Kernel) |
| **Version** | 1.0 |
| **Source Base** | Windows XP SP1 (NT 5.1) |
| **Source Files** | 277,863 |
| **License** | TuesdayOS Public License (TUPL) v1.0 |
| **Repository** | github.com/TKkevin/T.K.-kernel |

---

## What Has Been Done

### 1. Directory Structure Created ✅

The complete TuesdayOS directory tree has been created with all 21 major
component directories and their sub-structures. The mapping from the
original XPSP1/NT structure is documented in COMPONENT_MAPPING.md.

### 2. Component Renames Defined ✅

All major components have been mapped to their new TuesdayOS names:

| Original | TuesdayOS | Status |
|---|---|---|
| base/ | Core/ | ✅ Mapped |
| windows/ | WindowSystem/ | ✅ Mapped |
| admin/ | Admin/ | ✅ Mapped |
| com/ | COM/ | ✅ Mapped |
| developer/ | Developer/ | ✅ Mapped |
| drivers/ | Drivers/ | ✅ Mapped |
| ds/ | DirectorySvc/ | ✅ Mapped |
| enduser/ | EndUser/ | ✅ Mapped |
| inetcore/ | NetCore/ | ✅ Mapped |
| inetsrv/ | NetServices/ | ✅ Mapped |
| loc/ | Localization/ | ✅ Mapped |
| mergedcomponents/ | MergedComponents/ | ✅ Mapped |
| multimedia/ | Multimedia/ | ✅ Mapped |
| net/ | Networking/ | ✅ Mapped |
| printscan/ | PrintScan/ | ✅ Mapped |
| public/ | Published/ | ✅ Mapped |
| published/ | Published/API/ | ✅ Mapped |
| sdktools/ | SDKTools/ | ✅ Mapped |
| shell/ | Shell/ | ✅ Mapped |
| termsrv/ | TerminalSvc/ | ✅ Mapped |
| tools/ | Tools/ | ✅ Mapped |
| empty/ | Legacy/ | ✅ Mapped |

### 3. Sub-Component Renames Defined ✅

| Component | Original | TuesdayOS | Status |
|---|---|---|---|
| Core | ntos/ | kernel/ | ✅ |
| Core | boot/ | bootloader/ | ✅ |
| Core | ntsetup/ | setup/ | ✅ |
| Core | crts/ | runtime/ | ✅ |
| Core | fs/ | filesystems/ | ✅ |
| Core | mvdm/ | vdm/ | ✅ |
| Shell | explorer/ | tuesplorer/ | ✅ |
| Shell | shell32/ | tueshell32/ | ✅ |
| Shell | shlwapi/ | tueshlwapi/ | ✅ |
| Drivers | storage/ | block/ | ✅ |
| Drivers | display/ | gpu/ | ✅ |
| Drivers | network/ | net/ | ✅ |
| Admin | activec/ | tmc/ (Tuesday Management Console) | ✅ |
| Admin | dsclientnt4/ | dsclient/ | ✅ |
| NetCore | outlookexpress/ | tuesmail/ | ✅ |
| NetCore | ieak/ | tuesbrowserkit/ | ✅ |
| NetServices | iis/ | tis/ (Tuesday Info Services) | ✅ |
| Multimedia | directx/ | tuesdirectx/ | ✅ |
| DirectorySvc | csps/ | crypto_providers/ | ✅ |

### 4. String Rebranding Rules Defined ✅

90+ replacement rules covering:
- Product names (Windows → TuesdayOS, etc.)
- Company names (Microsoft → TuesdayOS Project)
- Kernel identifiers (NTOSKRNL → TUESKRN, etc.)
- Version codes (NT5.1 → TUES1.0, etc.)
- API identifiers (NTAPI → TUESAPI, etc.)
- Function prefixes (Nt* → Tues*)
- DLL names (KERNEL32 → TKERNEL32, etc.)
- Build variables (NTMAKEENV → TUESMAKEENV, etc.)
- Registry and file paths

### 5. License Rewriting ✅

New licenses created:
- **TuesdayOS Public License (TUPL) v1.0** - Main license
- **TuesdayOS EULA v1.0** - End user license agreement
- **Legal notices** - Trademark, patent, privacy notices
- **Attributions** - Source attribution and credits
- **License headers** - For all C/C++ source files

### 6. Naming Conventions Documented ✅

Complete naming guide with:
- 12 categories of component renames
- Code identifier prefix system (tuesk_, tkdrv_, tksys_, tkapp_, tkutil_)
- File naming patterns
- 60+ specific product/service renames

### 7. Build System Updated ✅

- New `dirs` file with TuesdayOS component names
- New `makefil0` with TuesdayOS build variables
- New `TUESBUILD_CONFIG` build environment configuration
- New `VERSION` file
- Build file update rules for sources, makefiles, and .rc files

### 8. Migration Scripts Created ✅

- `migrate_full.py` - Complete migration engine (copy + rebrand + license rewrite)
- All scripts are documented and ready to execute against the full source tree

---

## What Remains

### 🎨 Wallpapers (NEXT)
See `docs/WALLPAPERS_AND_ICONS.md` for full specification.

### 🎯 Icons (NEXT)
See `docs/WALLPAPERS_AND_ICONS.md` for full specification.

### 📋 Full Source Tree Migration
When sufficient disk space is available, run `migrate_full.py` against
the complete Source/XPSP1/NT tree to copy and rebrand all 277,863 files.

---

## File Inventory

### Documentation Files
```
TuesdayOS/
├── README.md                        # Project overview
├── LICENSE                          # TuesdayOS Public License (TUPL) v1.0
├── EULA.md                          # End User License Agreement
├── LEGAL.md                         # Legal notices and trademarks
├── ATTRIBUTIONS.md                  # Source attribution and credits
├── NAMING_CONVENTIONS.md            # Complete naming and renaming guide
├── COMPONENT_MAPPING.md             # Old → New component mapping
├── docs/
│   └── WALLPAPERS_AND_ICONS.md      # Wallpaper & icon update guide
├── LICENSES/                        # Additional license files
│   └── (placeholder for third-party licenses)
```

### Build Configuration Files
```
TuesdayOS/
├── dirs                             # Build directory list
├── makefil0                         # Top-level build makefile
├── VERSION                          # Version information
├── TUESBUILD_CONFIG                 # Build environment configuration
```

### Migration Scripts
```
TuesdayOS/
├── migrate_full.py                  # Full migration engine
├── migrate_files.sh                 # Directory structure + file copy
├── migrate_structure.sh             # Structure creation only
├── rebrand_content.sh               # String replacement rules
├── rebrand_engine.py                # Content rebranding engine
├── rewrite_licenses.py              # License rewriting engine
├── update_build_files.py            # Build files update engine
├── apply_rebranding.sh              # Apply rebranding to files
└── master_migrate.sh                # Master orchestration script
```

---

*TuesdayOS Rebranding Specification - Version 1.0*
*Last Updated: June 2026*
*TuesdayOS Project*
