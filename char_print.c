#include "main.h"
/**
 * char_print - prints a single character.
 * @schar: characters to be printed.
 *
 * Return: 1 on success otherwise -1.
 */
int char_print(va_list schar)
{
	char s;

	s = va_arg(schar, int);
	_putchar(s);
	return (1);
}
