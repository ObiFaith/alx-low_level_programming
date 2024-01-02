#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string
 */

{
	int len, i;

	len = _strlen(str);
	for (i = 0; str[i]; i++)
		putchar(str[i]);
	putchar('\n');
}
