#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: num of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
