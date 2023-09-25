#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: an instance of a node
 *
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
