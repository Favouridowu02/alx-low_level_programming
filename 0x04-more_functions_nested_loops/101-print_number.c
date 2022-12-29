#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: the parameter to be passed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
