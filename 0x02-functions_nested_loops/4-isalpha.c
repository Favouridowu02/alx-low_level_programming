#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: the parameter to be passed
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	if ((c <= 'A' && c >= 'Z) || (c <= 'a' && c >= 'z'))
		return (1);
	else
		return (0);
}
