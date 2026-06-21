# TuesdayOS Component Mapping

This document maps the original Windows XP SP1 (NT5.1) source tree
to the new TuesdayOS directory structure.

## Directory Renames

| Original (XPSP1/NT) | TuesdayOS | Description |
|---|---|---|
| base/ | Core/ | Core system components (kernel, HAL, memory, etc.) |
| windows/ | WindowSystem/ | Windowing subsystem, GDI, input methods |
| admin/ | Admin/ | Administrative tools and MMC snap-ins |
| com/ | COM/ | Component Object Model implementation |
| developer/ | Developer/ | Developer tools, SDKs, debug tools |
| drivers/ | Drivers/ | Device drivers (storage, network, display, etc.) |
| ds/ | DirectorySvc/ | Directory services (Active Directory, LDAP) |
| enduser/ | EndUser/ | End-user applications and accessories |
| inetcore/ | NetCore/ | Internet core (browser engine, HTTP stack) |
| inetsrv/ | NetServices/ | Internet services (IIS, web server) |
| loc/ | Localization/ | Localization and internationalization |
| mergedcomponents/ | MergedComponents/ | Merged/combined components |
| multimedia/ | Multimedia/ | DirectX, audio, video, media playback |
| net/ | Networking/ | Networking stack (TCP/IP, RPC, firewall) |
| printscan/ | PrintScan/ | Print and scanning subsystem |
| public/ | Published/ | Public headers and import libraries |
| published/ | Published/API/ | Published API interfaces |
| sdktools/ | SDKTools/ | SDK build tools and utilities |
| shell/ | Shell/ | Shell (Explorer), taskbar, desktop |
| termsrv/ | TerminalSvc/ | Terminal services / remote desktop |
| tools/ | Tools/ | Build tools and development utilities |
| empty/ | Legacy/ | Legacy/deprecated components |

## Sub-Component Renames within Core/ (formerly base/)

| Original | TuesdayOS | Description |
|---|---|---|
| ntos/ | kernel/ | NT OS Kernel → T.K. Kernel core |
| hal/ | hal/ | Hardware Abstraction Layer |
| ntsetup/ | setup/ | System setup and installation |
| crts/ | runtime/ | C runtime libraries |
| fs/ | filesystems/ | File system drivers |
| mvdm/ | vdm/ | Virtual DOS Machine |
| win32k/ | win32k/ | Win32 kernel subsystem (kept for compat) |
| boot/ | bootloader/ | Boot loader code |

## Sub-Component Renames within Shell/ (formerly shell/)

| Original | TuesdayOS | Description |
|---|---|---|
| applets/ | applets/ | Shell applets (calc, notepad, etc.) |
| shell32/ | tueshell32/ | Shell32 → TuesdayShell32 |
| explorer/ | tuesplorer/ | Explorer → Tuesplorer |
| shlwapi/ | tueshlwapi/ | Shell lightweight API |
| ext/ | extensions/ | Shell extensions |
| cpl/ | cpl/ | Control panel applets |

## Sub-Component Renames within Drivers/ (formerly drivers/)

| Original | TuesdayOS | Description |
|---|---|---|
| storage/ | block/ | Storage drivers → Block device drivers |
| network/ | net/ | Network drivers |
| display/ | gpu/ | Display drivers → GPU drivers |
| input/ | input/ | Input device drivers |
| wdm/ | wdm/ | Windows Driver Model (kept for compat) |
| serial/ | serial/ | Serial port drivers |

## Sub-Component Renames within Admin/ (formerly admin/)

| Original | TuesdayOS | Description |
|---|---|---|
| activec/ | tmc/ | ActiveX Console → Tuesday Management Console |
| dsclientnt4/ | dsclient/ | DS Client for NT4 → DS Client |
| pchealth/ | pchealth/ | PC Health / Help & Support |
| wmi/ | wmi/ | TuesdayOS Management Instrumentation |

## Sub-Component Renames within NetCore/ (formerly inetcore/)

| Original | TuesdayOS | Description |
|---|---|---|
| outlookexpress/ | tuesmail/ | Outlook Express → TuesdayOS Mail |
| ieak/ | tuesbrowserkit/ | IE Admin Kit → TuesdayOS Browser Kit |

## Sub-Component Renames within NetServices/ (formerly inetsrv/)

| Original | TuesdayOS | Description |
|---|---|---|
| iis/ | tis/ | IIS → Tuesday Information Services |

## Sub-Component Renames within Multimedia/ (formerly multimedia/)

| Original | TuesdayOS | Description |
|---|---|---|
| directx/ | tuesdirectx/ | DirectX → TuesDirectX |

## Sub-Component Renames within DirectorySvc/ (formerly ds/)

| Original | TuesdayOS | Description |
|---|---|---|
| security/csps/ | security/crypto_providers/ | CSPs → Crypto Providers |
