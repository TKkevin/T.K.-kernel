# TuesdayOS Development Guide

## Getting Started

### Prerequisites
- GCC compiler suite
- Make build system
- nasm (for assembly)
- Git version control

### Building TuesdayOS

```bash
# Clone the repository
git clone https://github.com/TKkevin/T.K.-kernel.git
cd T.K.-kernel

# Configure build
copy config.example.mk config.mk
# Edit config.mk as needed

# Build kernel
make kernel

# Build drivers
make drivers

# Build system
make system

# Build utilities
make utilities

# Build everything
make all
```

## Development Workflow

### 1. Creating a New Component

```bash
# Create component directory
mkdir kernel/newmodule
cd kernel/newmodule

# Create header file
touch tuesk_newmodule.h

# Create implementation
touch tuesk_newmodule.c

# Create Makefile
touch Makefile
```

### 2. Component Structure

```c
// tuesk_newmodule.h
#ifndef TUESK_NEWMODULE_H
#define TUESK_NEWMODULE_H

// Function declarations
int tuesk_newmodule_init(void);
void tuesk_newmodule_shutdown(void);

#endif // TUESK_NEWMODULE_H
```

```c
// tuesk_newmodule.c
#include "tuesk_newmodule.h"

int tuesk_newmodule_init(void) {
    // Initialize module
    return 0;
}

void tuesk_newmodule_shutdown(void) {
    // Cleanup
}
```

### 3. Testing

```bash
# Run unit tests
make test

# Run integration tests
make test-integration

# Build test kernel
make kernel-debug
```

## Debugging

### Using GDB

```bash
# Build debug kernel
make kernel-debug

# Start GDB
gdb ./build/kernel

# In GDB
(gdb) target remote :1234
(gdb) file build/kernel
(gdb) continue
```

### Kernel Logging

```c
#include "tuesk_log.h"

// Log levels
TK_LOG_DEBUG("Debug message");
TK_LOG_INFO("Info message");
TK_LOG_WARN("Warning message");
TK_LOG_ERROR("Error message");
```

## Code Review Process

1. Create feature branch: `git checkout -b feature/my-feature`
2. Make commits with descriptive messages
3. Push to remote: `git push origin feature/my-feature`
4. Create pull request on GitHub
5. Address review comments
6. Merge after approval

## Performance Optimization

- Profile code with `perf`
- Use inline functions for hot paths
- Minimize memory allocations
- Cache frequently accessed data
- Use appropriate data structures

## Documentation

- Update README files for new components
- Add inline code comments for complex logic
- Create API documentation for public functions
- Maintain this development guide

## Common Tasks

### Adding a New Driver

```c
// drivers/block/tkdrv_mydriver.c
#include "tk_driver.h"

static struct tk_block_driver my_driver = {
    .name = "mydriver",
    .probe = tkdrv_mydriver_probe,
    .remove = tkdrv_mydriver_remove,
    // ... other operations
};

int tkdrv_mydriver_init(void) {
    return tk_register_block_driver(&my_driver);
}
```

### Adding a System Service

```c
// system/tksys_myservice.c
#include "tk_system.h"

int tksys_myservice_main(void) {
    // Service main loop
    while (1) {
        // Service logic
    }
}
```

## Support and Issues

- Check existing issues: https://github.com/TKkevin/T.K.-kernel/issues
- Report bugs with detailed reproduction steps
- Include relevant logs and system information

---

*Happy hacking with TuesdayOS!*