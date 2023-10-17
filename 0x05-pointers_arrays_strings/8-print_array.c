#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: input array
 * @n: number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i;

	while (n > 0)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			_putchar(a[i]);
		}
		printf(", ");
		n++;
	}
	_putchar('\n');
}
