#include "main.h"


/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: thr string parameter to be passed
 */
void print_rev(char *s)
{
	int i = 0;

	for (; *s++;)
	{
		++i;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
