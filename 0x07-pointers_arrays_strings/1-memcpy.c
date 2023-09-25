#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from  src to memory area dest
 * @dest: memoty area being pointed to
 * @src: memory area being pointed against
 * @n: number of bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
