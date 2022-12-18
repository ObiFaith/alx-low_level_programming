#include "main.h"
/**
 * print_last_digit - Print the last digits
 * @num: the digits
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	printf("%d", num % 10);
	return (num % 10);
}
