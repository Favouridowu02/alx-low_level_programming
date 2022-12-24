#include "main.h"

/**
 * times_table - Write a function that prints
 * the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mul, prud;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			prud = num * mul;
			_putchar(prud + '0');
		}
		_putchar('\n');
	}
}
