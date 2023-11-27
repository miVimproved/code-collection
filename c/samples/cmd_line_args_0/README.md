# Command Line Argumens 0

**I'm not done writing the readme file, but I have finished the code.**

Command line arguments are very important in making programs. They are used by the host to pass arguments into functions. However, they can be ignored by the program by making `int main(int argc, char** argv)` into `int main(void)`.

## Topics

- Arguments.
- Printing.
- C-Strings.

### Argc and argv

Argc and Argv is a way for the operating system, or whatever higher program is running this program to pass in arguments to the program. `Argc` is an integer, which is the amount of arguments that `argv` is pointing to. `Argv` is a `char**`, which is an array of pointers to `c-strings`. There are `argc` number of `c-strings` held in `argv`.

## How to run

- Linux:
  - Run `make compile` to compile the program.
  - Run `./cmdlineargs %s` replacing `%s` with the arguments you want to pass in.
  - Run `make clean` to remove the build files.
- Windows:
  - TODO

## Tinker Ideas

- Pass in no arguments to the program. What happens?
- Make the `<` on line 39 into a `<=`. What happens?

## Todo list

### Known Issues

- Windows has nothing yet lmao.

### Setup

- [X] Linux.
  - [X] Makefile.
  - [X] Compilers.
    - [X] GCC.
    - [X] Clang.

- [ ] Windows.
  - [ ] Batch File.
  - [ ] Compilers.
    - [ ] MSVC.
    - [ ] GCC.
