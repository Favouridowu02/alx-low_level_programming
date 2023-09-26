#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position.
 * @head: a pointer to the pointer of head
 * @idx: the index of the list where the new node should be added
 * @n: the value to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *add = *head;
	unsigned int i;

	i = 0;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	while (add && i < idx)
	{
		add = add->next;
		i++;
	}
	if (i == idx)
	{
		temp->n = n;
		temp->next = *head;
		add = temp;
		return (*head);
	}
	else
		return (NULL);
}
