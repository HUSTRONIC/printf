#include "main.h"
/**
 * interg_printing - prints integer and decimals
 * @numz: arguments.
 *
 * Return: integers printed..
 */
int interg_printing(va_list numz)
{
	int lnth;

	lnth = print_num(numz);
	return (lnth);
}
/**
 * print_num - prints a number and sends it to this function.
 * @arg: List of argumments.
 *
 * Return: Number of arguments printed.
 */
int print_num(va_list arg)
{
	int x, div, lnth;
	unsigned int num;

	x = va_arg(args, int);
	div = 1;
	lnth = 0;

	if (n < 0)
	{
		lnth += _putchar('-');
		num = x * (-1);
	}
	else
		num = x;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
	lnth += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (lnth);
}
