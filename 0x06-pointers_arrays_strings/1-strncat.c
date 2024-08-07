#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: numbers of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
