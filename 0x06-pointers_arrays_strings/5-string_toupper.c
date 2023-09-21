#include "main.h"
#include <ctype.h>

/**
 * string_toupper - convert string to uppercase
 * @str: the string
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
