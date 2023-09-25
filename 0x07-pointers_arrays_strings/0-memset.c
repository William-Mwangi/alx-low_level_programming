#include "main.h"
#include <string.h>

/**
 * _memset - fill n bytes of the memory area pointed by s with const byte b
 * @s: pointer
 * @b: byte to fill the memory area
 * @n: number of bytes to fill
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
