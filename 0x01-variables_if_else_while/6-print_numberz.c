#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	int a;

	a = 1;
	a = (char)a;
	for (a = 1; a <= 9; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
