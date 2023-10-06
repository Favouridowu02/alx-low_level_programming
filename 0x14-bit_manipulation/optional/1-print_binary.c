#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		unsigned long int bit = n>>shift & 1;
		
		if (bit == 1 || flag == 1)
		{
			_putchar(bit + '0');
			flag = 1;
		}
		shift--;
	}

	if (flag == 0)
		_putchar('0');
}

