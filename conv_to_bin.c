#include "main.h"

/**
 * cov_to_bi - changes to binaryformat.
 * @y: integer.
 * @count: pointer to do the counting.
 * Return: number of charactes printed.
 */

int cov_to_bi(int y, int *count)
{
	if (y / 2)
		cov_to_bi((y / 2), count);
	*count += 1;
	char_print((y % 2) + '0');
	return (*count);
}
