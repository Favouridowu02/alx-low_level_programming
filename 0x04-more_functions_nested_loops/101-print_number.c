#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: the parameter to be passed
 */
void print_number(int n)
{
	if (n > 9)
		_putchar((n / 10) + '0');
	if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) % 10 + '0');
	}
	if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) % 10 '0');
		_putchar((n / 10) % 10 + '0');
	}
	_putchar((n % 10) + '0');
	_putchar('\n');
}
