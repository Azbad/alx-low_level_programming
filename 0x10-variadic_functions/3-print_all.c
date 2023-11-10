#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: Format string containing format specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	int first = 1;

	va_start(args, format);

	while (format && format[i])
	{
		if (first == 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		first = 0;
		i++;
	}

	va_end(args);
	printf("\n");
}
