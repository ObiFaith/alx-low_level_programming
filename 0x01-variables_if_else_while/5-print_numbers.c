#include <stdio.h>

/**
 * main - Print numbers starting from 0 in base 10
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}
