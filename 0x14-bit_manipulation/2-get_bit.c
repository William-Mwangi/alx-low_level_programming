#include <stddef.h>
#include "main.h"

/**
 * get_bit - check code
 * @n: int
 * @index: index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
