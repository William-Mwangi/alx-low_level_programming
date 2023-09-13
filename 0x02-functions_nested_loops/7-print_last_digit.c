#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: a number
 * Return:the last digit
 */

int print_last_digit(int n)
{
	int num;

	n = abs(n);
	num = n % 10;
	_putchar('0' + num);
	return (num);
}
