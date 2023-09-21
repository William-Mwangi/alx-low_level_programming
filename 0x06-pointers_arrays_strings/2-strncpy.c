#include "main.h"
#include <string.h>

/**
 *  _strncpy - function to copy string from src to dest
 *  @dest: dest string
 *  @src: source string
 *  @n: number of bytes
 *  Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
