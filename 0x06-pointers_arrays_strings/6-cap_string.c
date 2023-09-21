#include <stdbool.h>
#include <string.h>

/**
 * is_separator - checks for the separators outlined
 * @c: each character to be checked
 * Return: bool
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	size_t i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - capitalize the letter in each word
 * @str: string
 * Return: pointer
 */

char *cap_string(char *str)
{
	bool capitalize_next = true;
	size_t i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = true;
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}
	}
	return (str);
}
