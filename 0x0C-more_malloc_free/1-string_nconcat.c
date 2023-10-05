#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concats 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: num of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int fir, sec;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	fir = sizeof(char) * sizeof(s1);
	if (n >= strlen(s2))
	{
		sec = sizeof(char) * sizeof(s2);
	}
	else
	{
		sec = sizeof(char) * sizeof(n);
	}
	s = (char *)malloc(fir + sec);
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, s1);
	strncat(s, s2, n);
	return (s);
}
