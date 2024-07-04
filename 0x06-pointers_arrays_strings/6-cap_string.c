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
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;

			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			{
				i++;
			}
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				i++;
			}
		}
	}
	return (str);
}
