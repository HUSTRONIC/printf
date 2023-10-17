#include "main.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: forrmat identifier to search for.
 * Return: integer.
 */

int _printf(const char *format, ...)
{
	hold ar[] = {
		{"%c", char_print}, {"%s", string_printing}, {"%%", cpercent_printing}
	};

	va_list args;
	int z = 0, length = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

this:
	while (format[z] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (ar[k].plc_h[0] == format[k] && ar[k].plc_h[1] == format[k + 1])
			{
				length = length + ar[k].n(args);
				z = z + 2;
				goto this;
			}
			k--;
		}
		_putchar(format[z]);
		z++;
		length++;
	}
	va_end(args);
	return (length);

}
