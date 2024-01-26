#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char specifier[5] = {'c', 'i', 'f', 's', '\0'};
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(ap, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(ap, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(ap, double));
		else if (format[i] == 's')
		{
			const char *str = va_arg(ap, const char *);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}

		j = 0;
		while (specifier[j])
		{
			if (format[i] == specifier[j] && format[i + 1])
				printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
