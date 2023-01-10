#include "main.h"
/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	char ch;
	int i;

	for (i = 0; *str; i++)
	{
		ch = *str++;
		_putchar(ch);
	}
	_putchar('\n');
}
