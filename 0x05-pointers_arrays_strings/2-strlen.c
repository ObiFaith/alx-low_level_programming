#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; *s; i++)
	{
		if (*s++ != 0)
			len += 1;
	}
	return (len);
}
