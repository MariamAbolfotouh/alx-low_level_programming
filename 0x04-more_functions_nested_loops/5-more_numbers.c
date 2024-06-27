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
		for ( i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}

		for ( j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}

		char newline = '\n';

		write(1, &newline, 1);
	}
}
