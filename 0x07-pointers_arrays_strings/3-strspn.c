#include "main.h"

/**
 * _strspn - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: in the initial segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	unsigned int n = 0;

	for (; s[m] != '\0'; m++)
	{
		for (; accept[n] != s[m]; n++)
		{
			if (accept[n] == '\0')
			{
				return (m);
			}
		}
	}
	return (m);
}
