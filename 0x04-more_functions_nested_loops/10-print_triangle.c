#include "main.h"

/***
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: the parameter to be passed
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b > 0; b--)
			_putchar(' ');
		for (c = 1; c <= a; c++)
			_putchar('#');
		_putchar('\n');
	}
}
