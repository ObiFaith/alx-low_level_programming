#include "main.h"
/**
 * _isupper - Function for Uppercase
 * @c: Int parameter
 *
 * Return: Always 0(Success)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
