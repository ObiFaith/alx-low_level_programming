#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: char
 *
 * Return: a pointer to the 1st letter of d char in s or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i <= strlen(s) - 1; i++)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
