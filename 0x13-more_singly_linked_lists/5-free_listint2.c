#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head: an instance of a node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
