#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: number 1
 * @y: number 2
 *
 * Return: to -1 If y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
