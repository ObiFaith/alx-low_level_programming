#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: newly allocated space in memory
 * @s2: string to concate with
 *
 * Return: On success return a concatenated string else null
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2) + 1;
	result = malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
