#include "main.h"

/**
 * _strcmp -  compares two strings
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: 15 or -15 0r 0
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i > j)
	{
		return (15);
	}

	else if (i < j)
	{
		return (-15);
	}

	else
	{
		return (0);
	}
}
