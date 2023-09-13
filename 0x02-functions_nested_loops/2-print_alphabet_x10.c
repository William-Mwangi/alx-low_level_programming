#include "main.h"

/**
 * print_alphabet - prints lower case letters 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;

	while (i < 11)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
