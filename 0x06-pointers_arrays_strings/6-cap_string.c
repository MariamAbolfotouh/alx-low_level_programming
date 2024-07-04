#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: input
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
		{
			i++;

			if (str[i] == '\n')
			{
				i++;
				str[i] = str[i] - 32;
			}
			
			if (str[i] >= 65 && str[i] <= 90)
			{
				continue;
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
