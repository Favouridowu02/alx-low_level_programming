#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @head: the pointer to the head
 * @index: the index of the node to be returned starting form 0
 *
 * Return: returns the node of null if the node doe not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	
	i = 0;
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
