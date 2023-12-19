#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp < 123; alp++)
		putchar(alp);
	putchar('\n');
}
