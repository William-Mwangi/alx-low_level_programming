#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if character is uppercase
 * @c: a character
 * Return: an int(0 or 1)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
