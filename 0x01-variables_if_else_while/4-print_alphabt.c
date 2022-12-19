#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return - 0
 */

int main(void)
{
char a;
a = 'a';

while (a <= 'z')
{
if (a != 'q' || a != 'e')
{
putchar(a);
}
else
{
}
a++;
}
putchar('\n');
return (0);
}
