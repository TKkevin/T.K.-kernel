# TuesdayOS Naming Conventions

## 1. Operating System Names

| Original | TuesdayOS | Notes |
|---|---|---|
| Windows | TuesdayOS | Primary OS name |
| Windows XP | TuesdayOS 1.0 | Product name |
| Windows XP SP1 | TuesdayOS 1.0 SP0 | With service pack |
| Windows Server | TuesdayOS Server | Server edition |
| Windows NT | TuesdayOS NT-compat | NT compatibility layer |
| Win32 | Tues32 | 32-bit API |
| Win64 | Tues64 | 64-bit API |
| .NET | Tues.NET | Framework |
| MS-DOS | TuesDOS | DOS compatibility |
| Windows PE | TuesdayOS PE | Preboot environment |

## 2. Kernel Names

| Original | TuesdayOS | Notes |
|---|---|---|
| NTOSKRNL | TUESKRN | Kernel image name |
| NTOSKRNL.EXE | TUESKRN.EXE | Kernel executable |
| NTOS | T.K. Kernel | Kernel project name |
| HAL.DLL | TUESHAL.DLL | Hardware Abstraction Layer |
| NTDLL.DLL | TUESDLL.DLL | NT DLL |
| NTDETECT.COM | TUESDETECT.COM | Hardware detector |
| NTLDR | TUESLDR | Boot loader |
| NTBOOTDD.SYS | TUESBOOTDD.SYS | Boot device driver |

## 3. Shell and Desktop Names

| Original | TuesdayOS | Notes |
|---|---|---|
| Explorer | Tuesplorer | File manager/shell |
| Explorer.exe | Tuesplorer.exe | Executable |
| Shell32.dll | Tueshell32.dll | Shell library |
| Shlwapi.dll | Tueshlwapi.dll | Shell lightweight API |
| Desktop | Tuesday Desktop | Desktop environment |
| Taskbar | Tuesday Taskbar | Task bar |
| Start Menu | Tuesday Menu | Start menu equivalent |
| My Computer | My Tuesday | Computer icon name |
| My Documents | My Documents | Kept as-is |
| Recycle Bin | Recovery Bin | Trash/recycle |
| Control Panel | Settings Panel | System settings |

## 4. System Services and Subsystems

| Original | TuesdayOS | Notes |
|---|---|---|
| smss.exe | tuesess.exe | Session manager |
| csrss.exe | tkcsr.exe | Client/Server runtime |
| winlogon.exe | tueslogon.exe | Logon process |
| services.exe | tuessvcs.exe | Service control manager |
| lsass.exe | tklsass.exe | Local security authority |
| svchost.exe | tueshost.exe | Service host |
| spoolsv.exe | tuespool.exe | Print spooler |
| winmgmt.exe | tueswmi.exe | WMI service |

## 5. Networking and Internet Names

| Original | TuesdayOS | Notes |
|---|---|---|
| Internet Explorer | TuesBrowser | Web browser |
| Outlook Express | TuesMail | Email client |
| IEAK | TuesBrowserKit | Browser admin kit |
| IIS | TIS | Tuesday Info Services |
| MSN | TuesNet | Online services |
| TCP/IP | TCP/IP | Kept as standard |
| Winsock | TuesSock | Socket API |
| Rpcrt4.dll | Tktcp4.dll | RPC runtime |
| WinInet | TuesInet | Internet API |

## 6. Multimedia Names

| Original | TuesdayOS | Notes |
|---|---|---|
| DirectX | TuesDirectX | Graphics/multimedia framework |
| DirectDraw | TuesDraw2D | 2D graphics |
| Direct3D | Tues3D | 3D graphics |
| DirectSound | TuesSound | Audio |
| DirectMusic | TuesMusic | Music |
| DirectInput | TuesInput | Input handling |
| DirectPlay | TuesPlay | Network gaming |
| DirectShow | TuesShow | Media streaming |
| Windows Media Player | TuesMedia | Media player |
| WMV | TUESV | Video format |
| WMA | TUESA | Audio format |

## 7. Administrative and Developer Tools

| Original | TuesdayOS | Notes |
|---|---|---|
| MMC | TMC | Tuesday Management Console |
| Event Viewer | Tuesday Event Viewer | Log viewer |
| Device Manager | Tuesday Device Manager | Hardware manager |
| Task Manager | Tuesday Task Manager | Process manager |
| Registry Editor | Tuesday Registry Editor | Registry tool |
| DDK | TuesDDK | Driver Development Kit |
| SDK | TuesSDK | Software Development Kit |
| WMI | TuesWMI | Management Instrumentation |

## 8. Code Identifier Prefixes

All code identifiers (function names, variable names, types, macros)
use the following prefix system to distinguish TuesdayOS code from
original code:

| Prefix | Domain | Example |
|---|---|---|
| `tuesk_` | Kernel | tuesk_init, tuesk_memory, tuesk_process |
| `tkdrv_` | Drivers | tkdrv_init, tkdrv_block, tkdrv_network |
| `tksys_` | System services | tksys_registry, tksys_logon, tksys_security |
| `tkapp_` | Applications | tkapp_tuesplorer, tkapp_notepad, tkapp_calc |
| `tkutil_` | Utilities | tkutil_migrate, tkutil_build, tkutil_debug |
| `TUESK_` | Kernel macros | TUESK_MAX_PATH, TUESK_STATUS |
| `TKDRV_` | Driver macros | TKDRV_IOCTL, TKDRV_STATUS |
| `TKSYS_` | System macros | TKSYS_ERROR, TKSYS_CONFIG |

## 9. DLL and Binary Names

| Original | TuesdayOS | Notes |
|---|---|---|
| KERNEL32.DLL | TKERNEL32.DLL | Win32 kernel base |
| USER32.DLL | TUSER32.DLL | User interface |
| GDI32.DLL | TGDI32.DLL | Graphics device interface |
| ADVAPI32.DLL | TADVAPI32.DLL | Advanced API |
| OLE32.DLL | TOLE32.DLL | OLE |
| OLEAUT32.DLL | TOLEAUT32.DLL | OLE Automation |
| COMCTL32.DLL | TCOMCTL32.DLL | Common controls |
| COMDLG32.DLL | TCOMDLG32.DLL | Common dialogs |
| SHELL32.DLL | TUESHELL32.DLL | Shell |
| MSVCRT.DLL | TMSVCRT.DLL | C runtime |
| WS2_32.DLL | TWS2_32.DLL | Winsock2 |
| WINMM.DLL | TWINMM.DLL | Multimedia |
| SETUPAPI.DLL | TSETUPAPI.DLL | Setup API |
| CRYPT32.DLL | TCRYPT32.DLL | Cryptography |

## 10. Registry Key Paths

| Original | TuesdayOS |
|---|---|
| HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows | HKEY_LOCAL_MACHINE\SOFTWARE\TuesdayOS |
| HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT | HKEY_LOCAL_MACHINE\SOFTWARE\TuesdayOS\T.K. Kernel |
| HKEY_CURRENT_USER\Software\Microsoft\Windows | HKEY_CURRENT_USER\Software\TuesdayOS |
| \Registry\Machine\SYSTEM\CurrentControlSet | \Registry\Machine\SYSTEM\TuesdayControlSet |

## 11. File System Paths

| Original | TuesdayOS |
|---|---|
| C:\Windows | C:\TuesdayOS |
| C:\Windows\System32 | C:\TuesdayOS\System32 |
| C:\Windows\System | C:\TuesdayOS\System |
| C:\Program Files | C:\Programs |
| C:\Documents and Settings | C:\Users |
| \Device\HardDiskVolume1 | \Device\TuesDiskVolume1 |

## 12. Version and Build Identifiers

| Original | TuesdayOS |
|---|---|
| NT5.1 | TUES1.0 |
| 5.1.2600 | 1.0.2600 |
| XPSP1 | TUESSP0 |
| FRE | TUESFRE |
| CHK | TUESCHK |
| _WIN32_WINNT=0x0501 | _TUES32_TUESNT=0x0100 |
| WINVER=0x0501 | TUESVER=0x0100 |

---

*TuesdayOS Naming Conventions - Version 1.0*
*TuesdayOS Project*
