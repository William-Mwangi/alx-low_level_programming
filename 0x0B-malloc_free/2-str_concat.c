#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int size;
	char *ptr;

	if (s1 == NULL)
	{
		s1  = "";
	}
	if (s2 == NULL)
	{
		s2  = "";
	}
	size = (strlen(s1) + 1) + (strlen(s2) + 1);
	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	ptr = &s[strlen(s1)];
	strcpy(ptr, s2);
	return (s);
}
