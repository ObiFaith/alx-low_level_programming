#include "main.h"
/**
 * most_numbers - To print number from 0 - 9 except 2 and 4
 * Return: Always 0 (Success)
 */

void most_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
