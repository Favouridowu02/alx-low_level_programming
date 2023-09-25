#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new node at the
 * end of a listint_t list
 * @head: a pointer to the pointer of head
 * @n: the integer value to be added to the node data
 *
 * Return: the address of the new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	if (!add->n)
	{
		free(add);
		return (NULL);
	}
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (*head);
}
