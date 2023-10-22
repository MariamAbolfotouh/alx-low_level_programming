#include <stdio.h>

/**
 * main - Entry point
 *
 * DEscription:  prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
