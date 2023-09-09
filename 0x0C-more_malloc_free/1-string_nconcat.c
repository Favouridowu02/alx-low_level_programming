#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings
 * Description: The returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2, and null
 * terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: The first parameter to be passed
 * @s2: The second parameter to be passed
 * @n: bytes
 * Return: The concatenated value to be return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int i, j, x;

	if (s1 == NULL)
		x = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			continue;
	if (s2 == NULL)
		n = 1;
	else
		for (j = 0; s2[j] != '\0'; j++)
			continue;
	k = malloc((n + j + i) * sizeof(char));
	if (k == NULL)
		return (NULL);
	if (n > j)
		n = j;
	for (x = 0; x < i; x++)
		k[x] = s1[x];
	for (x = 0; x < n; x++)
		k[i + x] = s2[x];
	return (k);
}
