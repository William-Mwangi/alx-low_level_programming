#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lowercase
 * @c: a character
 * Return: an int(0 or 1)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
