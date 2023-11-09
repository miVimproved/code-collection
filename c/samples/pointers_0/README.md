# Pointers 0

Pointers are very important in the C programming language.

My analogy for pointers is as follows. Imagine there's a house, now if someone wanted to have a copy of that house, you could take a photo of everything, and send that over. It takes a long time to copy the house though. If you instead give them the address of the house, they can go take a look at the house themselves, however also being able to change the house. Sometimes in C, you do want someone to be able to change your variables, so we use pointers to let them do that.

The `&` and `*` chain.

Every time you use a `&` on a variable, you get it's address.

```c
int x; // Let's assume we had an integer x that was declared.
int* x_pointer = &x; // This is how we'd get the address of x.
```

Every time you use a `*` on a pointer, you get what it's pointing to.

```c
int* x_pointer; // Let's assume we had an integer pointer x_pointer that was declared.
int y = *x_pointer; // This is how we'd get the value that x_pointer is pointing to.
```

## Topics

- Pointers.

## How to run

- Linux:
  - Type "make" into the console.
- Windows:
  - TODO

## Tinker Ideas

- In function `int Add_No_P(int, int)`, make the entire function body just be `return a + b;`. What happens?
- Try to change the value that `a` or `b` is pointing to in `void Add_All_GOOD(int*, int*, int*)`. What happens?
- Move `void SetResZero(int*)` to underneath of `int main()`. What happens?
- Can you find a way to call `int Add_No_P(int, int)` inside of the other addition functions and have the code still work?

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
