#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print using putchar()'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[27] = "abcdefghijklmnopqrstuvwxyz";

	int a = 0;

	while (a < 26)
	{
		putchar(ch[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
