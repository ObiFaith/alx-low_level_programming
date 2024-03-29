#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: the difference in number
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff = 0;

	for (i = 0; s1[i]; i++)
		if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
	if (diff < 0)
		return (-1);
	else if (diff > 0)
		return (1);
	else
		return (0);
}
