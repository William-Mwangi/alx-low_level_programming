#include "main.h"

/**
 * times_table - print times table
 * Return: nothing
 */

void times_table(void)
{
	int i, ans;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			ans = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (ans < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(ans / 10 + '0');
			}
			_putchar(ans % 10 + '0');
		}
		_putchar('\n');
	}
}
