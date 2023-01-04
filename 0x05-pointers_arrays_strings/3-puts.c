#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		1++;
	}
}
