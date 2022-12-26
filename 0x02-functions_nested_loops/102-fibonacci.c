#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	int i, j, k;
	long int sum;

	j = 1;
	k = 2;
	sum = j + k;
	printf("%d, %d, ", j, k);

	for (i = 3; i <= 50; i++)
	{
		printf("%d ", sum);
		j = k;
		k = sum;
		sum = j + k;
	}
	printf("\n");
	return (0);
}
