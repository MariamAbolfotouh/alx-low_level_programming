#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
