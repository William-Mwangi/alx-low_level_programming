#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 * Return: nothing
 */

void print_to_98(int n)
{
	int tmp;
	if (n >= 98)
	{
		while (n > 98)
		{
			if (n >= 100)
			{
				tmp = n;
				_putchar(tmp / 100 + '0');
				tmp %= 100;
				_putchar(tmp / 10 + '0');
				_putchar(tmp % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					_putchar('-');
					tmp = -n;
					if (tmp >=10)
					{
						_putchar(tmp / 10 + '0');
						_putchar(tmp % 10 + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(tmp % 10 + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(n % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
}
