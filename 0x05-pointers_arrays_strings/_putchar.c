#include <unistd.h>
/**
 * _putchar - Functuon to print just a character
 * @c: Char parameter
 *
 * Return: Always 0 (Success)
 */

char _putchar(char c)
{
	write(1, &c, 1);
}
