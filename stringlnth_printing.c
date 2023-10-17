#include "main.h"
/**
 * _slength - calculates and returns the length of a string.
 * @s: pointer to the string to be evaluated.
 *
 * Return: string length
 */
int _slength(char *s)
{
	int lnth = 0;

	while(*s != '\0')
	{
		lnth++;
		s++;
	}
	return (lnth);
}
/**
 * _cslength - returns the length for a constant character pointer string.
 * @s: pointer to string to be printed.
 *
 * Return: string lenght.
 */
int _cslength(const char *s)
{
	int lnth = 0;

	while (*s != '\0')
	{
		lnth++;
		s++;
	}
	return (lnth);
}
