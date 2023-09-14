#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if character is lowercase
 * @c: a character
 * Return: an int(0 or 1)
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
