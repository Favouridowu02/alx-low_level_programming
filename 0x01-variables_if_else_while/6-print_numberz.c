#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	int a;

	a = 0;
	a = a % 10;
	while (a <= 9)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
