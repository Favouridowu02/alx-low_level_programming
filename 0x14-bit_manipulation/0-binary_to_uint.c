#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @b: the string to be pased
 * Return: the length of the string
 */
int _strlen(const char *b)
{
	int i = 0;

	while (b[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
       	unsigned int decimal_result;

	len = _strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	if (b == NULL)
		return (0);

	decimal_result = 0;
	for (i = 0; i < len; i++)
	{
		decimal_result = decimal_result * 2 + (b[i] - '0');
	}
	return (decimal_result);
}
