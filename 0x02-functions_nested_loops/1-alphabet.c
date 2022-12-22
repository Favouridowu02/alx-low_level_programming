#include "main.h"
#include <stdio.h>

/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: returns 0
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
