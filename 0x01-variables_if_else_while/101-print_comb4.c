#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, m;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (!(i == j && j == m) && j > i && m > j)
				{
					putchar(i);
					putchar(j);
					putchar(m);
					if (!(i == 55 && j == 56 && m == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
