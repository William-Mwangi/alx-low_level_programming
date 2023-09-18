#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int  size = strlen(s);
	char tmp;
	int i, j;

	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
