#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number
 * Return: 0 if successful
 */

int print_sign(int n)
{
	if (n != 0)
	{
		if (n < 0)
		{
			putchar('-');
			return (-1);
		}
		else
		{
			putchar('+');
			return (1);
		}
	}
	else
	{
		putchar('0');
		return (0);
	}
}
