#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: list reference
 */

void free_list(list_t *head)
{
	list_t *first_node;
	list_t *next_node;

	first_node = head;

	if (first_node != NULL)
	{
		next = first_node->next;
		free(first_node->str);
		free(first_node);
		first_node = next;
	}

	head = NULL:
}
