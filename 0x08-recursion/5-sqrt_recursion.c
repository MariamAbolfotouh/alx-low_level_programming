#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: -1 If n does not have a natural square root
 */

int guess(int n, int sqr);
int _sqrt_recursion(int n)
{
	int sqr = 1;
	return (sqrt_recursion(n, ++sqr));
}

int guess(int n, int sqr)
{
	if (n = sqr * sqr)
	{
		return (sqr);
	}
	else if (sqr * sqr < n)
	{
		return (guess(n, sqr + 1));
	}
	else
	{
		return (-1);
	}
}
