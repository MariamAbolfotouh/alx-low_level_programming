#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a string using putchar function
 *
 * Return:  1 (Success)
*/

int main(void)
{
	int i;
	char s[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}

	return (1);
}
