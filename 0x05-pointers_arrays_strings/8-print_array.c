#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print an array
 * @a: the array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf((i + 1 == n) ? "%d\n" : "%d, ", a[i]);
	}
}
