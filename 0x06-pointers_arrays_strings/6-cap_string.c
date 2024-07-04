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
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			i++;
			while (str[i] == ' ' |
			str[i] == '\t' ||
			str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}')
			{
				i++;
			}
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}
