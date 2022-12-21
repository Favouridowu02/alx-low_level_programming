#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of two digits.
 * Return: returns 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		for (b = 0; b <= 9; b++)
			putchar((b % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
