#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			else if (accept[j] != s[i])
			{
				continue;
			}
		}
	}
	if (s[i] == NULL)
	{
		return (NULL);
	}
}
