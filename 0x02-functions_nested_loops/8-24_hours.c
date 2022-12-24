#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int a; /* hour */
	int b; /* minute */

	for (a = 0; a < 23; a++)
	{
		for (b = 0; b < 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b / 10) + '0');
			_putchar('\n');
		}
	}
}
