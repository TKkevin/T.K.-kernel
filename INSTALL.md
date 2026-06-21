# TuesdayOS Installation Guide

## Prerequisites

- GCC compiler suite (gcc, g++, binutils)
- GNU Make
- NASM assembler
- GDB debugger (optional, for development)
- Linux/Unix development environment

## Installation on Ubuntu/Debian

```bash
# Update package list
sudo apt update

# Install build tools
sudo apt install build-essential nasm gdb git

# Install cross-compiler (optional)
sudo apt install gcc-multilib g++-multilib
```

## Installation on Fedora/RHEL

```bash
# Install build tools
sudo dnf install gcc gcc-c++ make nasm gdb git

# Install development files
sudo dnf install glibc-devel.i686
```

## Installation on macOS

```bash
# Install Xcode command line tools
xcode-select --install

# Install via Homebrew
brew install nasm gdb
```

## Building TuesdayOS

### Option 1: Using Build Script

```bash
# Clone repository
git clone https://github.com/TKkevin/T.K.-kernel.git
cd T.K.-kernel

# Make build script executable
chmod +x build.sh

# Run build
./build.sh
```

### Option 2: Using Make

```bash
# Clone repository
git clone https://github.com/TKkevin/T.K.-kernel.git
cd T.K.-kernel

# Copy configuration
cp config.example.mk config.mk

# Build all components
make all

# Or build individual components
make kernel      # Build kernel only
make drivers     # Build drivers only
make system      # Build system services only
make utilities   # Build utilities only
```

## Configuration

Edit `config.mk` to customize build options:

```makefile
# Enable/disable features
ENABLE_NETWORK := yes
ENABLE_GRAPHICS := no
ENABLE_DEBUG := yes

# Architecture settings
ARCH := x86
BITS := 32
```

## Verification

Verify the build was successful:

```bash
# Check build directory
ls -la build/bin/

# List object files
ls -la build/obj/

# Run tests (when available)
./test.sh
```

## Clean Build

To clean build artifacts:

```bash
make clean

# Or use clean script
./clean.sh
```

## Troubleshooting

### GCC not found
```bash
# Install GCC
sudo apt install gcc build-essential
```

### NASM not found
```bash
# Install NASM
sudo apt install nasm
```

### Permission denied on scripts
```bash
# Make scripts executable
chmod +x *.sh
```

### Build failures
```bash
# Clean and rebuild
make clean
make all

# Check compiler version
gcc --version
```

## Development Setup

### With GDB Debugging

```bash
# Build with debug symbols
make clean
make DEBUG=1

# Start GDB
gdb ./build/kernel
```

### With Visual Studio Code

Create `.vscode/settings.json`:

```json
{
    "C_Cpp.intelliSenseEngine": "Tag Parser",
    "files.exclude": {
        "**/build": false
    }
}
```

## Next Steps

1. Read [DEVELOPMENT.md](documentation/DEVELOPMENT.md) for development workflow
2. Review [ARCHITECTURE.md](documentation/ARCHITECTURE.md) for system design
3. Check [CONTRIBUTING.md](CONTRIBUTING.md) for contribution guidelines

## Support

For issues during installation:
- Check [ROADMAP.md](ROADMAP.md) for known issues
- Review GitHub Issues: https://github.com/TKkevin/T.K.-kernel/issues
- Read existing documentation in `documentation/` directory

---

*Happy building with TuesdayOS!*