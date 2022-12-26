#include <stdio.h>

/**
 * main - Write a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	int i;
	long int j, k, sum;

	j = 0;
	k = 1;

	for (i = 0; i <= 98; i++)
	{
		sum = j + k;
		printf("%ld, ", sum);
		j = k;
		k = sum;
	}
	printf("\n");
	return (0);
}
