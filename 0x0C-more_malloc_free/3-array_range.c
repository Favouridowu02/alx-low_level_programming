#include "main.h"

/**
 * array_range - Write a function that creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Description: The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *k;
	int i;

	k = (int *)malloc((max - min + 1) * sizeof(int));
	i = 0;
	if (k == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (; min < max; min++, i++)
		k[i] = min;
	return (k);
}
