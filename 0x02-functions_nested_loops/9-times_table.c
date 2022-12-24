#include "main.h"

/**
 * times_table - Write a function that prints
 * the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prud;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1)
		{
			_putchar(',');
			_putchar(' ');

			prud = num * mult;
			if (prud <= 9)
				_putchar(' ');
			else
				_putchar((prud / 10) + '0');
			_putchar((prud % 10) + '0');
		}
		_putchar('\n');
	}
}
