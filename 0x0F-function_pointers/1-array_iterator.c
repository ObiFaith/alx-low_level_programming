#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each arr elem
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
