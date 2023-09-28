#include "main.h"
#include <string.h>

int check_func(char *s, int start, int end);

/**
 * is_palindrome - check for a palindrome
 * @s: string in focus
 * Return: number
 */

int is_palindrome(char *s)
{
	int start, end;

	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	start = 0;
	end = strlen(s) - 1;
	return (check_func(s, start, end));
}

/**
 * check_func - checks for the palindrome
 * @s: the string
 * @start: int at start of the string
 * @end: int at end of the string
 * Return: int
 */

int check_func(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_func(s, start + 1, end - 1));
}
