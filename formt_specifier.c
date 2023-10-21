#include "main.h"

/**
 * format_specifier - Determinantof the placeholder
 *  @format: The string format.
 * @func_list: An array of format specifiers to be used
 * @arg_list: The argument list with format specifiers.
 *
 * Return: The number of characters printed.
 */

int format_specifier(const char *format, forma_t func_list[], va_list arg_list)
{
<<<<<<< Updated upstream
	int i, j, r_val, chars;

	chars = 0;

	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main string*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right function*/
			for (j = 0; func_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == func_list[j].sym[0])
				{
					r_val = func_list[j].func(arg_list);
					if (r_val == -1)
						return (-1);
					chars += r_val;
					break;
				}
			}
			if (func_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars = chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			chars++;
		}
	}
	return (chars);
=======
	if(x == 'c')
		return (&char_print);
	else if (x == 's')
		return (&string_printing);
	return(NULL);
>>>>>>> Stashed changes
}
