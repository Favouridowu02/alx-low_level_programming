#include "main.h"

/**
 * _strlen - returns the length of the string
 * @b: the string
 *
 * Return: returns the length of the string
 */
int _strlen(const char *b)
{
	int i = 0;

	while (b[i] != 0)
		i++;
	return (i);
}

/**
 * _formula - returns the integer value of each bit
 * @a: the power
 * @b: the bit
 *
 * Return: the integer value of the bit
 */
int _formula(int a, int b)
{
	if (a == 1)
		return b;
	if (b == 0)
		return (0);
	if (a == 0)
		return (1);
	b *= 2;

	return (_formula(a - 1, b));
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: returns the number in interger
 */
unsigned int binary_to_uint(const char *b)
{
	int k = 0;
	int c = 0;
	int j = _strlen(b);
	int z = j;

	if (b == NULL)
		return (0);
	while (k < j)
	{
		if (b[k] != '1' && b[k] != '0')
		{
			return (0);
		}
		k++;
	}
	k = 0;

	while (k < j)
	{
		c += _formula(z, (b[k] - '0'));
		z--;
		k++;
	}
	return (c);
}
