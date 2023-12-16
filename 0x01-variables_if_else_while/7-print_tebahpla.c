#include <stdio.h>

/**
 * main - Print the alphabets
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
