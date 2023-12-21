#include "main.h"

/**
 * _isdigit - function that checks for uppercase character.
 * @c: character
 * Return: 1 if it's uppercase and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
