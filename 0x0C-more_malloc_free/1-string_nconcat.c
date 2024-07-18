#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: int
 *
 * Return: pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, strlen_1, strlen_2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}

	strlen_1 = 0;
	while (s1[strlen_1] != '\0')
	{
		strlen_1++;
	}
	strlen_2 = 0;
	while (s2[strlen_2] != '\0')
	{
		strlen_2++;
	}

	ptr = malloc((strlen_1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);
}
