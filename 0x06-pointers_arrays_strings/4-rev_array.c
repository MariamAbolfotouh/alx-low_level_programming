#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: array
 * @n: input number
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;

	for (i = 0; i < n; i++, n--)
	{
		if (i == n)
		{
			continue;
		}
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
