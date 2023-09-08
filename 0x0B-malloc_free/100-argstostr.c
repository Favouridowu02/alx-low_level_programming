#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Write a function that concatenates all the arguments
 * of your program
 * @ac: argument count
 * @av: argument vector
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, j = 0; av[i] != NULL; i++, j++)
	{
		str[j] = (char)*av[i];
	        str[++j] = "\n";
	}
	return (str);
}
