#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input string
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
	{
		for (i /= 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		i--;
		for (i /= 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
