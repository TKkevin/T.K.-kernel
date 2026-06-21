# TuesdayOS

## The TuesdayOS Operating System

TuesdayOS is a rebranded and restructured operating system based on the
Windows XP SP1 (NT 5.1) source code. The entire codebase has been
reorganized into a modern, clean directory structure with new naming
conventions, updated licenses, and a fresh identity.

### Quick Facts

| Property | Value |
|---|---|
| **OS Name** | TuesdayOS |
| **Kernel Name** | T.K. Kernel (TuesdayKevin Kernel) |
| **Version** | 1.0 |
| **Source Base** | Windows XP SP1 (NT 5.1) |
| **License** | TuesdayOS Public License (TUPL) v1.0 |

### Directory Structure

```
TuesdayOS/
├── Core/               # Core system (kernel, HAL, boot, runtime)
├── WindowSystem/       # Windowing subsystem, GDI, input
├── Admin/              # Administrative tools, TMC snap-ins
├── COM/                # Component Object Model
├── Developer/          # Developer tools, SDKs, debug
├── Drivers/            # Device drivers (block, net, gpu, input)
├── DirectorySvc/       # Directory services, security, crypto
├── EndUser/            # End-user apps, wallpapers, themes, icons
├── NetCore/            # Internet core, TuesBrowser, TuesMail
├── NetServices/        # Tuesday Info Services (TIS)
├── Localization/       # Localization and internationalization
├── MergedComponents/   # Merged/combined components
├── Multimedia/         # TuesDirectX, audio, video
├── Networking/         # Networking stack, TCP/IP, RPC, firewall
├── PrintScan/          # Print and scanning subsystem
├── Published/          # Public headers and import libraries
├── SDKTools/           # SDK build tools
├── Shell/              # Tuesplorer, TuesShell32, applets
├── TerminalSvc/        # Terminal services / remote desktop
├── Tools/              # Build tools and development utilities
├── Legacy/             # Legacy/deprecated components
├── docs/               # Documentation
├── LICENSES/           # License files
├── dirs                # Build directory list
├── makefil0            # Top-level build makefile
├── VERSION             # Version information
├── TUESBUILD_CONFIG    # Build environment configuration
└── migrate_full.py     # Migration engine script
```

### Key Documentation

| Document | Description |
|---|---|
| [LICENSE](LICENSE) | TuesdayOS Public License (TUPL) v1.0 |
| [EULA.md](EULA.md) | End User License Agreement |
| [LEGAL.md](LEGAL.md) | Legal notices, trademarks, patents |
| [ATTRIBUTIONS.md](ATTRIBUTIONS.md) | Source attribution and credits |
| [NAMING_CONVENTIONS.md](NAMING_CONVENTIONS.md) | Complete naming and renaming guide |
| [COMPONENT_MAPPING.md](COMPONENT_MAPPING.md) | Old → New component mapping |
| [docs/WALLPAPERS_AND_ICONS.md](docs/WALLPAPERS_AND_ICONS.md) | Wallpaper & icon update guide |
| [docs/REBRANDING_SPEC.md](docs/REBRANDING_SPEC.md) | Master rebranding specification |

### Brand Colors

| Name | Hex | Usage |
|---|---|---|
| Tuesday Blue | #4A90D9 | Primary brand color |
| Tuesday Green | #2ECC71 | Secondary, success states |
| Tuesday Gold | #F39C12 | Accent, highlights |
| Tuesday Dark | #2C3E50 | Dark theme, text |
| Tuesday Light | #ECF0F1 | Light theme, backgrounds |

### Code Identifier Prefixes

| Prefix | Domain | Example |
|---|---|---|
| `tuesk_` | Kernel | tuesk_init, tuesk_memory |
| `tkdrv_` | Drivers | tkdrv_init, tkdrv_block |
| `tksys_` | System services | tksys_registry, tksys_logon |
| `tkapp_` | Applications | tkapp_tuesplorer, tkapp_notepad |
| `tkutil_` | Utilities | tkutil_migrate, tkutil_build |

---

*TuesdayOS - Version 1.0*
*TuesdayOS Project*
