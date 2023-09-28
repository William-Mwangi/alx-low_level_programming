#include "main.h"

/**
 * checkFunc - checks for divisibility
 * @n: number in focus
 * @check: ints to check against
 * Return: int
 */

int checkFunc(int n, int check)
{
	if (check * check > n)
	{
		return (1);
	}
	if (n % check == 0)
	{
		return (0);
	}
	return (checkFunc(n, check + 1));
}

/**
 * is_prime_number - checks primality of number
 * @n: number in focus
 * Return: int
 */

int is_prime_number(int n)
{
	int check;

	check = 2;
	if (n <= 1)
	{
		return (0);
	}
	return (checkFunc(n, check));
}
