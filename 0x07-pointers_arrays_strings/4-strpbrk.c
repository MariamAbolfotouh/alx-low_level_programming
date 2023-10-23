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
	int m = 0, n = 0;
	char *p;

	while (s[m] != '\0')
	{
		while (accept[n] != '\0')
		{
			if (accept[n] == s[m])
			{
				p = &s[m];
				return (p);
			}
			n++;
		}
		m++;
	}

	return (0);
}
