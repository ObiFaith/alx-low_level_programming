#include <stdio.h>
/**
 * main - Entry point
 * Description: C program for FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 100;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else if (n == 1)
			printf("%d", n);
		else
			printf(" %d", n);
	}
	return (0);
}
