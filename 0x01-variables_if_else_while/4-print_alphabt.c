#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabelts except q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[27] = "abcdefghijklmnopqrstuvwxyz";

	int a = 0;

	while (a < 26)
	{
		if (ch[a] != q || ch[a] != e)
			putchar(ch[a]);
		a++;
	}
	putchar('\n');
	return (0);
}

