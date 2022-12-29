#include "main.h"

/**
 * print_square - Write a function that prints
 * a square, followed by a new line.
 * @size: the parameter to be passed
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');
		_putchar('\n');
	}
}
