#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array to be passed
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0U; i < size; i++)
	{
		if (action != NULL)
			action(array[i]);
	}
}
