#include "main.h"

/**
 * print_line - Write a function that draws a straight
 * line in the terminal.
 * @n: the interger parameter to be passed
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
