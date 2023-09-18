#include "main.h"
#include <string.h>

/**
 * print_rev - print to stdout in reverse
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
