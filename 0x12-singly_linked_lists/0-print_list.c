#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: an instance of a node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		i = 0;
		while (h->next != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
