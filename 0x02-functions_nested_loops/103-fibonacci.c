#include <stdio.h>

/**
 * main - prints the sum of the first even fibonaci sequence
 * that is less than 4000000
 * Return: returns 0
 */
int main(void)
{
	long int i = 0;
	long int j, k, sum;

	j = 1;
	k = 2;
	sum = j + k;

	do {
		j = k;
		k = sum;
		sum = j + k;
		if ((sum % 2) == 0 || sum == 4000000)
			i += sum;
	}
	while (sum <= 4000000);
	printf("%ld", i);
	return (0);
}
