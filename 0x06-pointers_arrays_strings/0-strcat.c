#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry point
 * @dest: first parameter to ne passed
 * @src: second paraeter to be passed
 * Description: Write a function that concatenates two strings
 * Return: (0)exit
 */
int char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return dest;
}
