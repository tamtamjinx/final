*This project has been created as part of the 42 curriculum by rualmasr*

## Description

This project focuses on recreating standard C library functions from scratch to build a deeper understanding of how they work internally. It aims to improve knowledge of the C language, pointers, memory management, and error handling while developing reusable functions that will serve as a foundation for future projects within the 42 curriculum.

## Library Details ( libft.a)


The custom library contains reimplemented standard C functions divided into two main categories :

1. ### Libc Functions
   
Functions that mimic standard library behavior ( using the ft_prefix):
* Meomry Manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* String Manipulation and Inspection : `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin` , `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* Character Checks and Conversions : `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* Numeric Conversion and Allocation: `ft_atoi`, `ft_itoa`, `ft_calloc`
* Output Function : `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

2. ### Linked Lists
   
Functions designed to manipulate single linked lists ( t_list structure):

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation
The project comes with a robust Makefile that compiles the source files into the static library `libft.a`.

* Compile the main library: 

 ```bash
 make
  ```

* Clean up object files:

```bash
make clean
```

* Clean up object files and the compiled library( libft.a)


```bash
make fclean
```


* Re-compile everything from scratch :

```bash
make re
```

### Usage
  To use the library in your own C projects:
1. Include the header in your source files:

```C
#include "libft.h"
```

2. Compile your program by linking the library:

```bash
gcc -Wall -Wextra -Werror your_program.c libft.a
```

   
## Resources and References

* [Makefile tutorial](https://makefiletutorial.com/)
* [Memory allocation](https://www.youtube.com/watch?v=R0qIYWo8igs)
* [header file](https://www.geeksforgeeks.org/c/header-files-in-c-cpp-and-its-uses/)
* [linked list](https://www.geeksforgeeks.org/c/linked-list-in-c/),[single linked list](https://www.youtube.com/watch?v=DneLxrPmmsw)

##### I used AI tools strictly to clarify basic theoretical concepts after initial research. All code and documentation were written entirely by hand.
