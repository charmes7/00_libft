# Libft - Custom C Library

## Overview

`Libft` is the first core project at **42 Kuala Lumpur (42KL)**. I had to develop a custom C library (`libft.a`) from scratch by reimplementing functions found in the standard C library (`libc`), along with several custom utility functions and a bonus section on data structures.

This project ensures a deep understanding of low-level programming concepts, memory management, and strict coding standards.

## ✨ Project Features (Mandatory & Bonus)

This library is divided into three parts:

### **Part 1: Libc Functions (Mandatory)**

A manual re-implementation of core functions from the C standard library. This part focuses on low-level memory and string manipulation without using the original `libc` functions.

**Key Functions Include:**
* **Memory Operations:** `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_calloc`, `ft_bzero`
* **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_strchr`, `ft_strrchr`
* **Type Checking:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

### **Part 2: Additional Functions (Mandatory)**

Custom utility functions necessary for everyday programming tasks:

* **Advanced String Processing:**
    * `ft_split`: Handles dynamic memory allocation to return an array of strings, delimited by a specified character.
    * `ft_itoa`: Converts an integer into its string representation, handling all edge cases.
    * `ft_strjoin`, `ft_substr`, `ft_strtrim`
* **I/O Operations:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` (Functions that write to a specified file descriptor).

### **Part 3: Linked List Functions (Bonus Completed)**

Implementation of a set of functions to manage a singly linked list data structure, demonstrating advanced memory management and pointer manipulation.

**Key Linked List Functions:**
* `ft_lstnew`: Creates a new list node.
* `ft_lstadd_front`/`ft_lstadd_back`: Adds a node to the list.
* `ft_lstiter`: Iterates the list and applies a function to each node's content.
* `ft_lstmap`: Applies a function to all content and returns a new list.
* `ft_lstclear`/`ft_lstdelone`: Safely deletes and frees memory allocated to list nodes.

## 🛠️ Build and Usage

### **Requirements**
* A C compiler (e.g., GCC).

### **How to Compile**

To build the static library file (`libft.a`), run `make` in the root directory:

```bash
# To create libft.a with mandatory functions
make
# To clean up object files
make clean
# To remove object files and the libft.a file
make fclean
# To re-compile the library
make re
# To compile the bonus functions (includes linked list functions)
make bonus
