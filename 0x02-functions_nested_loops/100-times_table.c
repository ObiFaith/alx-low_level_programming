#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number
 * Return: 0 if successful
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
					printf("%4d", i * j);
				else
					printf("%d", i * j);
				if (j != n)
					printf(",");
			}
			putchar('\n');
		}
	}
}
