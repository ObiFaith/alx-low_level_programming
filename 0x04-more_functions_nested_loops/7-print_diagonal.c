#include "main.h"
/**
 * print_diagonal - Function to print diagonals
 * @n: Int parameter value
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('\\');
			_putchar('\v');
			a++;
		}
	}
	_putchar('\n');
}
