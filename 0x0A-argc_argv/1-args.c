#include <stdio.h>

/**
 * main - a program that prints number of args followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
