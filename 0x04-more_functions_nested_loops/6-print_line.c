#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: no of line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('-');
	_putchar('\n');
}
