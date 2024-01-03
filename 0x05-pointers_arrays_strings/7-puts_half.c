#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int i, half_len;

	half_len = (strlen(str) - 1) / 2;

	for (i = half_len; str[i]; i++)
		putchar(str[i]);
	putchar('\n');
}
