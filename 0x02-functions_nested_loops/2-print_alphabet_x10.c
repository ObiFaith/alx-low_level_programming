#include "main.h"
/**
 * print_alphabet_x10 - A function to prints all letters of the alphabets
 */

void print_alphabet_x10(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;

	int b = 0;

	while (b < 10)
	{
		while (a < 26)
		{
			_putchar(alphabets[a]);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
