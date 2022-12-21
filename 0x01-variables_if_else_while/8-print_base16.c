#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
	}

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
