#include "main.h"

/**
 * rev_string - 
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
	for (b = 0; a >= 0 && b < a; c-- b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
