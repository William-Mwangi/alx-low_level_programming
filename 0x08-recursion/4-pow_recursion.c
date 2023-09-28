#include "main.h"

/**
 * _pow_recursion - raising a power to a number
 * @x: the base num
 * @y: the power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
