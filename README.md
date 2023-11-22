# Custom _printf Function

## Project Presentation

This is a collaborative project created by a group of students. The goal is to implement a custom version of the `printf` function in C. The project is part of the curriculum at Holberton School.

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Follow the Betty style for code formatting (checked using `betty-style.pl` and `betty-doc.pl`).
- No global variables are allowed.
- Each file should contain no more than 5 functions.
- Prototypes of all functions should be included in the header file named `main.h`.
- Do not forget to push your header file.
- Include guard for all header files.
- Do not provide your own `_putchar` function.
- There should be one project repository per group. Cloning or forking a project repository with the same name before the second deadline may result in a 0% score.

## Authorized Functions and Macros

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Project Structure

The project is organized into multiple files, each serving a specific purpose:
- [\_printf.c](https://github.com/L344S/holbertonschool-printf/blob/main/_printf.c) - The main file containing the custom `_printf` function.
- [handle_character.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_character.c) - File handling the character conversion specifier.
- [handle_format.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_format.c) - File managing the format specifier.
- [handle_integer.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_integer.c) - File dealing with the integer conversion specifier.
- [handle_percent.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_percent.c) - File for handling the percent symbol conversion specifier.
- [handle_string.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_string.c) - File for handling the string conversion specifier.

## Functionality

- The `_printf` function returns the number of characters printed (excluding the null byte used to end output to strings).
- It writes output to stdout, the standard output stream.
- The format string is composed of zero or more directives.
- Handle the following conversion specifiers: `c`, `s`, `%`.
- Additionally, handle the conversion specifiers: `d`, `i`.

## How to Use

To use the custom `_printf` function, include the "main.h" header file in your C program and call the function with the desired format string.

```
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return 0;
}
```

## Note

- This project includes the creation of a man page for the custom `_printf` function.

## Authors

- [Léa](https://github.com/L344S)
- [Maël](https://github.com/maelpseudo)

