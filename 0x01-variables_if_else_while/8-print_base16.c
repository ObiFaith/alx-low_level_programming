#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Purchar numbers of Base 16'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[17] = "0123456789abcde";

	int a = 0;

	while (a < 16)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}

