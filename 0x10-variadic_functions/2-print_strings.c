#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints a series of strings
 * @separator: The string to be printed between the strings
 * @n: The number of the strings passed to the function
 *
 * Description: Write a function that prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator == NULL)
			continue;
		if (separator != NULL && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
