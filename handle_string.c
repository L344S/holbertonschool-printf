#include "main.h"

/**
 * handle_string - Handles the 's' format specifier
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_string(va_list arguments_list)
{
	char *string = va_arg(arguments_list, char*);

	int len_string = strlen(string);

	write(1, string, len_string);

	return (len_string);
}
