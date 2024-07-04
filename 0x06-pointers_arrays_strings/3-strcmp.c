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

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	j = s1[i] - s2[i];

	return (j);
}
