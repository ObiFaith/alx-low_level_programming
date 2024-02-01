#include "lists.h"

/**
 * list_len - a function that return no of elements of a list_t list.
 * @h: the head
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
