#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: array value
 * @max: array value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int i, len, *str;

	len = min + max + 2;
	str = malloc(len * sizeof(int));

	if (str == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		*(str + i) = i;
	return (str);
}
