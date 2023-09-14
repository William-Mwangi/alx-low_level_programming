#include <stdio.h>
/**
 * findLargestPrimeFactor - as name says
 * @n: the number in focus
 * Return: largest
 */

long findLargestPrimeFactor(long n)
{
	long i, largest;

	largest = -1;
	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 1)
	{
		largest = n;
	}
	return largest;
}

/**
 * main - check code
 * Return: 0
 */

int main()
{
	long number;
	long largestPrimeFactor;

	number = 612852475143;
	largestPrimeFactor = findLargestPrimeFactor(number);

	printf("%ld\n", largestPrimeFactor);
	return 0;
}
