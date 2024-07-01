#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @n: characters of the string
 */

void puts_half(char *str)
{
	int i;
	int n;

	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; str[i] != '\0'; i++)
		{	
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
