#include "main.h"

/**
 * _printf - function that will work like
 * the normal printf.
 * authors: Hussein Ssesanga and Andrew S.
 * @format: string containing the desired characters.
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;

	forma_t func_list[] = {
		{"c", char_print},
		{"s", string_printing},
		{"d", print_integer},
		{"i", print_integer},
		{"%", cpercent_printing},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	/*Calling format specifier function*/
	printed_chars = format_specifier(format, func_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
