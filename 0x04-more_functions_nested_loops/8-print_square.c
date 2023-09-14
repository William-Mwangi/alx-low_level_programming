#include "main.h"

/**
 * print_square - print # as a square
 * @size: dimensions of square
 * Return: nothing
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
