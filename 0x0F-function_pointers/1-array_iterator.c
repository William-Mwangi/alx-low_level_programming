#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterators through an array
 * @array: array
 * #size: size
 * @action: function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
