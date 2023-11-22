#include "main.h"

/**
 * handle_percent - Handles the '%%' format specifier
 * Return: number of characters printed
 */
int handle_percent(void)
{
	write(1, "%", 1);

	return (1);
}
