# TuesdayOS Project - Contributing Guidelines

## Welcome to TuesdayOS!

Thank you for your interest in contributing to TuesdayOS and the T.K. Kernel project. This document outlines how you can help make TuesdayOS better.

## Getting Started

1. **Fork the Repository**
   ```bash
   git clone https://github.com/TKkevin/T.K.-kernel.git
   cd T.K.-kernel
   ```

2. **Set Up Development Environment**
   ```bash
   # Install dependencies
   sudo apt install build-essential nasm gdb
   
   # Configure build
   cp config.example.mk config.mk
   ```

3. **Create Feature Branch**
   ```bash
   git checkout -b feature/your-feature-name
   ```

## How to Contribute

### Report Bugs

- Check existing issues first
- Provide detailed reproduction steps
- Include system information
- Attach logs and screenshots if relevant

### Submit Features

- Discuss major features in issues first
- Implement with consistent code style
- Add tests and documentation
- Submit pull request with clear description

### Improve Documentation

- Fix typos and unclear explanations
- Add examples and use cases
- Update outdated information
- Improve diagrams and visuals

### Write Tests

- Unit tests for new functions
- Integration tests for features
- Performance benchmarks
- Regression tests

## Code Style Requirements

### C Code Style

```c
/* Header comment */
#ifndef TUESK_MODULE_H
#define TUESK_MODULE_H

#include <stdint.h>

/* Constants */
#define TUESK_CONSTANT 0x01

/* Structures */
struct tuesk_data {
    uint32_t field1;
    uint32_t field2;
};

/* Function declarations */
int tuesk_function(int param);

#endif /* TUESK_MODULE_H */
```

### File Organization

- Header files (.h) - Interfaces
- Source files (.c) - Implementation
- Assembly files (.asm) - Low-level code
- Makefiles - Build configuration

## Development Workflow

1. Create descriptive commit messages
2. Keep commits small and focused
3. Push to your fork
4. Create pull request against `develop` branch
5. Reference related issues
6. Wait for review and feedback

## Testing

Before submitting:

```bash
# Build everything
make all

# Run tests
make test

# Check code style
make lint
```

## Pull Request Template

```markdown
## Description

Briefly describe the changes made.

## Type of Change

- [ ] Bug fix
- [ ] New feature
- [ ] Breaking change
- [ ] Documentation

## Related Issues

Closes #123

## Testing

Describe tests performed.

## Checklist

- [ ] Code follows style guidelines
- [ ] Documentation updated
- [ ] Tests added/updated
- [ ] No breaking changes
```

## Code of Conduct

- Be respectful and professional
- Provide constructive feedback
- Collaborate openly
- Accept criticism gracefully

## License

By contributing, you agree your work is licensed under the same license as the project.

---

**Happy contributing! We look forward to your contributions!**