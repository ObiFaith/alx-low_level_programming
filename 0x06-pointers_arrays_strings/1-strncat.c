#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination memory location
 * @src: source memory location
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src)
{
	int i;
	int j;
	int dest_len = strlen(dest);

	for (j = 0, i = dest_len; i < (dest_len + n) && src[j]; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
