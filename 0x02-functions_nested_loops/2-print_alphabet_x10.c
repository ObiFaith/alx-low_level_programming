#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new line
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	int alp, i;

	for (i = 0; i < 10; i++)
	{
		for (alp = 97; alp < 123; alp++)
			putchar(alp);
		putchar('\n');
	}
}
