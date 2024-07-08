#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i] - j);
		}
	}
	return (NULL);
}
