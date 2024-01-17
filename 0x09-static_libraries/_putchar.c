#include <unistd.h>

/**
 * _putchar - print a character
 * @c: character
 * Return: c if successful
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
