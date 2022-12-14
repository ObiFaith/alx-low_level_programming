#include "main.h"
/**
 * _abs - To get the absolute value of a number
 * @num: Int parameter
 *
 * Return: Always 0 (Success)
 */

int _abs(int num)
{
	if (num >= 0)
		_putchar(num + '0');
	else
		_putchar(-num + '0');
	_putchar('\n');
}
