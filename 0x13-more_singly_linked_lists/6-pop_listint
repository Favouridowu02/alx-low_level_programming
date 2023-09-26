#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: a pointer to the pointer of head
 *
 * Return: return the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	if (*head)
	{
		listint_t *temp;

		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (0);
		temp->n = (*head)->n;
		temp->next = (*head)->next;
		free(*head);
		*head = temp->next;
		return (temp->n);
	}
	else
		return (0);
}
