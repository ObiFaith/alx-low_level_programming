#include <stdio.h>
#include "main.h"
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
		if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	return (0);
}
