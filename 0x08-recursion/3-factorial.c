#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: the number passed
 * Return: (i)The result;
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
