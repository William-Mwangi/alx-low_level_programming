#include <stddef.h>
#include "main.h"

/**
 * clear_bit - check code
 * @n: int
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
