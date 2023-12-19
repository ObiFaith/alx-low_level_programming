#include "main.h"

/**
 * print_digit - print digits
 * @n: number to print each digit in it
 */

void print_digit(int n)
{
	if (n < 10)
	{
		putchar('0');
		putchar(n + '0');
	}
	else
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	}
}

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 * Return: 0 if successful
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			print_digit(i);
			putchar(':');
			print_digit(j);
			putchar('\n');
		}
	}
}
