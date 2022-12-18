#include "main.h"
/**
 * print_alphabet_x10 - A function to prints all letters of the alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		a++;
		_putchar('\n');
	}
}
