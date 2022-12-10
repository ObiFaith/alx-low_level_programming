#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Base 10 in Reverse order'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch1[27] = "zyxwvutsrqponmlkjihgfedcba";
	int a = 0;

	while (a < 26)
	{
		putchar(ch1[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
