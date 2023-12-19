#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 * Return: 0 if successful
 */

int print_last_digit(int n)
{
	putchar (n % 10 + '0');
	return (n % 10 + '0');
}
