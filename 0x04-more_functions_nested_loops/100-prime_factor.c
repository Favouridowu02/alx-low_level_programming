#include <stdio.h>

/**
 * main - Write a program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i;

	if (n % 2 == 0)
	{
		printf("%d ", 2);
		n /= 2;
	}
	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
