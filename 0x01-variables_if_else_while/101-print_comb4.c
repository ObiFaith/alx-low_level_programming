#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'Three digits comb'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	int b = 1;

	int c = 2;

	int num1 = 1;

	int num2 = 2;

	while (a < 8)
	{
		while (b < 9)
		{
			while (c < 10)
			{
				if (a < b)
				{
					if (b < c)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(c + '0');
						if (!(a == 7 && b == 8 && c == 9))
							putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = num2 + 1;
			b++;
		}
		b = num1 + 1;
		a++;
	}
	putchar('\n');
	return (0);
}
