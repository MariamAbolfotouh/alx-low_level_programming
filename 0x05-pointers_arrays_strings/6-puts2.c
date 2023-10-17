#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: input string
*/

void puts2(char *str)
{
	for (int i = 0; str[i] != '\0'; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i])
		}
	}
	_putchar("\n");
}