#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	char a;

	a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
