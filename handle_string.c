#include "main.h"

/**
 * handle_string - Handles the 's' format specifier
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_string(va_list arguments_list)
{
	char *string = va_arg(arguments_list, char*);
	int len_string;

	if (string == NULL)
	{
		string = "(null)";
	}

	len_string = strlen(string);

	if (len_string < 0)
	{
		return (-1);
	}

	write(1, string, len_string);

	return (len_string);
}
