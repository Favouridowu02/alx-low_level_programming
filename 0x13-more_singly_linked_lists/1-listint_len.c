#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list
 * @h: an instance of a node
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			i++;
		h = h->next;
	}
	return (i);
}
