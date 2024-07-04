#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @*src: input string
 * @*dest: input string
 *
 * Return: to dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	j = 0;

	for (i; dest[i] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
