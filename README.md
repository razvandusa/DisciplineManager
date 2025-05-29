# DisciplineManager – C++ Qt Application

This project is a desktop application developed in C++ using the Qt framework. It provides a GUI for managing academic disciplines, with support for file-based persistence and unit testing.

## Project Architecture

- `main.cpp` – Application entry point and UI selection logic.
- `file.txt` – Data file for repository initialization.
- `input.txt` – Additional input (optional for console UI).
- `CMakeLists.txt` – CMake configuration for building the project.
- `headers/` – Contains headers for GUI, service, domain, validators, etc.
- `src/` – Contains source files for the application's core logic.
- `tests/` – Includes unit test files for various components.

## Prerequisites

To build and run this application locally, make sure you have:

- **C++ compiler** (e.g., `g++`, `clang++`)
- **CMake** (version 3.3.3+)
- **Qt** development libraries (e.g., `qtbase5-dev`, `qt5-qmake`)
- Optional: **CLion** or other IDEs with CMake and Qt support

## Build and Run Instructions

1. Clone or download the repository:

```bash
git clone <repo_url>
cd DisciplineManager
```

2. Configure the project:

```bash
cd DisciplineManager
cmake .
make
```

3. Run the application:

```bash
./DisciplineManager
```

## Features

- GUI for managing disciplines
- File-based persistence
- Unit tests for core components
- Optional CLI mode (commented)

## Author

Dusa Razvan Nicolae – DisciplineManager Project (2025)
