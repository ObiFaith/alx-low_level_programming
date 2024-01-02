#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: int pointer to the first number
 * @b: int pointer to the second number
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*a = tmp;
}
