#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Purchar numbers of Base 16'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[17] = "0123456789abcdef";

	int a = 0;

	while (a < 16)
	{
		if (a < 10)
			putchar(a + '0');
		else
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

