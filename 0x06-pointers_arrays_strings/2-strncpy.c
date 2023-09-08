#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest:  Pointer to the destination array where the 
 *i ontent is to be copied
 * @src: It is a pointer to the source string which will be copied
 * @n: The number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
