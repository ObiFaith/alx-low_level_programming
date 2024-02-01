#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: list reference
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
