#include <unistd.h>
/**
 * _putchar - To print just a character
 * @c: A parameter
 *
 * Return: Always 0 (Success)
 */

char _putchar(char c)
{
	write(1, &c, 1);
}
