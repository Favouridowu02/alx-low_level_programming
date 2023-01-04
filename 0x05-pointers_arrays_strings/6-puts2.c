#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @s: the string parameter to be passed
 */
void puts2(char *str)
{
	int i, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (i = 0; i <= b; i += 2)
	{
		_putchar(str[i]);
	}
}
