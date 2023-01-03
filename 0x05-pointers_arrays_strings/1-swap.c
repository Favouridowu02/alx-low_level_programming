#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: the first parameter to be passed
 * @b: the second parameter passed
 */
void swap_int(int *a, int *b)
{
	int sum;

	sum = *a;
	*a = *b;
	*b = sum;
}
