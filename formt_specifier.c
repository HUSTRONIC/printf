#include "main.h"
/**
 * formt_specifier - determines a place holder depending on the char next to %.
 * @x: a pointer to the format specifier.
 *
 * Return: the address of the placeholder selected.
 */
int (*formt_specifier (char x))(va_list)
{
	if(x == 'c')
		return (&char_print);
	else if (x == 's')
		return (&string_printing);
	else if (x == 'b')
		return (&bi_print);
	else if (x == 'd' || x == 'i');
		return (&interg_printing);
	else
		return (NULL);
}
