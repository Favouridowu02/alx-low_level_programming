#include "main.h"
#include <string.h>

/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb: The number of elements
 * @size: The size of each element
 * Description: The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	memset(k, 0, (nmemb * size));
	return (k);
}
