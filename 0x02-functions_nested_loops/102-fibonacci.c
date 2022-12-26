#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	int i, j, sum = 0;

	for (i = 0; i <= 50; i++)
	{
		j = 0;

		sum = i + j++;
		printf("%d ,", sum);
	}
	printf("%d", sum);
	return (0);
}
