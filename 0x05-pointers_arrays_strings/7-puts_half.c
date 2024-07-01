#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @n: characters of the string
 */

void puts_half(char *str)
{
	int i;

	int n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		i = n / 2;
		for (i ; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		i = (n - 1) / 2;
		for (i ; str[i] != '\0'; i++)
		{	
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
