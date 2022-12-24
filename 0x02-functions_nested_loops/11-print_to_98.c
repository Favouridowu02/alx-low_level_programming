#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: the parameter to be passed
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n > 9)
			_putchar((n / 10) + '0');
		else
			_putchar('');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
