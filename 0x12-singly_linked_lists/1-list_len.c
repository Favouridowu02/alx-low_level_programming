#include "lists.h"

/**
 * list_len -  a function that returns the number of elements
 * in a linked list_t list
 * @h: an instance of a node
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 1;

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
