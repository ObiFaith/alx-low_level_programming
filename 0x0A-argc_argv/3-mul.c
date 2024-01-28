#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: 0 if successful otherwise 1
 */

int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
