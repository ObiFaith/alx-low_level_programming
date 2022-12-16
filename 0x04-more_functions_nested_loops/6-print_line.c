#include "main.h"
/**
 * print_line - Function to print lines
 * @n: Int parameter value
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
