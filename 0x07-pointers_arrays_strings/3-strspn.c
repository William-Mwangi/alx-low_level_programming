#include "main.h"
#include <string.h>

/**
 * _strspn -  get length of a prefix substring
 * @s: the string
 * @accept: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
