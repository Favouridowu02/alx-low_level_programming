#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a
 * string
 * @s: value to be passed
 * Return: (i)the length of the string
 */
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
