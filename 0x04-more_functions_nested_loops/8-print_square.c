#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: length of square
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
		for (j = 0; j < i; j++)
			_putchar('#');

