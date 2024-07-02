#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string
*/

void rev_string(char *s)
{
	int i;
	char temp;

	for (i = 0; s[i] != '\0'; i++)

	for (int j = 0; i > j; i--, j++)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
}
