#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a: array
 * @n: n-element in ther array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
