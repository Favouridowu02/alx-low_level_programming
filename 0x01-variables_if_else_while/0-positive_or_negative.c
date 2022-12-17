#include <stdio.h>

/**
 * main - Entry point
 * Return: returns a value
 */
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
	printf("is positive");
if (n < 0)
	printf("is negative");
else
	printf("is zero")
return (0);
}
