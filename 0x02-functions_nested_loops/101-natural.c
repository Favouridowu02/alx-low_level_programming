#include "main.h"

/**
 * main - If we list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23. Write a program
 * that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 */
int main(void)
{
	int num3 num5;

	for (num3 = 3; num3 <= 1024; num3 += 3)
	{
		for (num5 = 5; num5 <= 1024; num5 += 5)
		{
			printf("%d", num3);
			printf("%d", num5);
		}
		printf("\n")
	}
}
