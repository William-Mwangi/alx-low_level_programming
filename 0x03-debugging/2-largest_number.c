#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if(a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if(c > a && c > b)
	{
		largest = c;
	}
	else if (a == b && a > c)
	{
		largest = a;
	}
	else if(a == b && c > a)
	{
		largest = c;
	}
	else if(a == c && b > a)
	{
		largest = b;
	}
	else if( a == c && a > b)
	{
		largest = a;
	}
	else if(c == b & a > b)
	{
		largest = a;
	}
	else if(c == b && b > a)
	{
		largest = b;
	}
	else
	{
		largest = a;
	}
	return (largest);
}
