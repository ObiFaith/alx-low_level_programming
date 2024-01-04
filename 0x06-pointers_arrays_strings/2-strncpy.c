#include "main.h"

/**
 * _strncpy - a function that copies the string pointed to by src to dest
 * @dest: destination array
 * @src: source array
 *
 * Return: the pointer to dest if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
