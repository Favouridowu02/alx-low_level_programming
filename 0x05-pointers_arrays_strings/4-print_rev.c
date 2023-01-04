#include "main.h"


/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: thr string parameter to be passed
 */
void print_rev(char *s)
{
	int i = 0, r;

	for (; *s++;)
	{
		++i;
	}
	for (i; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
