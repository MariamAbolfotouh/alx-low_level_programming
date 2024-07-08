#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @*s: pointer to the array
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: to (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		*s++;
	}
	s = s - n - 1;

	return (s);
}
