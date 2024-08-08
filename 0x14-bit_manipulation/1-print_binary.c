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
	unsigned long int i = 1UL << (sizeof(n) * 8 - 1);

	while (i)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
