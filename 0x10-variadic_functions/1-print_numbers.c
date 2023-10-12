#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: separates nums
 * @n: nums
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
