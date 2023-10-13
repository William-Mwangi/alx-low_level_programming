#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A list of format specifiers.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	unsigned int i = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
			{
				char *str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
			}
			break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
