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

	for (; needle[i] != '\0'; i++)
	{
		for (; haystack[j] != '\0'; j++)
		{
			if (needle[i] != haystack[j])
			{
				break;
			}
		}

		if (needle[i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
