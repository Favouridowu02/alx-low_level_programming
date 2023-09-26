#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: a pointer to the head
 *
 * Return: return the sum or if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
