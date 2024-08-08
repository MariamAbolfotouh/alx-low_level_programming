#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: num
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8;
	int j = 0;

	while (i != 0)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			j++;
		}
		else if (j != 0)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
