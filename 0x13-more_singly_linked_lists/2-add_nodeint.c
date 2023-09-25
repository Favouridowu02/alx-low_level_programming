#include "lists.h"

/**
 * listint_t - a function that adds a new node at the beginning of a listint_t list
 * @head: a pointer to the pointer of head
 * @n: the number to be assigned to the newly created node
 *
 * Return: the address of the newly created element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
