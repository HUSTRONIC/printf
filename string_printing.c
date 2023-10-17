#include "main.h"
/**
 * string_printing - prints string.
 * @schara: argument
 *
 * Return: string length.
 */
int string_printing(va_list schara)
{
	int x, lnth;
	char *a;

	a = va_arg(schara, char*);
	if (a == NULL)
	{
		a = "(null)";
	}
	else
	{
		lnth = _slength(a);
		for (x = 0; x < lnth; x++)
		{
			_putchar(a[x];
			return (lnth);
		}
	}
}
