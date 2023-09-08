#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, *k;

	i = 0;

	for (j = 0; a[j] != '\0'; j++)
		continue;
	while (n > i)
	{
		k = a[j];
		a[i] = a[j];
		n--;
		i++;
	}
}
