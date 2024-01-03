#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int i, half_len;

	if (strlen(str) % 2 != 0)
		half_len = (strlen(str) - 1) / 2;
	else
		half_len = strlen(str) / 2;

	for (i = half_len - 1; str[i]; i++)
		putchar(str[i]);
	putchar('\n');
}
