#include "main.h"

/**
 * create_array - a function that creates an array of chars, and initializes it with a specific char.
 * @size: size of memory allocated
 * @c: character
 *
 * Return: a pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
