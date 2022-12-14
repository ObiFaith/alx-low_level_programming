#include "main.h"
/*
 * _islower - Return 1 for lowercase and 0 for otherwise
 * @c - ASCII Number
 */

int _islower(int c)
{
	char ch = c;
	if (ch > 96 && ch < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
