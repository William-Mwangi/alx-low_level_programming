#include "main.h"
#include <string.h>

/**
 *  _strncat - function to copy string from src to dest
 *  @dest: dest string
 *  @src: source string
 *  @n: number of bytes
 *  Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
