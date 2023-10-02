#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: the string itself
 * Return: pointer to a char string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
