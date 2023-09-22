#include "lists.h"

/**
 * _strlen - return the string lenght
 * @s: the string to be passed
 * Return: lenght of s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: the link that head points too
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->next = *head;
	*head = newNode;
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	return (newNode);
}
