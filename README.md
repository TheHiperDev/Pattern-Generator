### Pattern

A simple command-line pattern generator written in C++ 17/;
(A stupid command-line pattern that only generates a simple fucking pyramid
 which even is not a traditional pyramid like it is built, and a fucking matrix
 That's it!!!)

## Features

- Generates text patterns
- Supports command-line arguments
- Lightweight and fast
- Works on any OS

## Usage

Run the program:

Windows:

```bash
pattern.exe
```

Linux:

```bash
./pattern
```

Show help:

```bash
pattern --help
```

## Requirements

1. A C++ Compiler (GCC, Clang, MSVC)
2. Terminal knowledge (to compile the code lol)

## Installation

### Option 1: Run Directly (Any OS)

1. Download the source code
2. Open your terminal in the location where you downloaded the source code
3. Compile:
   ```bash
   g++ -o pattern pattern.cpp
   ```
4. Run the executable

### Option 2: Add to PATH (Only on Windows)

1. Create a folder (optional, but recommended)

```text
C:\Programs\bin
```
for example

2. Copy your executable into that folder.

3. Open environment table
```text
Control Panel
  -> System
  -> Advanced
  -> Environment Table
```

4. Edit the 'Path' variable under system.
5. Add:
```text
C:\Programs\bin
```

6. Open a new terminal and now you can run the executable in any directory
```bash
pattern
```

### Option 3: Install system-wide (Linux)

Copy the executable to:
```text
/usr/local/bin
```
Command:

```bash
sudo cp pattern /usr/local/bin/
```

Now you can run the executable anywhere on Linux.

## License

Bro it's a simple program made out of boredom. You can get it and do whatever
you want with it. It's free to edit and mess around with it. Open source btw.
