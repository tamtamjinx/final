*This project has been created as part of the 42 curriculum by tlafi.*

# Libft

## Description

Libft is a custom C static library that reimplements common standard-library functions and adds utility functions for strings, memory, numeric conversions, output, and singly linked lists. The goal is to practice pointers, allocation, memory ownership, iteration, and basic data structures while producing a reusable library for future 42 projects.

## Library contents

The library contains **43 functions**, grouped as follows:

- **Character classification and conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String inspection and copying:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`.
- **String construction and transformation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Conversion:** `ft_atoi`, `ft_itoa`.
- **File-descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

The `t_list` structure (declared in `libft.h`) stores a `void *content` pointer and a `next` node pointer. List helpers manipulate nodes, traverse the list, delete allocated content using caller-supplied callbacks, and map contents into new nodes. String-producing functions return dynamically allocated memory where documented; callers are responsible for freeing it. Functions operating on buffers require valid memory of adequate size. `ft_memcpy` requires non-overlapping ranges; use `ft_memmove` for overlapping memory.

## Instructions

Requirements: a C compiler, `make`, and `ar` on a Unix-like environment.

```sh
make          # Compile libft.a
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild from scratch
```

To use the library in another C project:

```sh
cc -Wall -Wextra -Werror -I. your_program.c -L. -lft -o your_program
./your_program
```

Include `#include "libft.h"` in the program. `libft.a` is the static archive produced by `make`. For illustrative sample `main()` functions, see `TEST_MAINS.md`; these examples are deliberately separate from the submitted `.c` files.

## Resources

- [C language reference — cppreference](https://en.cppreference.com/w/c): C types, pointers, casts, and standard-library behavior.
- [Linux manual pages — man7.org](https://man7.org/linux/man-pages/): `write(2)`, `malloc(3)`, and other Unix/C interfaces.
- [GNU Make manual](https://www.gnu.org/software/make/manual/): build rules, variables, and targets.
- [42 Norminette](https://github.com/42School/norminette): source-formatting requirements.

**AI usage:** AI assistance was used to review code, identify and debug compilation issues, suggest corrections, and clarify C language concepts and edge cases. The project functions and their behavior should be understood and independently verified before submission.

## Validation

The project is compiled with `-Wall -Wextra -Werror`. A successful compilation verifies that the sources and header declarations are consistent; it does not guarantee complete behavioral correctness or Norminette compliance. Run the official Norminette tool and your own edge-case tests in the 42 environment before submitting.
