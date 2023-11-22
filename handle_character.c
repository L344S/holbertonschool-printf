#include "main.h"

/**
 * handle_character - Handles the 'c' format specifier
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_character(va_list arguments_list)
{
	char c = va_arg(arguments_list, int);

	write(1, &c, 1);

	return (1);
}
