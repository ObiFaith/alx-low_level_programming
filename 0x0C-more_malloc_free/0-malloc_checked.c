#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory
 *
 * Return: a pointer to the allocated memory or null if fail
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b * sizeof(unsigned int));
	if (result == NULL)
		exit(98);
	return (result);
}

