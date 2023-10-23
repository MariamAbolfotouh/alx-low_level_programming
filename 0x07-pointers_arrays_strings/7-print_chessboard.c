#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: Row
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8;)
	{
		for (; j < 8;)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
