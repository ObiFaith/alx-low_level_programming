#include "main.h"
/**
 * print_sign - To print signs based on 0, +ve or -ve nos
 * @n: Number to check for
 *
 * Return: Always 0 (Succes)
 */

int print_sign(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
