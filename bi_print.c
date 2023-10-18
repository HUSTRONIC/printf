#include "main.h"

/**
 * bi_print - performs binary coversions.
 * @arguments: arguments to be handleed by the function.
 * Return: characters to be printed on screen.
 */

int bi_print(va_list arrgs)
{
	int h = 0;
	int number = va_arg(arrgs, int);
	int count = conv_to_bi(number, &h);

	return (count);
}
