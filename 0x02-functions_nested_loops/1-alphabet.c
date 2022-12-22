#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: returns 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
