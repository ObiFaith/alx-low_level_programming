
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	const char *str;
	char *specifier = "cifs";
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, const char*);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				break;
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
