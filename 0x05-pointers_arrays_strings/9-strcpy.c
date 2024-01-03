#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src to dest
 * @dest: destination array
 * @src: source array
 *
 * Return: the pointer to dest if successful
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
