#include "main.h"
/**
 * dec_printing - prints integer and decimals
 * @i: integer value.
 * @count: pointer to count.
 *
 * Return: count.
 */
int dec_printing(long int i, int *count)
{
	if (i < 0)
	{
		i = i * (-1);

		_putchar('-');
		(*count) +=  1;
	}
	if (i / 10)
		dec_printing((i / 10), count);
	(*count) += 1;
	_putchar((i % 10) + '0');
	return (*count);
}
