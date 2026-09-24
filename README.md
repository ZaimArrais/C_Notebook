# C Learning

My personal notebook for learning C and lower level system development!

## Requirements

A C compiler is required.

This repository is primarily developed using **GCC**, but the programs should generally work with other standards-compliant C compilers.

Check that GCC is installed with:

```bash
gcc --version
```

## Compiling and Running

Most files in this repository are standalone exercises and can be compiled individually.

### Compile

```bash
gcc main.c -o main
```

For another file:

```bash
gcc arithmetic.c -o arithmetic
```

### Run

On Linux or macOS:

```bash
./main
```

On Windows:

```bash
./main.exe
```

## Compiler Warnings

When compiling manually, additional warnings can be enabled:

```bash
gcc -Wall -Wextra -Wpedantic main.c -o main
```

These warnings are useful while learning because they can reveal potential mistakes even when the program successfully compiles.

For debugging information, add `-g`:

```bash
gcc -Wall -Wextra -Wpedantic -g main.c -o main
```
