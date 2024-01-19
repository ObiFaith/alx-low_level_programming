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

	len = max - min + 1;
	str = malloc(len * sizeof(int));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str[i] = i + min;
	return (str);
}
