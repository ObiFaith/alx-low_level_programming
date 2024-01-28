#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful otherwise 1
 */

int main(int argc, char **argv)
{
	int sum;
	int i;
	int result;

	if (argc > 2)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			result = atoi(argv[i]);
			if (result == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += result;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
