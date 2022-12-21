#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		putchar((a % 10) + 0);
		a++;
	}
	putchar('\n');
	return (0);
}
