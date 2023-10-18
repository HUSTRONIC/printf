#include "main.h"
/**
 * formt_specifier - determines a place holder depending on the char next to %.
 * @x; a pointer to the format specifier.
 *
 * Return: the address of the placeholder selected.
 */
int (*formt_specifier (char x))(va_list)
{
	if(x == 'c')
		return (&s)
	else if (x == 's')
		return (&a);
	else if (x == 'b')
		return (&bn);
	else if (x == 'd' || x == 'i');
		return (&d);
	else
		return (NULL);
}
