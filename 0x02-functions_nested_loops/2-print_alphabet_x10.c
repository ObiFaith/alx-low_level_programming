#include "main.h"
/**
 * print_alphabet_x10 - A function to prints tge alphabets x10
 */

void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 26)
		{
			_putchar(ch[b]);
			b++;
		}
		b = 0;
		a++;
		_putchar('\n');
	}
}
