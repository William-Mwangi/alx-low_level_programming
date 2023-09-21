#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	temp = 0;
	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	_putchar('\n');
}
