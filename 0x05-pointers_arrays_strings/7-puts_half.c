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

	for (i = n; str[i] != '\0'; i++)
	{
		if (n % 2 == 0)
		{
			i = n / 2;
			_putchar(str[i]);
		}
		else
		{
			i = (n - 1) / 2;
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
