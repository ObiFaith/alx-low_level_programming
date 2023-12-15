#include <stdio.h>
/**
 * main - Write my first c program
 *
 * Return: Access 0 (void)
*/

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long));
	printf("Size of float: %d bytes(s)\n", sizeof(float));

	return (0);
}
