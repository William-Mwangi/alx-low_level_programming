#include <string.h>
#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
