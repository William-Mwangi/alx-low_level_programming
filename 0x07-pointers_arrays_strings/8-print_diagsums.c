#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: the 2*2 array
 * @size: the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum, j, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i  < size * size; i = i + size + 1)
	{
		sum = sum + a[i];
	}
	printf("%d, ", sum);
	for (j = size - 1; j  < size * size - 1; j = j + size - 1)
	{
		sum1 = sum1 + a[j];
	}
	printf("%d\n", sum1);
}
