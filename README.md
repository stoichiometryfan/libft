*This activity has been created as part of the 42 curriculum by ielabdal.*

# libft

## Description

**libft** is the first major project of the 42 core curriculum. Its goal is to make students
build their own C standard library from scratch, re-implementing a selection of functions from
the standard C library (`libc`), along with a set of additional utility functions and a small
linked-list toolkit.

The purpose of this project goes far beyond simply copying `libc` behavior. It forces the
programmer to:

- Understand exactly how common C library functions work internally (memory handling,
  string manipulation, character checks, type conversion, etc.).
- Get comfortable with pointers, memory allocation, and manual memory management.
- Learn to write clean, reusable, well-tested C code.
- Build a personal toolbox (`libft.a`) that will be reused in almost every subsequent
  42 project, since the school does not allow the use of the real `libc` equivalents for
  many exercises.

In short, `libft` is both a learning exercise in low-level C programming and the foundation
library every later project will link against.

## Instructions

### Compilation

The project is compiled using the provided `Makefile`, which produces a static library named
`libft.a`.

```bash
make            # compiles all mandatory (and bonus, if implemented) source files into libft.a
make bonus      # compiles the bonus part only (if the Makefile separates them)
make clean      # removes object files
make fclean     # removes object files and the library itself
make re         # fclean + make (full rebuild)
```

### Installation / Usage

To use `libft` in another project:

1. Copy or clone this repository (or add it as a submodule) into your project.
2. Run `make` inside the `libft` directory to generate `libft.a`.
3. Include the header in your source files:

   ```c
   #include "libft.h"
   ```

4. Compile and link your project against the library:

   ```bash
   gcc your_file.c -L./libft -lft -I./libft -o your_program
   ```

   - `-L./libft` tells the compiler where to find `libft.a`.
   - `-lft` links against `libft.a`.
   - `-I./libft` tells the compiler where to find `libft.h`.

### Norm compliance

All source files respect the 42 Norm (Norminette). No global variables are used outside of what
is explicitly allowed, and no function leaks memory or crashes on edge cases (NULL pointers,
empty strings, zero-length allocations, etc.).

## Library Description

`libft.a` re-implements a large part of the standard C library and adds extra helper functions,
organized into the following groups:

### 1. Libc function re-implementations

- **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
  `ft_toupper`, `ft_tolower`
- **String functions**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`,
  `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Memory functions**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`,
  `ft_memcmp`
- **Conversion**: `ft_atoi`
- **Allocation**: `ft_calloc` (bonus-style safe allocator)

### 2. Additional (non-libc) utility functions

These functions do not exist in the standard library but are commonly needed and are required
by the subject:

- **`ft_substr`**: allocates and returns a substring from a given string.
- **`ft_strjoin`**: allocates and returns a new string resulting from the concatenation of two
  strings.
- **`ft_strtrim`**: allocates and returns a copy of a string with specified leading and trailing
  characters removed.
- **`ft_split`**: allocates and returns an array of strings obtained by splitting a string using
  a delimiter character.
- **`ft_itoa`**: allocates and returns a string representing the integer received as an
  argument.
- **`ft_strmapi`**: applies a function to each character of a string to create a new string.
- **`ft_striteri`**: applies a function to each character of a string, passing its index,
  modifying the string in place.
- **`ft_putchar_fd`**, **`ft_putstr_fd`**, **`ft_putendl_fd`**, **`ft_putnbr_fd`**: output
  functions that write a character, string, string with newline, or integer to a given file
  descriptor.

### 3. Linked list functions

This part of `libft` provides a minimal, reusable singly linked list implementation
(`t_list` struct) and the functions needed to manipulate it. This is not a bonus part of the
project — it is a required component of the library:

- **`ft_lstnew`**: creates a new list node (element) with the given content.
- **`ft_lstadd_front`**: adds a new node at the beginning of the list.
- **`ft_lstsize`**: counts the number of nodes in a list.
- **`ft_lstlast`**: returns the last node of the list.
- **`ft_lstadd_back`**: adds a new node at the end of the list.
- **`ft_lstdelone`**: deletes a single node, using a custom `free` function on its content.
- **`ft_lstclear`**: deletes and frees an entire list, using a custom `free` function on each
  node's content.
- **`ft_lstiter`**: iterates through the list and applies a given function to each node's
  content.
- **`ft_lstmap`**: iterates through the list, applies a function to each node's content, and
  creates a new list with the results, freeing the original on allocation failure.

Together, these functions provide a lightweight, generic linked-list toolkit that can be reused
in any project needing dynamic list structures (e.g., parsing tokens, managing dynamic
collections of data).

## Resources

### Classic references

- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language) — foundational reference for C semantics.
- [C Standard Library documentation – cppreference.com](https://en.cppreference.com/w/c) — detailed reference for original `libc` function behavior and edge cases.
- [Linux man pages (man 3)](https://man7.org/linux/man-pages/dir_section_3.html) — official manual pages for each re-implemented function (e.g., `man 3 strlen`, `man 3 memcpy`).
- [42 Norminette documentation](https://github.com/42School/norminette) — official rules for code formatting required by the school.
- Beej's Guide to C Programming — general reference on pointers, memory management, and C idioms.

### AI usage disclosure

AI (Claude) was used as a **learning tool** during this project: clarifying how certain standard
C library functions behave (edge cases, return values, prototypes), explaining C concepts such
as pointers, memory allocation, and linked lists, and helping understand the structure expected
for this `README.md` based on the project subject's requirements. AI was not used to write,
debug, or design the C source code, function logic, or Makefile of the `libft` project — all
implementation work was done independently by the author.
