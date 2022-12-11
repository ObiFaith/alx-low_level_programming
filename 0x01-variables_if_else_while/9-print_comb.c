#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print numbers using putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
		a++;
	return (0);
}
