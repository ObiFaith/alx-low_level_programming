#include "main.h"
/**
 * print_numbers - To print mumbers from 0 to 9
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
