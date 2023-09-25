#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack: the bigger string
 * @needle: the smaller string
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
