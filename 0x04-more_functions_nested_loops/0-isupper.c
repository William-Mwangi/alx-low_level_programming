#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is lowercase
 * @c: a character
 * Return: an int(0 or 1)
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
