#inlcude "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: numbers of parameter given
 *
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	int sum;

	va_start(ap, n);
	unsigned int i;

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

