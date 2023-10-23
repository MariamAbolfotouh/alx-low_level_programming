#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @n: bytes of the memory area
 * @b: constant byte
 * @s: memory area
 *
 * Return: to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++, n--)
	{
		s[j] = b;
	}
}

	return (s);
}
