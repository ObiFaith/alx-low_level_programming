#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ap, const char *);

		if (str)
			printf("%s", str);
		else
			printf("%s", "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
