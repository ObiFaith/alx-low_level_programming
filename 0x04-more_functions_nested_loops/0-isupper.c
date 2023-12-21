#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character
 * Return: 1 if it's uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
