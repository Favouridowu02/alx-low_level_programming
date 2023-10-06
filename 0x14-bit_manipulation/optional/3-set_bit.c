#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index, starting from 0
 *
 * Return: returns 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1UL << index;
	*n = *n | bit;
	if (n)
		return (1);
	return (-1);
}
