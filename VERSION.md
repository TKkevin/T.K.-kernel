# TuesdayOS & T.K. Kernel - Version Information

## Current Release

**TuesdayOS v1.0.0**
**T.K. Kernel v1.0.0**

Release Date: June 21, 2026

## Version Scheme

TuesdayOS follows Semantic Versioning (MAJOR.MINOR.PATCH):

- **MAJOR**: Significant architectural changes
- **MINOR**: New features and enhancements
- **PATCH**: Bug fixes and patches

## Build Information

```
Project Name: TuesdayOS
Kernel Name: T.K. Kernel (TuesdayKevin Kernel)
Build System: GNU Make
Target Platform: x86 (32-bit)
Language: C, Assembly
```

## Changelog

### v1.0.0 (Initial Release)

#### Features
- Core T.K. Kernel implementation
- Process and thread management
- Memory management (virtual memory support)
- File system abstraction layer
- Network stack (TCP/IP)
- Device driver framework
- Interrupt and exception handling
- IPC mechanisms (pipes, message queues, shared memory)

#### Components
- Kernel: 7 core modules
- Drivers: AHCI, e1000, IDE (framework)
- System Services: init, device manager, scheduler
- Utilities: shell, file operations, process tools

#### Documentation
- Architecture documentation
- Development guide
- Contributing guidelines
- Rebranding guide

## Known Issues

- Virtual memory not fully implemented
- File system operations need completion
- Network drivers need PCI bus integration
- Device manager lacks hot-plug support

## Future Releases

See [ROADMAP.md](ROADMAP.md) for planned features and timeline.

## Support

For issues and questions:
- GitHub Issues: https://github.com/TKkevin/T.K.-kernel/issues
- Documentation: See documentation/ directory
- Contributing: See CONTRIBUTING.md

---

*TuesdayOS - Built with the T.K. Kernel*