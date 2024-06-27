#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;
	int n;

	for ( n = 0; n <= 9; n++)
	{
		for ( i = 0; i <= 14; i++)
		{
			j = i;

			if ( i > 9)
			{
				_putchar(1 + '0');
				j = i + i % 10;
			}
			_putchar(j);
		}
		_putchar('\n');
	}
}
