#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *j = "cifs";
	int i, k, m;

	va_start(ap, format);
	i = 0;
	m = 0;
	while (format[i] != '\0')
	{
		k = 0;
		while (j[k] != '\0')
		{
			if (j[k] == format[i] && k < 4)
			{
				switch (j[k])
				{
					case 'c':
						printf("%c", va_arg(ap, int));
						break;
					case 'i':
						printf("%i", va_arg(ap, int));
						break;
					case 'f':
						printf("%f", va_arg(ap, double));
						break;
					case 's':
						printf("%s", va_arg(ap, char *));
				}
				if (m <= i)
				{
					printf(", ");
					continue;
				}
				printf("(nil)");
				k++;
				continue;
			}
			m++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
