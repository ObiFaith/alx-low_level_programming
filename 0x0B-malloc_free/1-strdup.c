#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: On success, a pointer to the duplicated string else null
 */

char *_strdup(char *str)
{
	char *result;

	result = malloc((strlen(str) + 1) * sizeof(char));

	if (result == NULL || str == NULL)
		return (NULL);
	strcpy(result, str);
	return (result);
}
