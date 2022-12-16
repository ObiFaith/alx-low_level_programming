#include "main.h"
/**
 * print_square - Function to print squares
 * @size: Int parameter value
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	if (size > 0)
	{
		for (int a = 0; a < n; a++)
		{
			for (int b = 0; b < n; b++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
	_putchar('\n');
}
