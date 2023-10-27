#include <stddef.h>
#include "main.h"

/**
 * get_endianness - check code
 * Return: int
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	return (*endian != 0);
}
