#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase.
 * @s: string
 *
 * Return: A pointer to the uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] > 96 && s[i] < 123)
			s[i] -+ 32;
	return (s);
}
