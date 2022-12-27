#include "main.h"

/**
 *
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
