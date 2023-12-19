#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0 if successful
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
				printf("%3d", i * j);
			else
				printf("%d", i * j);
			if (j != 9)
				printf(",");
		}
		_putchar('\n');
	}
}
