#include <stdio.h>

/**
 * printTwoDigits - output number from range 0 - 99
 * @num: number to print
 */
void printTwoDigits(int num)
{
	if (num < 10)
	{
		putchar('0');
		putchar(num + '0');
	}
	else
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
	}
}
/**
 * main - print all possible diff combinatioms of two digits from range 0 - 99
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if (i < j)
			{
				printTwoDigits(i);
				putchar(' ');
				printTwoDigits(j);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
