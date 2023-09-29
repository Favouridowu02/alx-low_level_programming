#include "main.h"
#include <math.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, j;
	unsigned int d;

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	if (b == NULL)
		return (0);
	j = 0;
	d = 0;
	for (i = 0; len > i; len--)
	{
		d += (b[len] + '0') * pow(2, j);
		j++;
	}
	return (d);
}
