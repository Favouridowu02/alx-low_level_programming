#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index, starting from zero
 *
 * Return: retunrs 1 on succces and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	b = ~(1 << index);
	*n = *n & b;
	return (1);
}
