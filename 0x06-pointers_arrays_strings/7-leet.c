#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string
 *
 * Return: An encoded string
 */

char *leet(char *s)
{
	char arr1[5] = {'A', 'E', 'O', 'T', 'L'};
	int arr2[5] = {4, 3, 0, 7, 1};
	int i;
	int j;

	for (i = 0; s[i]; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == arr1[j] || s[i] == (arr1[j] + 32))
				s[i] = arr2[j] + '0';
	return (s);
}
