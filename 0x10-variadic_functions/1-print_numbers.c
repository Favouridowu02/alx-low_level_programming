#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers, followed
 * by a new line.
 * @separator: The string to print between numbers.
 * @n:  the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
