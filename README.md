This activity has been created as part of the 42 curriculum by ielabdal.

libft
Description

libft is a project from the 42 curriculum whose goal is to create a personal C library containing a collection of useful functions that can be reused throughout future C projects.

The project consists of recreating several functions from the standard C library, implementing additional string and character manipulation utilities, and, as part of the bonus section, creating functions to manipulate linked lists.

The main objectives of the project are to strengthen understanding of:

C programming fundamentals

Pointers and pointer arithmetic

Memory allocation and deallocation

Strings and character manipulation

Memory manipulation

Data structures, particularly linked lists

Error handling and edge cases

Static libraries

Makefiles and compilation

Writing reusable and maintainable code

The final result is a static library named libft.a that can be linked with other C programs.

Library Description

The library is divided into three main parts.

1. Character and String Tests

These functions reproduce basic character classification and conversion functions:

Function	Description
ft_isalpha	Checks whether a character is alphabetic.
ft_isdigit	Checks whether a character is a decimal digit.
ft_isalnum	Checks whether a character is alphanumeric.
ft_isascii	Checks whether a character belongs to the ASCII character set.
ft_isprint	Checks whether a character is printable.
ft_toupper	Converts a lowercase character to uppercase.
ft_tolower	Converts an uppercase character to lowercase.
2. Memory Functions

These functions provide low-level memory manipulation and allocation:

Function	Description
ft_memset	Fills a memory area with a specified byte.
ft_bzero	Sets a memory area to zero.
ft_memcpy	Copies bytes from one memory area to another.
ft_memmove	Copies memory while handling overlapping regions safely.
ft_memchr	Searches for a byte within a memory area.
ft_memcmp	Compares two memory areas.
ft_calloc	Allocates and zero-initializes memory.
3. String Functions

The library contains several functions for working with C strings:

Function	Description
ft_strlen	Calculates the length of a string.
ft_strlcpy	Copies a string into a destination buffer with size limitation.
ft_strlcat	Appends a string to another string with size limitation.
ft_strchr	Searches for the first occurrence of a character.
ft_strrchr	Searches for the last occurrence of a character.
ft_strncmp	Compares two strings up to a specified length.
ft_strnstr	Searches for one string inside another with a length limit.
ft_strdup	Creates a dynamically allocated duplicate of a string.
ft_substr	Creates a substring from a given string.
ft_strjoin	Concatenates two strings into a newly allocated string.
ft_strtrim	Removes specified characters from the beginning and end of a string.
ft_split	Splits a string into an array of strings using a delimiter.
ft_strmapi	Applies a function to every character and creates a new string.
ft_striteri	Applies a function to every character of a string.
4. Number Conversion
Function	Description
ft_atoi	Converts the initial numerical portion of a string into an integer.
ft_itoa	Converts an integer into a dynamically allocated string.
5. File Descriptor Output

These functions provide simple output operations using file descriptors:

Function	Description
ft_putchar_fd	Writes a character to a file descriptor.
ft_putstr_fd	Writes a string to a file descriptor.
ft_putendl_fd	Writes a string followed by a newline.
ft_putnbr_fd	Writes an integer to a file descriptor.
6. Linked List Functions

This part extends the library with functions for manipulating singly linked lists.

The list structure is defined as:

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}   t_list;


The linked-list functions are:

Function	Description
ft_lstnew	Creates a new list node.
ft_lstadd_front	Adds a node to the beginning of a list.
ft_lstsize	Counts the number of nodes in a list.
ft_lstlast	Returns the last node of a list.
ft_lstadd_back	Adds a node to the end of a list.
ft_lstdelone	Deletes one node and frees its content using a provided function.
ft_lstclear	Deletes and frees every node in a list.
ft_lstiter	Applies a function to the content of every node.
ft_lstmap	Creates a new list by applying a function to every node.

These functions provide a basic reusable linked-list API and introduce the use of function pointers together with dynamically allocated data structures.

Instructions
Requirements

The project requires:

A Unix-like operating system

A C compiler such as cc, gcc, or clang

make

Compilation

Clone the repository and enter the project directory:

git clone <repository-url>
cd libft


Compile the mandatory part of the library:

make


This creates the static library:

libft.a


To compile the bonus functions:

make bonus

Makefile Commands
Command	Description
make	Compiles the mandatory library.
make bonus	Compiles the bonus linked-list functions.
make clean	Removes generated object files.
make fclean	Removes object files and libft.a.
make re	Rebuilds the library from scratch.
Using the Library

Include the library header in your C source file:

#include "libft.h"


Then compile your program together with libft.a:

cc main.c libft.a -o program


Run the resulting executable:

./program


Alternatively, when the library is available in the current directory, it can be linked using:

cc main.c -L. -lft -o program

Usage Example

The following example uses ft_strdup to create a dynamically allocated copy of a string:

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *original;
    char    *copy;

    original = "Hello, libft!";
    copy = ft_strdup(original);
    if (copy == NULL)
        return (1);

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);
    return (0);
}


Compile and execute it with:

cc main.c libft.a -o test
./test

Project Structure

A typical project structure is:

libft/
├── Makefile
├── libft.h
│
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
│
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
│
├── ft_lstnew_bonus.c
├── ft_lstadd_front_bonus.c
├── ft_lstsize_bonus.c
├── ft_lstlast_bonus.c
├── ft_lstadd_back_bonus.c
├── ft_lstdelone_bonus.c
├── ft_lstclear_bonus.c
├── ft_lstiter_bonus.c
└── ft_lstmap_bonus.c

Technical Choices

The library is implemented entirely in C and follows the constraints imposed by the 42 curriculum.

The implementation focuses on:

Avoiding unnecessary dynamic allocations.

Correctly managing allocated memory.

Handling boundary conditions and edge cases.

Using pointers efficiently.

Keeping functions small and focused on a single responsibility.

Following the 42 coding standard and Norm requirements.

Building the project as a static library using ar.

Dynamic memory is used where required by the function's behavior, such as ft_calloc, ft_strdup, ft_substr, ft_split, and ft_itoa. Allocated memory is expected to be properly released by the caller when ownership is transferred.

Resources
Documentation

man pages on Unix systems:

man strlen

man memset

man memcpy

man memmove

man malloc

man free

man write

C standard library documentation

The 42 project subject and official project guidelines

C compiler documentation

GNU Make documentation

General References

The following topics were particularly relevant while developing the project:

C pointers and pointer arithmetic

Dynamic memory allocation

Null-terminated strings

Memory manipulation

File descriptors

Function pointers

Singly linked lists

Static libraries

Makefiles

AI Usage

AI tools were used as a supplementary learning and development resource during this project.

AI was used for tasks such as:

Clarifying the behavior and purpose of standard C library functions.

Explaining C concepts such as pointers, dynamic memory allocation, and linked lists.

Discussing possible edge cases and testing scenarios.

Helping understand compilation and Makefile concepts.

Reviewing documentation and improving the structure and clarity of this README.

The implementation of the library was developed and reviewed by the project author. AI-generated suggestions were treated as explanations or references and were not blindly copied into the project.

Author

42 Login: ielabdal

License

This project was created as part of the 42 curriculum and is intended for educational purposes.
