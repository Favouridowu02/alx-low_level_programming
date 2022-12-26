#include "main.h"

/**
 * print_times_table - Write a function that prints
 * the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: the parameter to be passed
 */
void print_times_table(int n)
{
	int num, mult, prud;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prud = num * mult;
			if (prud <= 99)
			{
				_putchar(' ');
			}
			if (prud <= 9)
				_putchar(' ');
			if (prud >= 100)
			{
				_putchar((prud / 100) + '0');
				_putchar(((prud / 10)) % 10 + '0');
			}
			else if (prud >= 10 && prud <= 99)
				_putchar((prud / 10) + '0');
			_putchar((prud % 10) + '0');
		}
		_putchar('\n');
		}
	}
