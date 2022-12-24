#include "main.h"

/**
 * print_last_digit - Write a function that prints the last
 * digit of a number.
 * @n: the parameter to be passed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (n < 0)
		r *= -1;

	_putchar(r + '0');
	return (r);
}
