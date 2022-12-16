#include "main.h"
/**
 * most_numbers - To print number from 0 - 9 except 2 and 4
 * Return: Always 0 (Success)
 */

void most_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			else
				_putchar(j + '0');
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}
