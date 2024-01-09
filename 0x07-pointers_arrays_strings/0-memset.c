#include "main.h"

/**
 * _memset - fills the first n bytes of the memory -> s with b
 * @s: memory location pinted at
 * @b: char to fill memory with
 * @n: size of menory to fill b with
 *
 * Returns: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (b);
}
