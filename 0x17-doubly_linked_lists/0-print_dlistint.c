#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t lis
 * @h: the pointer to the head node
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
/*
 *
	while (h->prev != NULL)
	{
		h = h->prev;
	}
*/
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;
	return (i);
}
