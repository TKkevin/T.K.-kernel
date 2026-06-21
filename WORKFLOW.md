# TuesdayOS Development Team Workflow

This document outlines the development workflow for contributing to TuesdayOS and the T.K. Kernel.

## Branch Strategy

- **master** - Stable release branch
- **develop** - Development integration branch
- **feature/** - Feature branches (feature/name)
- **bugfix/** - Bug fix branches (bugfix/issue-number)
- **release/** - Release preparation branches

## Commit Guidelines

### Commit Message Format

```
<type>(<scope>): <subject>

<body>

<footer>
```

### Types
- feat: New feature
- fix: Bug fix
- docs: Documentation
- style: Code style
- refactor: Code refactoring
- perf: Performance improvement
- test: Tests
- chore: Build/tooling

### Examples

```
feat(kernel): implement virtual memory manager

Implemented demand paging and page fault handling.
Added page table management functions.

Closes #123
```

## Code Style

### Naming Conventions
- Functions: `tuesk_module_function()` or `tkdrv_driver_function()`
- Macros: `TUESK_CONSTANT` or `TKDRV_CONSTANT`
- Structures: `struct tuesk_type` or `struct tkdrv_type`
- File names: `tuesk_module.c` or `tkdrv_driver.c`

### Formatting
- Indentation: 4 spaces (no tabs)
- Line length: 80 characters max
- Braces: Opening on same line

## Pull Request Process

1. Create feature branch from develop
2. Make commits with clear messages
3. Keep PR focused on single feature/fix
4. Update documentation
5. Request review from maintainers
6. Address feedback
7. Merge when approved

## Testing

- Write tests for new features
- Run full test suite before PR
- Include integration tests
- Test on multiple architectures

## Documentation

- Update README for major changes
- Add inline code comments
- Update architecture docs
- Create API documentation

## Issue Reporting

- Use GitHub Issues for bugs
- Include reproduction steps
- Attach relevant logs/output
- Label appropriately

---

*For questions, contact the development team.*