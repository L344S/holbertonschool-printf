#include "main.h"

/**
 * handle_format - Handles the format specifier
 * @format: The format specifier character
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_format(char format, va_list arguments_list)
{
	int strFormat_leng = 0;

	if (format == 'c')
	{
		strFormat_leng = strFormat_leng + handle_character(arguments_list);
	}
	else if (format == 's')
	{
		strFormat_leng = strFormat_leng + handle_string(arguments_list);
	}
	else if (format == '%')
	{
		strFormat_leng = strFormat_leng + handle_percent();
	}
	else if (format == 'd' || format == 'i')
	{
		strFormat_leng = strFormat_leng + handle_integer(arguments_list);
	}
	/*
	else if (format == '!')
	{
		write(1, "!", 1);
		strFormat_leng += 1;
	}
	*/
	else
	{
		write(1, &format, 1);
		strFormat_leng += 1;
	}

	return (strFormat_leng);
}
