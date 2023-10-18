#ifndef _PRINT_MAIN_H
#define _PRINT_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * format - place holder for struct
 * @plc_h: place holder
 * @n_p: pointer for function
 */

typedef struct format
{
	char *plc_h;
	int (*n_p)(va_list arrg);
} hold;


int _putchar(char c);
int cpercent_printing(void);
int char_print(va_list schar);
int _slength(char *s);
int string_printing(va_list schara);
int _printf(const char *format, ...);
int _cslength(const char *s);
int (*formt_specifier (char x))(va_list);
int cov_to_bi(int y, int *count);
int interg_printing(long int i, int *count);


#endif
