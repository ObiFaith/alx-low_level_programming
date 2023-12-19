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
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('+');
			return (1);
		}
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
