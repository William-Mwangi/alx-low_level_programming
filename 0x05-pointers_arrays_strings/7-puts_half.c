#include "main.h"
#include <string.h>

/**
 * puts_half - print to stdout
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int sizeToPrint, size, i;

	size = strlen(str);

	if (size % 2 == 0)
	{
		sizeToPrint = size / 2;
	}
	else
	{
		sizeToPrint = (size - 1) / 2;
		sizeToPrint += 1;
	}

	for (i = sizeToPrint; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
