#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: the number of arguments to be passed
 *
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0U; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
