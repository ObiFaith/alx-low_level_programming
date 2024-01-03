#include "main.h"

/**
 * print_rev - a function that prints a string in reverse, followed by '\n'
 * @s: string
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
