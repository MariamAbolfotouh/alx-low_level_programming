#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	char *p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}

	return (p);
}
