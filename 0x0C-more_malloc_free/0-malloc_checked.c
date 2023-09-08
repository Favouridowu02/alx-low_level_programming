#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: the parameter to be passed
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
	{
		exit(98);
	}
	return (k);
}
