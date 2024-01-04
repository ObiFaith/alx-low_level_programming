#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string
 *
 * Return: Capitalised string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char *seperator = ",;.!?(){} \n\t\"";

	for (i = 0; s[i]; i++)
		for (j = 0; j < strlen(seperator); j++)
			if (s[i] == seperator[j])
				if (s[i + 1] > 96 && s[i + 1] < 123)
					s[i + 1] -= 32;
	return (s);
}
