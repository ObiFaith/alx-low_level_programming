#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: character
 * Return: 0 if successful
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
