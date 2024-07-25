#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: count
 * @...: the numbers to sum
 *
 * Return: returns the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
