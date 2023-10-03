#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words, i, j, word_index, word_length, in_word;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_length = 0;
	in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word == 1)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], &str[i - word_length], word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
				in_word = 0;
			}
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
			}
			word_length++;
		}
	}
	if (in_word == 1)
	{
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], &str[strlen(str) - word_length], word_length);
		words[word_index][word_length] = '\0';
	}
	words[num_words] = NULL;
	return (words);
}
