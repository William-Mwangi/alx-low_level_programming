#include "main.h"

/**
 * swap_int - swapping int values from 2 different variables
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
