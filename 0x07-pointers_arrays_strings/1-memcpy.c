#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @n: bytes of the memory area
 * @src: memory area
 * @dest: memory area
 *
 * Return: to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n;)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
