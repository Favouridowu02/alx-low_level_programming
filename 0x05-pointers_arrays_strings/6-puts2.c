#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @s: the string parameter to be passed
 */
void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
