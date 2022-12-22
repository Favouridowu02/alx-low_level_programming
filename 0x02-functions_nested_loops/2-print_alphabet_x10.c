#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int b = 0;
	char a;

	while (b <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		putchar('\n');
		b++
	}
}
