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
{
printf("%d is positive", n);
}
if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}