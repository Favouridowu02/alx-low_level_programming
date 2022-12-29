#include "main.h"

/**
 * print_diagonal - Write a function that draws
 * a diagonal line on the terminal.
 * @n: the parameter to be passed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n == 0)
		_putchar('\n')
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
