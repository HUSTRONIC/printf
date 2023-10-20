#include "main.h"
#include <stdarg.h>

/**
 * wrapper_interg_printing - Wrapper for interg_printing function.
 * @arg_list: Argument list with format specifiers.
 *
 * Return: The number of characters printed.
 */
int wrapper_interg_printing(va_list arg_list)
{
	long int i = va_arg(arg_list, long int);
	int *count = va_arg(arg_list, int *);

	return (interg_printing(i, count));
}

