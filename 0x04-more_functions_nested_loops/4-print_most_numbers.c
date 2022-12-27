#include "main.h"

/**
 * print_most_numbers - Write a function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * but dont print 4 and 2
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
