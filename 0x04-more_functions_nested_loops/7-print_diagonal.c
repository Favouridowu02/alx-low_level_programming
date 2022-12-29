#include "main.h"

/**
 * print_diagonal - Write a function that draws
 * a diagonal line on the terminal.
 * @n: the parameter to be passed
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < n; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
