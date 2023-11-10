#include "lists.h"
/**
 * add_dnodeint -  a function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: a pointer to the pointer of head
 * @n: the data to be added
 * Return: the newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	new->prev = *head;
	(*head)->next = new;
	(*head)->prev = NULL;
	return (new);
}
