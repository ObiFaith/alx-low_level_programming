#include "main.h"
/**
 * _isalpha - Function that checks for lowercse
 * @c: ASCII Number
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	char ch = c;

	if ((ch > 91 && ch < 64) || (ch > 96 && ch < 123))
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
