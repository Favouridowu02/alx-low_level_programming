#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	int i;
	long int j, k;
	long int sum;

	j = 1;
	k = 2;
	sum = j + k;
	printf("%ld, %ld, ", j, k);

	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
			printf("%ld", sum);
		else
			printf("%ld, ", sum);
		j = k;
		k = sum;
		sum = j + k;
	}
	printf("\n");
	return (0);
}
