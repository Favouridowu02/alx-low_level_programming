#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str;
	int flag;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
