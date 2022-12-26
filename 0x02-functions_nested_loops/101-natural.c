#include "main.h"
#include <stdio.h>

/**
 * main - If we list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23. Write a program
 * that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: returns 0
 */
int main(void)
{
	int numx, numy;
	
	for (numx = 0; numx <= 1024; numx += 3)
	{
		printf("%d ,", numx);
		printf("%d ,", numy += 5);
	}
	putchar('\n');
	return (0);
}
