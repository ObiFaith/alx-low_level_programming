#include <stdio.h>
#include "main.h"
/**
 * times_table - Time tables from 0*[0-9]
 *
 * Result: Always 0 (Success)
 */

void times_table(void)
{
	int a = 0;

	int b = 0;

	int n = 10;

	while (a < n)
	{
		while (b < n)
		{
			printf("%d", a * b);
			if (!(b == n - 1))
				printf(", ");
			b++;
		}
		printf("\n");
		b = 0;
		a++;
	}
}

