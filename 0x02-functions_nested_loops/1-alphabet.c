#include "main.h"
/**
 * print_alphabet - A function to prints all letters of the alphabets
 */

void print_alphabet(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;

	while (a < 26)
	{
		_putchar(alphabets[a]);
		a++;
	}
	_putchar('\n');
}
