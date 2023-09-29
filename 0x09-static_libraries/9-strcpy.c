#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string from src to dest
 * @src: origin string
 * @dest: copied string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
