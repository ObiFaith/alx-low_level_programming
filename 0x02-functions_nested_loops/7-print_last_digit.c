#include "main.h"
/**
 * print_last_digit - Print the last digits
 * @num: the digits
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
