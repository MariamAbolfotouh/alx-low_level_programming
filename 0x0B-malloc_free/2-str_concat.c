#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l;
	char *p;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	p = malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < i; l++, k++)
	{
		p[k] = s1[l];
	}

	for (l = 0; l < j; l++, k++)
	{
		p[k] = s2[l];
	}

	return (p);
}
