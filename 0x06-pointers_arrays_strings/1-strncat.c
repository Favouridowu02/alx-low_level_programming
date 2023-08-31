#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: the destination
 * @src: The source
 * @n: The number of characters to be copied from the source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (k = 0; src[k] != '\0';)
		k++;
	k++;
	for (j = 0; j < n && n < k; j++, i++)
		dest[i] = src[j];
	if (n <= k)
		return (dest);
	else
		return (0);
}
