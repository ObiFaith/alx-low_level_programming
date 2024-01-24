#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: number of elements in the array array
 * @cmp:  a pointer to the function to be used to compare values
 *
 * Return: index of the first elem for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i + 1);
	return (-1);
}
