#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: the list reference
 * @str: data value in node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node != NULL)
		last_node = last_node->next;
	last_node->node = new_node;

	return (new_node);
}
