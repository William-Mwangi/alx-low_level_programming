#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - return pointer to 2D array
 * @width: columns of the array
 * @height: rows of the array
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
		free(s);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
