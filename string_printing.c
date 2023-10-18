#include "main.h"
/**
 * string_printing - prints string in place of s.
 * @schara: argument
 *
 * Return: string length.
 */
int string_printing(va_list schara)
{
	int lnth;
	char *a;

	a = va_arg(schara, char *);
	if (a == NULL)
	{

		a = "(null)";
		write(1, a, 1);
		return (1);
	}
	lnth = _slength(a);
	write(1, a, lnth);

	return (lnth);
}
