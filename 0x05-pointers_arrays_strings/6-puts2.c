#include "main.h"

/**
 * puts2 - a function that prints every other char of a string followed by '\n'
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (i % 2 == 0)
			putchar(str[i]);
	putchar('\n');
}
