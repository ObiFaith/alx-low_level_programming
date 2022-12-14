#include "main.h"
/**
 * _abs - To get the absolute value of a number
 * @num: Int parameter
 *
 * Return: Always 0 (Success)
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
