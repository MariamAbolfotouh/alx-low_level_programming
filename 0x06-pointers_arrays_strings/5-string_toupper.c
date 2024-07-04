#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of
 * a string to uppercase
 *
 * @str: input string
 *
 * Return: to string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			continue;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
