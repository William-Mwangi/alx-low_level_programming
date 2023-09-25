#include "main.h"
#include <string.h>

/**
 * _strchr - get 1st occurrence of the char c in the string s
 * @s: the string
 * @c: the character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
