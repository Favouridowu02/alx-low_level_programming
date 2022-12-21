#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of single-digit numbers.
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	return (0);
}
