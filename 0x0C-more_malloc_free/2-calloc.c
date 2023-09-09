#include "main.h"

/**
 * _calloc - Write a function that allocates memory for an array, using malloc.
 * @nmemb:
 * @size: 
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
	return (malloc(nmemb * size));
}
