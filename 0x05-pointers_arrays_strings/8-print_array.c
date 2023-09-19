#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - function to print an array
 * @a: the array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
