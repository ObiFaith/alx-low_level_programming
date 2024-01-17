#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 *
 * Return: length of string if successful
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
