#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
