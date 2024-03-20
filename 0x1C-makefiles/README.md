# 0x1C. C - Makefiles

## Introduction to Make and Makefiles

Make is a build automation tool that manages the compilation of code and other tasks in software development. It uses files called Makefiles to specify how to derive the target files from the source files.

## What are Makefiles?

Makefiles are text files that contain rules for building software projects. They define dependencies between files and actions to be taken to build or update target files.

## When, Why, and How to Use Makefiles

Makefiles are used when you have a project with multiple source files and dependencies between them. They are especially useful for large projects where recompiling only the necessary files can save time. Makefiles are typically used in C/C++ projects, but they can be used for any type of project.

To use Makefiles, you need to create a file named `Makefile` or `makefile` in the root directory of your project. This file will contain rules for building your project.

## Rules in Makefiles

Rules in Makefiles define how to build target files from source files. Each rule consists of a target, dependencies, and actions to be taken. For example:

```
target: dependencies
    actions
```

## Explicit and Implicit Rules

- **Explicit rules:** These are rules that explicitly specify how to build a target file from its dependencies.
- **Implicit rules:** These are rules that are predefined in Make and can be used without explicitly specifying them in the Makefile. For example, Make knows how to compile a `.c` file into a `.o` file without needing an explicit rule.

## Common / Useful Rules

Some common and useful rules in Makefiles include:

- **`all`:** A rule that builds all the targets in the project.
- **`clean`:** A rule that removes all generated files, typically object files and executables.
- **`install`:** A rule that installs the built software onto the system.
- **`uninstall`:** A rule that uninstalls the software from the system.
- **`test`:** A rule that runs the project's test suite.

## Variables in Makefiles

Variables in Makefiles allow you to define values that can be reused throughout the Makefile. They can be used to specify compiler options, file names, and other parameters. Variables are defined using the syntax `VAR_NAME = value` or `VAR_NAME := value`.

For example:

```
CC = gcc
CFLAGS = -Wall -O2
```

Variables are referenced using `$(VAR_NAME)` syntax.
