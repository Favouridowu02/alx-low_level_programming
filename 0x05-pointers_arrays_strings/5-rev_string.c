#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: the string parameter to be passed
 */
void rev_string(char *s)
{
	int a, b;
	char d;

	a = 0;
	while (s[a] != '\0')
		a++;
	a -= 1;
	for (b = 0; a >= 0 && b < a; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
