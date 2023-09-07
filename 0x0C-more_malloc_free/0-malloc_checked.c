#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: the parameter to be passed
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *k;

	k = malloc(b * sizeof(k));

	if (k == NULL)
	{
		exit(98);
	}

	else
		return (k);
}
