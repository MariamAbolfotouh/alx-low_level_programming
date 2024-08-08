#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: num
 * @m: naother num
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int sum = 0;

	while (i != 0)
	{
		if (i & 1uL)
			sum++;
		i = i >> 1;
	}
	return (sum);
}
