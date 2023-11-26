#include "main.h"

/**
* handle_format - Handles the format specifier
* @format: The format specifier character
* @arguments_list: Variable containing the arguments of variadic function
* Description: Checks the format specifier and calls the right function
* Return: Number of characters printed
*/
int handle_format(char format, va_list arguments_list)
{
	int strFormat_leng = 0;

	/* On check le format specifier*/
	/* Si c'est un 'c' alors on appelle la fonction handle_character*/
	/* On incrémente strFormat_leng du nombre de char retourné par la func*/
	if (format == 'c')
	{
		strFormat_leng = strFormat_leng + handle_character(arguments_list);
	}
	/* Si c'est un 's' alors on appelle la fonction handle_string*/
	/* On incrémente strFormat_leng du nombre de char retourné par la func*/
	else if (format == 's')
	{
		strFormat_leng = strFormat_leng + handle_string(arguments_list);
	}
	/* Si c'est un '%' alors on appelle la fonction handle_percent*/
	/* On incrémente strFormat_leng du nombre de char retourné par la func*/
	else if (format == '%')
	{
		strFormat_leng = strFormat_leng + handle_percent();
	}
	/* Si c'est un 'd' ou 'i' alors on appelle la fonction handle_integer*/
	/* On incrémente strFormat_leng du nombre de char retourné par la func*/
	else if (format == 'd' || format == 'i')
	{
		strFormat_leng = strFormat_leng + handle_integer(arguments_list);
	}
	else if (format == 'p')
	{
		strFormat_leng = strFormat_leng + handle_pointer(arguments_list);
	}
	/* Sinon cela signifie que le format specifier n'est pas valide*/
	/* On print '%' qui a était skip et le format specifier*/
	else
	{
		write(1, "%", 1);
		write(1, &format, 1);
		strFormat_leng = strFormat_leng + 2;
	}
	return (strFormat_leng);
}
