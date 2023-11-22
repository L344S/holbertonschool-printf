#include "main.h"

/**
 * handle_char - Handles the 'c' format specifier
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_char(va_list arguments_list)
{
	char c = va_arg(arguments_list, int);
	write(1, &c, 1);
	return (1);
}

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

/**
 * handle_percent - Handles the '%%' format specifier
 * Return: number of characters printed
 */
int handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * handle_int - Handles the 'd' and 'i' format specifiers
 * @arguments_list: va_list containing the arguments
 * Return: number of characters printed
 */
int handle_int(va_list arguments_list)
{
	int len_integer;
	int integer = va_arg(arguments_list, int);

	char buffer[50];
	sprintf(buffer, "%d", integer);
	len_integer = strlen(buffer);

	write(1, buffer, len_integer);

	return (len_integer);
}

/**
 * _printf - function that produces output according to a format.
 * @format: format character string to check
 * Description: replica of the printf function of the standard library
 * Return: number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int index, strFormat_leng = 0;

	va_list arguments_list;

	if (format == NULL || format[0] == '\0')
		return (-1);

	va_start(arguments_list, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			write(1, &format[index], 1);
			strFormat_leng++;
		}
		else
		{
			index++;

			if (format[index] == 'c')
			{
				strFormat_leng = strFormat_leng + handle_char(arguments_list);
			}
			else if (format[index] == 's')
			{
				strFormat_leng = strFormat_leng + handle_string(arguments_list);
			}
			else if (format[index] == '%')
			{

				strFormat_leng = strFormat_leng + handle_percent();
			}
			else if (format[index] == 'd' || format[index] == 'i')
			{

				strFormat_leng = strFormat_leng + handle_int(arguments_list);
			}
		}
	}

	va_end(arguments_list);

	return (strFormat_leng);
}
