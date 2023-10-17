#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


typedef struct format
{
	char *plc_h;
	int (*n)();
} hold;


int _putchar(char c);
int cpercent_printing(void);
int char_print(va_list schar);
int _slength(char *s);
int string_printing(va_list schara);
int _printf(const char *format, ...);
int _cslength(const char *s);



#endif
