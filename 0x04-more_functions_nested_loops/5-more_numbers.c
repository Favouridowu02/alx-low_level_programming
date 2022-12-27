#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the
 * numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	char c;
	int a = 1;

	while (a <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0')
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		a++;
	}
}
