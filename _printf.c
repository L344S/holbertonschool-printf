#include "main.h"

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
			strFormat_leng += handle_format(format[index], arguments_list);
		}
	}

	va_end(arguments_list);

	return (strFormat_leng);
}
