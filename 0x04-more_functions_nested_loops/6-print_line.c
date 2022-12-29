#include "main.h"

/**
 * print_line - Write a function that draws a straight
 * line in the terminal.
 * @n: the interger parameter to be passed
 */
void print_line(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
			_putchar('#');
		_putchar('\n');
	}
}
