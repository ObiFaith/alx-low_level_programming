#include "main.h"
/**
 * swap_int - Function to swap the value of two pointers
 * @a: Pointer parameter1
 * @b: Pointer parameter2
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
