#include "main.h"

/**
 * more_numbers - prints numbers 0 - 9
 * Return: nothing
 */

void more_numbers(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
