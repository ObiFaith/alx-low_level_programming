#include "main.h"
/**
 * _isdigit - Function for Uppercase
 * @c: Int parameter
 *
 * Return: Always 0(Success)
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
