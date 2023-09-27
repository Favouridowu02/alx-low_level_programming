#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node
 * at index index of a listint_t linked list
 * @head: a pointer to the pointer
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *delete_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
		free(delete_node);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1 && temp; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	delete_node = temp->next;
	temp->next = delete_node->next;
	free(delete_node);
	return (1);
}
