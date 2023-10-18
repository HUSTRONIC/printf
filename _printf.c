#include "main.h"

/**
 * _printf - function that will work like 
 * the normal printf .
 * authors: Hussein Ssesanga and Andrew S.
 * @format: string pointer.
 * Return: number of characters not including the null.
 */

int _printf(const char *format, ...)
{
	int t_tal_c_ter = 0, i_ter = 0;
	va_list ars;
	char k;
	int (*n_p)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ars, format);

	while (format[i_ter])
	{
		if (format[i_ter] == '%')
		{
			i_ter++;
			k = format[i_ter];

			if (k == '%')
			{
				write(1, &k, 1);
				t_tal_c_ter += 1;
				i_ter++;
			}
			else if (k == 'c' || k == 's' || k == 'd' || k == 'b' || k == 'i')
			{
				n_p = formt_specifier(k);
				t_tal_c_ter = t_tal_c_ter + n_p(ars);
				i_ter++;
			}
			else
				return (-1);
		}
		else
		{
			write(1, (format + i_ter), 1);
			t_tal_c_ter += 1;
			i_ter++;
		}
	}
	va_end(ars);
	return (t_tal_c_ter);
}
