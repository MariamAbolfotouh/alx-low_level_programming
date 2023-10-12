#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 *@n: input num
 *
 * Return: Always 0 (success)
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChar = 1; lnCh <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
