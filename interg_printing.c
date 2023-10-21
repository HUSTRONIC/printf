#include "main.h"

/**
 * print_integer - prints an integer
 * @list: Argument list containing the integer to be printed
 *
 * Return: The number of characters printed
 */
int print_integer(va_list list)
{
	int num = va_arg(list, int);
	int length = 0;

	if (num < 0)
	{
		length += _putchar('-');
		num = -num;
	}

	length += print_number(num);
	return (length);
}

/**
 * print_number - prints a number
 * @num: The number to be printed
 *
 * Return: The number of characters printed
 */
int print_number(int num)
{
	int div = 1;
	int length = 0;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		length += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (length);
}

