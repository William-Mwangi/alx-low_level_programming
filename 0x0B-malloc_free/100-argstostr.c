#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - printing command line arguments
 * @ac: number of command lines arguments
 * @av: array of comand line arguments
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int position, total_length, i, length;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	concatenated = malloc(total_length + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			length = strlen(av[i]);
			strcpy(concatenated + position, av[i]);
			position += length;
			concatenated[position++] = '\n';
		}
	}
	concatenated[position] = '\0';
	return (concatenated);
}
