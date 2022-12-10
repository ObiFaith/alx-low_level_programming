#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Purchar numbers of Base 16'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 16)
	{
		purchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}

