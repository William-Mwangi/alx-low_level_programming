#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array
 * @min: smallest
 * @max: largest
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}
	result = malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		result[i - min] = i;
	}
	return (result);
}

