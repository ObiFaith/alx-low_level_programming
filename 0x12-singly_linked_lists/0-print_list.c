#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->str ? strlen(h->str) : 0, h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}
