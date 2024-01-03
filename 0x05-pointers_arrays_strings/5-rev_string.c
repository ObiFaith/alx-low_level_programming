#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int len, i, j;

	len = strlen(s);
	char dest[len];

	strcpy(dest, s);
	j = len - 1;
	for (i = 0; i < len; i++)
	{
		s[i] = dest[j];
		j--;
	}
}
