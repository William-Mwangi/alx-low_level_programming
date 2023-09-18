#include "main.h"
#include <string.h>

/**
 * puts_half - print to stdout
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int sizeToPrint, size;

	size = strlen(str);

	if (strlen(str) % 2 == 0)
	{
		sizeToPrint = size / 2;
	}
	else
	{
		sizeToPrint = (size - 1) / 2;
	}

	while (str[sizeToPrint] != '\0')
	{
		_putchar(str[sizeToPrint]);
		sizeToPrint++;
	}
	_putchar('\n');
}
