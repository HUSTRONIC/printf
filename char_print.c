#include "main.h"
/**
 * char_print - prints a single character in place of c placeholder.
 * @schar: character to be printed.
 *
 * Return: 1 on success otherwise -1.
 */
int char_print(va_list schar)
{
	char s;

	s = va_arg(schar, int);
	write(1, &s, 1);
	return (1);
}
