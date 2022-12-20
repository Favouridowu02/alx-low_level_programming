#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return - 0
 */

int main(void)
{
char a;

if (a <= 'z')
{
for (; a != 'q' && a != 'e'; a++)
{
putchar(a);
}
}
putchar('\n');
return (0);
}
