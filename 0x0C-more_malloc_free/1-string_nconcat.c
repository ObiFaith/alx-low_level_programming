#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: newly allocated space in memory
 * @s2: string to concate with
 * @n: length of string item
 *
 * Return: On success return a concatenated string else null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);
	len = strlen(s1) + n + 1;

	result = malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
