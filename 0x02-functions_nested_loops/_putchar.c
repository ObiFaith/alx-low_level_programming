#include <unistd.h>
/**
* _putchar - To output the char c
* @c: the char to be output
* Return: Always 0 (Success)
*/

char _putchar(char c)
{
	return (write(1, &c, 1));
}
