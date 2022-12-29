#include "main.h"

/***
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: the parameter to be passed
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b -= size; b >= 0; b--)
			_putchar(' ');
		_putchar('#');
		_putchar('\n');
	}
}
