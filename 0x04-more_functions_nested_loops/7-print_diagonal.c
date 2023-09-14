#include "main.h"

/**
 * print_diagonal - prints a line
 * @n: length of line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j, tmp;

	j = 0;
	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			while (j < i)
			{
				for (tmp = 0; tmp < i; tmp++)
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
