#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: input array
 * @n: number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i, j;

	while (i > 0)
	{
		for (j = 0; *a[j] != '\0'; j++)
		{
			_putchar(*a[j]);
		}
		printf(", ");
		i++;
	}
	_putchar('\n');
}
