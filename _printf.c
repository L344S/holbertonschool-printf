#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format character string to check
 * Description: replica of the printf function of the standard library
 * Return: number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	/* création de la variable index nécessaire à notre boucle*/
	int index;
	/* création de la variable qui va contenir le nombre de caractère imprimer*/
	int strFormat_leng = 0;

	/* création de la variable qui va contenir notre liste d'arguments */
	va_list arguments_list;

	/* Vérifier si le format est vide ou ne contient pas de '%' */
	/* si la format string est null alors on s'arrête là */
	if (format == NULL || format[0] == '\0')
		return (-1);

	/* on vient remplir notre variable avec les arguments */
	va_start(arguments_list, format);

	/* on va faire une boucle pour parcourir toute le caractère de format*/
	for (index = 0; format[index] != '\0'; index++)
	{
		/* s'il n'y a aucun format specifier alors on print*/
		if (format[index] != '%')
		{
			/* utlisation de la fonction write pour display le texte dans stdout*/
			write(1, &format[index], 1);
			/* on incrémente notre variable qui conmpte le nb de char*/
			strFormat_leng++;
		}
		else
		{
			/* si la string contient % alors on regarde le caractère qui le suit*/
			/* et on adapter la suite au format specifier*/
			index++;

			/* si le caractère qui suit le % est un c*/
			if (format[index] == 'c')
			{
				/* on récupère la valeur en argument attribué à c et on la print*/
				char c = va_arg(arguments_list, int);

				write(1, &c, 1);
				/* on incrémente le nombre de charactère imprimés*/
				strFormat_leng++;
			}
			/* si le caractère qui suit le % est un c*/
			else if (format[index] == 's')
			{
				/* on récupère la valeur en argument attribué à s*/
				char *string = va_arg(arguments_list, char*);

				int len_string = strlen(string);
				/* on print la string à la place du format specifier*/
				write(1, string, len_string);
				/* on incrémente notre variable en y ajoutant la longueur de la string*/
				strFormat_leng = strFormat_leng + len_string;
			}
			else if (format[index] == '%')
			{
				/* utlisation de la fonction write pour display le texte dans stdout*/
				write(1, &format[index], 1);
				/* on incrémente le nombre de charactère imprimés*/
				strFormat_leng++;
			}
		}
	}
	/* clean up de va_list*/
	va_end(arguments_list);

	/*on return comme demandé la nombre de caractère imprimer*/
	return (strFormat_leng);
}
