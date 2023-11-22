# Custom _printf Function

## Project Presentation

This is a collaborative project created by a group of students. The goal is to implement a custom version of the `printf` function in C. The project is part of the curriculum at Holberton School.

## Project Structure

The project is organized into multiple files, each serving a specific purpose:
- [\_printf.c](https://github.com/L344S/holbertonschool-printf/blob/main/_printf.c) : The main file containing the custom `_printf` function.
- [handle_character.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_character.c) : File handling the character conversion specifier.
- [handle_format.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_format.c) : File managing the format specifier.
- [handle_integer.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_integer.c) : File dealing with the integer conversion specifier.
- [handle_percent.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_percent.c) : File for handling the percent symbol conversion specifier.
- [handle_string.c](https://github.com/L344S/holbertonschool-printf/blob/main/handle_string.c) : File for handling the string conversion specifier.

## Functionality

- The `_printf` function returns the number of characters printed (excluding the null byte used to end output to strings).
- It writes output to stdout, the standard output stream.
- The format string is composed of zero or more directives.
- Handle the following conversion specifiers: `c`, `s`, `%`.
- Additionally, handle the conversion specifiers: `d`, `i`.

## How to Use

To use the custom `_printf` function, include the "main.h" header file in your C program and call the function with the desired format string.

```c
#include "main.h"

int main(void)
{
    /* Print a string */
    _printf("Hello, %s!\n", "World");

    /* Print a character */
    _printf("The first letter of the name Holberton is : %c\n", 'H');

    /* Print an integer */
    _printf("We are students from cohort C%d.\n", 22);

    /* Print a percent symbol */
    _printf("We hope to get 100%% on this project.\n");

    /* Combining multiple format specifiers */
    _printf("Nicknamed %s, she was one of the %d programmers of the %cNIAC.\n", "Betty", 6, 'E');

    return 0;
}
```
## Installation

Use the following command to install the custom `_printf` function:

```bash
# Clone the repository
git clone https://github.com/L344S/holbertonschool-printf.git

# Navigate to the project directory
cd holbertonschool-printf

# Compile the files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```
## Note

- This project includes the creation of a man page for the custom `_printf` function.
```bash
# Display the man page of the _printf function
man ./_printf.3.gz
```

## Authors

- [Léa](https://github.com/L344S)
- [Maël](https://github.com/maelpseudo)

