#include "main.h"

/**
 * _memcpy - fills the first n bytes of the dest with src
 * @src: memory location pointed at
 * @dest: char to fill memory with
 * @n: size of menory to fill b with
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i]

	return (&dest[0]);
}
