#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: destination string
 * @src : source string
 * @n: numbers of bytes
 *
 * Return : dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
