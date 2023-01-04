#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: the string parameter to be passed
 * Return: returns the number of string values passed
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	{
		a++;
	}
	return (a);
}
