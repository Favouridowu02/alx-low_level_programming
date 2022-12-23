#include "main.h"
#include <stdio.h>

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: is the parameter to be passed
 * Return: returns 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
