#include "main.h"

/**
 * _printf - function that print stdout
 *
 * @format: character string
 *
 * Return: number of character
 */

int _printf(const char *format, ...)
{
	va_list specifier;
	unsigned int  z;
	unsigned int r_char = 0;
	unsigned int r_c = 0;

	if (format != NULL)
	va_start(specifier, format);
	for (z = 0; format[z] != '\0'; z++)
	{
		if (format[z] != '%')
		{
			ptchar(format[z]);
		}
		else if (format[z + 1] == 'c')
		{
			ptchar(va_arg(specifier, int));
			z++;
		}
		else if (format[z + 1] == 's')
		{
			r_c = ptstring(va_arg(specifier, char *));
			z++;
			r_char += (r_c - 1);
		}
		else if (format[z + 1] == '%')
		{
			ptchar('%');
			z++;
		}
		else if ((format[z + 1]) == 'd' || (format[z + 1] == 'i'))
		{
			p_num(va_arg(specifier, int) + '0');
			z++;
		}
		r_char += 1;
	}
	va_end(specifier);

	return (r_char);
}
