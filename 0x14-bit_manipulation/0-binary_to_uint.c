#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert base 2 to base 10
 * @b:binary
 * Return: int
 */

unsigned int binary_to_uint(const  char *b)
{
	unsigned int result = 0;
	int bit;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = *b - '0';
		result = (result << 1) | bit;
	}
	return (result);
}
