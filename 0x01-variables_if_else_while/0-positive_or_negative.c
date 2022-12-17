#include <stdlib.h>
#include <time.h>

/**
 * main -Entrypoint
 * Return: it returns the value
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is equal to zero", n);
}
return (0);
}
