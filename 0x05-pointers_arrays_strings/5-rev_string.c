#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char tmp;

	len = strlen(s);
	for (i = 0, (j = len - 1); i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
