#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: array elements
 *
 * Return: a  pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	return (result);
}
