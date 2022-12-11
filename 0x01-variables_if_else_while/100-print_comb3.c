#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Unique Two Digits ranging from 0 - 100'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	int b = 1;

	int num = 1;

	while (a < 10)
	{
		while (b < 10)
		{
			if (!(a == b))
			{
				putchar(a + '0');
				putchar(b + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(',');
				}
				putchar(' ');
			}
			b++;
		}
		b = num + 1;
		a++;
	}
	putchar('\n');
	return (0);
}
