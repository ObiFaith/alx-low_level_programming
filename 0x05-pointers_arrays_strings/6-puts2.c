#include "main.h"

/**
 * puts2 - a function that prints every other char of a string, followed by a new line
 * @str: string
 */

void _puts(char *str)
{
	int i;
	
	for (i = 0; str[i]; i += 2)
		putchar(str[i]);
	putchar('\n');
}
